<div class="<?php print $classes ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>


<div class="section-container section-1 section-slideshow">
  <div class="section-row">
      <?php print $content['slideshow']; ?>
  </div>
</div>


<div class="section-container section-2 section-headline">
  <div class="section-row">
    <?php print $content['headline']; ?>
  </div>
</div>


<div class="section-container section-3 section-highlight">
  <div class="section-row">
    <div class="highlight highlight-intro">
       <?php print $content['highlight-intro']; ?>
    </div>
    <div class="highlight highlight-1">
        <?php print $content['highlight1']; ?>
      </div>
      <div class="highlight highlight-2">
        <?php print $content['highlight2']; ?>
      </div>
      <div class="highlight highlight-3">
        <?php print $content['highlight3']; ?>
      </div>
  </div>
</div>  

 
<div class="section-container section-4 section-booking-user-details" id="search-availability">
  <div class="section-row row-top"> 
    <div class="panel_sl_booking">
      <?php print $content['booking']; ?>
    </div>
    <div class="panel_sl_user_details">
      <div class="listing-contact-block">
        <?php print $content['user-details']; ?>
      </div>
    </div>

  </div>

  <div class="section-row">
     <div id="property-types" class="property-types">
       <?php print $content['property-types']; ?>
     </div>
  </div>
  <div class="section-row">
     <div class="property-description">
       <?php print $content['property-description']; ?>
     </div>
  </div>
</div>

  
</div>
