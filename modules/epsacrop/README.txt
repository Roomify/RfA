
-- SUMMARY --

EPSA Crop is a module that allows a user to choose coordinates for different
styles on an image. If a user defines coordinates EPSACrop will create a image
with the points.

If the user doesn't change the coordinates, the normal crop process is applied.

You can try out a demonstration of the Drupal 6 version of this module, here:
http://www.aswissidea.com


-- REQUIRENENTS --

EPSACrop requires that the following module is enabled:
 - Image
 - Libraries

EPSACrop requires that the following external libraries are installed:
 - JCrop (http://deepliquid.com/content/Jcrop.html)
 - json2 (https://github.com/douglascrockford/JSON-js)


-- INSTALLATION --

1. Download the EPSAcrop module and place it into your modules directory
   (ex. sites/all/modules or sites/all/modules/contrib)

2. Download and unpack the JCrop library. Rename the resulting directory to
   'Jcrop' and place into the libraries directory (ex.: sites/all/libraries/Jcrop).

3. Download the and unpack the json2 library. Rename the resulting directory to
   'json2' and place it into the libraries directory (ex.: sites/all/libraries/json2).

4. Go to admin/build/modules and enable EPSA Crop.

-- CONFIGURATION --

1. Enable the module and set the permissions at People -> Permissions.

2. Go to Configuration -> Media -> Image styles and change/add an image style.
   Add the effect 'EPSA Image crop' to any style.

3. Adjust the field settings for any Image field. For a content type, the field
   settings are located at Structure -> Content Type -> {type} -> Manage fields.
   Click 'edit' and select Available EPSACrop styles under "EPSACrop settings".
   (All image styles containing the 'EPSA Image crop' effect should appear.)

4. Adjust the field display settings for this image field. For a content type,
   the field display settings are located at
   Structure -> Content Type -> {type} -> Manage display. Select the image style
   chosen in step 3 again to see your cropped image display.
  

-- TROUBLESHOOTING --

For questions, comments, or bug reports, please use the issue queue:
https://drupal.org/project/issues/epsacrop?categories=All


Current maintainers:
* Yvan Marques (yvmarques) - http://drupal.org/user/298685
* gbaudoin - http://drupal.org/user/377795
