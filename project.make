api = 2
core = 7.x

; MAKE file for Roomify for Accommodations

; Include the definition for how to build Drupal core directly, including patches:
includes[] = drupal-org-core.make

; Download the Roomify install profile and recursively build all its dependencies:
projects[roomify][type] = profile
projects[roomify][download][type] = file
; This file must exist! You can make it with the following command:
; git archive HEAD | gzip > /tmp/roomify.tar.gz
projects[roomify][download][url] = file:///tmp/roomify.tar.gz
