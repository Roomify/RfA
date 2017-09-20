<?php

/**
 * @file
 */

/**
 * Implements hook_token_info_alter().
 */
function roomify_accommodation_booking_token_info_alter(&$data) {
  $data['tokens']['bat_booking']['days-left'] = array(
    'name' => t('Days left before the booking'),
    'description' => t('Days left before the booking.'),
  );
  $data['tokens']['bat_booking']['booking-table-details'] = array(
    'name' => t('Booking table details'),
    'description' => t('A detailed table with check-in, check-out and property info'),
  );
  $data['tokens']['roomify_property']['property-table-details'] = array(
    'name' => t('Property table details'),
    'description' => t('A detailed table of the property with image and property info'),
  );
}

/**
 * Implements hook_tokens().
 */
function roomify_accommodation_booking_tokens($type, $tokens, array $data = array(), array $options = array()) {
  $return = array();

  if ($type == 'bat_booking' && !empty($data['bat_booking'])) {
    $booking = $data['bat_booking'];

    foreach ($tokens as $name => $original) {
      switch ($name) {
        case 'days-left':
          $booking_start_date = new DateTime($booking->booking_start_date[LANGUAGE_NONE][0]['value']);
          $today = new DateTime();
          $diff = $today->diff($booking_start_date);

          $return[$original] = ($diff->invert) ? -1 * $diff->days : $diff->days;
          break;

        case 'booking-table-details':
          $booking_start_date = new DateTime($booking->booking_start_date[LANGUAGE_NONE][0]['value']);
          $booking_end_date = new DateTime($booking->booking_end_date[LANGUAGE_NONE][0]['value']);
          $image = '';
          $name = '';
          $short_description = '';
          $guests = '';
          if (isset($booking->booking_guests[LANGUAGE_NONE][0]['value'])) {
            $guests = '<p style="margin:5px 0;width:100%">Guests:  <strong>' . $booking->booking_guests[LANGUAGE_NONE][0]['value'] . '</strong></p>';
          }
          if (isset($booking->booking_event_reference[LANGUAGE_NONE][0]['target_id'])) {
            if ($event = bat_event_load($booking->booking_event_reference[LANGUAGE_NONE][0]['target_id'])) {
              $event_wrapper = entity_metadata_wrapper('bat_event', $event);
              $type = bat_type_load($event_wrapper->event_bat_unit_reference->type_id->value());

              if ($property_id = field_get_items('bat_type', $type, 'field_st_property_reference')) {
                $property = roomify_property_load($property_id[0]['target_id']);
                $name = $property->name;
                if ($featured_image = field_get_items('roomify_property', $property, 'field_sp_featured_image')) {
                  $image = array('style_name' => 'square', 'path' => $featured_image[0]['uri']);
                  $image['attributes'] = array('style' => 'width:270px;border: 2px solid white;vertical-align:bottom;');
                  $image = theme('image_style', $image);
                  $short_description = field_get_items('roomify_property', $property, 'field_sp_short_description');
                  $short_description = $short_description[0]['value'];
                }
              }
            }
          }
          $return[$original] =
            '<table style="width: 590px;padding-right:10px;background: #ececec;margin-bottom:20px;">
              <tbody>
                <tr>
                  <td>' . $image . '</td>
                  <td style="padding-left:30px;padding-right:10px;">
                      <strong style="width:100%;font-size:23px">' . $name . '</strong>
                      <p style="margin:5px 0;font-size:13px;width:100%">' . $short_description . '</p>
                      <p style="margin:5px 0;width:100%">Check-in :   <strong>' . $booking_start_date->format('D, d M, Y') . '</strong></p>
                      <p style="margin:5px 0;width:100%">Check-out:  <strong>' . $booking_end_date->format('D, d M, Y') . '</strong></p>' . $guests . '
                  </td>
                </tr>
              <tbody>
            </table>';
          break;
      }
    }
  }
  if ($type == 'roomify_property' && !empty($data['roomify_property'])) {
    $property = $data['roomify_property'];

    foreach ($tokens as $name => $original) {
      switch ($name) {
        case 'property-table-details':
          $image = '';
          $name = '';
          $short_description = '';
          $name = $property->name;
          if ($featured_image = field_get_items('roomify_property', $property, 'field_sp_featured_image')) {
            $image = array('style_name' => 'square', 'path' => $featured_image[0]['uri']);
            $image['attributes'] = array('style' => 'width:270px;border: 2px solid white;vertical-align:bottom;');
            $image = theme('image_style', $image);
            $short_description = field_get_items('roomify_property', $property, 'field_sp_short_description');
            $short_description = $short_description[0]['value'];
          }
          $return[$original] =
            '<table style="width: 590px;padding-right:10px;background: #ececec;margin-bottom:20px;">
              <tbody>
                <tr>
                  <td>' . $image . '</td>
                  <td style="padding-left:30px;padding-right:10px;">
                    <strong style="width:100%;font-size:23px">' . $name . '</strong>
                    <p style="margin:5px 0;font-size:13px;width:100%">' . $short_description . '</p>
                  </td>
                </tr>
              <tbody>
            </table>';
          break;
      }
    }
  }

  return $return;
}
