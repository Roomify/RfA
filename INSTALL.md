## To install from the packaged version

* Go to the [latest release page](https://github.com/Roomify/roomify/releases/latest) and download the roomify-accommodations-default.{version}.zip file
* Then, follow the [installation instructions](http://docs.roomify.us/accommodations_selfhost/index.html)

## To build RfA for development purposes

* Ensure that a recent version of [drush](https://github.com/drush-ops/drush) is installed
* Run the following commands:

```
git archive HEAD | gzip > /tmp/roomify.tar.gz
drush make project.make www
```

* This will build a copy of RfA from the latest local commit and place it in the www directory.
