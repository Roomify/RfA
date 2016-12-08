#!/bin/bash
#
# Export site with only its enabled modules.
# This script expects to be called in a valid drupal
# site directory.
#
# It expects two arguments - the path to the current and new site directories.
#

SITE_DIR="${1}"
NEW_SITE_DIR="${2}"

# Get the name of the product we're using.
PRODUCT=$( drush -r ${SITE_DIR} vget --exact roomify_installed_product )

# Get a list of enabled modules.
ENABLED_MODULES=','
while IFS=, read category name type status version
do
  machine_name=$(echo $name|awk -F\( '{print $2}'|awk -F\) '{print $1}')
  if [ "${status}" == 'Enabled' ]
  then
    if [ "${type}" == 'Module' ]
    then
      ENABLED_MODULES+="${machine_name},"
    fi
  fi
done < <(drush -r ${SITE_DIR} pml --format=csv)

# Clear caches.
drush -r ${SITE_DIR} cc all

# Move only enabled modules to sites/all.
# We manually specify modules whose name don't match their directory name.
MODULES_TO_MOVE="${ENABLED_MODULES},bat_tools,geolocation,"
for dir in $(ls ${SITE_DIR}/profiles/roomify/modules)
do
  for module in $(ls ${SITE_DIR}/profiles/roomify/modules/${dir}/)
  do
    if echo ${MODULES_TO_MOVE} | grep -q ",${module},"
    then
      echo "Moving ${module} to sites/all/modules/${dir}"
      mkdir -p ${SITE_DIR}/sites/all/modules/${dir}
      mv ${SITE_DIR}/profiles/roomify/modules/${dir}/${module} ${SITE_DIR}/sites/all/modules/${dir}
    fi
  done
done

# Check that all enabled modules got moved.
MODULES_NOT_FOUND=''
for i in $(echo ${ENABLED_MODULES} | tr "," "\n")
do
  if ! find ${SITE_DIR}/modules ${SITE_DIR}/sites/all/modules -name "$i.module" | grep '.'
  then
    export MODULES_NOT_FOUND="${MODULES_NOT_FOUND}, ${i}"
  fi
done
if [ "${MODULES_NOT_FOUND}" != '' ]
then
  echo "The modules ${MODULES_NOT_FOUND} were not found!"
  exit 1
fi

# Move only enabled themes to sites/all.
for dir in $(ls ${SITE_DIR}/profiles/roomify/themes)
do
  for theme in $(ls ${SITE_DIR}/profiles/roomify/themes/${dir})
  do
    echo "Moving ${theme} to sites/all/themes/${dir}"
    mkdir -p ${SITE_DIR}/sites/all/themes/${dir}
    mv ${SITE_DIR}/profiles/roomify/themes/${dir}/${theme} ${SITE_DIR}/sites/all/themes/${dir}
  done
done

# Move libraries to sites/all.
rm -r ${SITE_DIR}/sites/all/libraries
mv ${SITE_DIR}/profiles/roomify/libraries ${SITE_DIR}/sites/all

# Remove the profiles dir.
rm -r ${SITE_DIR}/profiles/roomify

# Remove the test dir.
rm -r ${SITE_DIR}/test

# I hate the drupal registry.
drush -r ${SITE_DIR} sqlq 'TRUNCATE TABLE registry_file'
drush -r ${SITE_DIR} sqlq 'UPDATE registry SET filename = REPLACE(filename, "profiles/roomify/", "sites/all/") WHERE filename LIKE "profiles/roomify/%"'
drush -r ${SITE_DIR} sqlq 'UPDATE system SET filename = REPLACE(filename, "profiles/roomify/", "sites/all/") WHERE filename LIKE "profiles/roomify/%"'
drush -r ${SITE_DIR} sqlq 'UPDATE menu_router SET include_file = REPLACE(include_file, "profiles/roomify/", "sites/all/") WHERE include_file LIKE "profiles/roomify/%"'
drush -r ${SITE_DIR} sqlq 'UPDATE system SET filename = "profiles/standard/standard.profile", name = "standard", schema_version = 0 WHERE name = "roomify"'
drush -r ${SITE_DIR} sqlq 'UPDATE variable SET value="s:8:\"standard\";" WHERE name = "install_profile"'

# Rebuild the registry.
drush -r ${SITE_DIR} rr

# Copy to our new directory, excluding the roomify profile directory.
cp -rp ${SITE_DIR} ${NEW_SITE_DIR}

# Set the installation profile variable to "standard" before
# exporting the DB.
drush -r ${SITE_DIR} vset -y installation_profile standard

# Export the DB.
drush -r ${SITE_DIR} cc all && drush -y -r ${SITE_DIR} watchdog-delete all && drush -r ${SITE_DIR} sql-dump > "${NEW_SITE_DIR}/${PRODUCT}-database.sql"
