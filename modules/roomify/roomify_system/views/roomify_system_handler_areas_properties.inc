<?php

/**
 * @file
 * Contains a Views field handler to take care of displaying edit links
 * as fields.
 */

/**
 *
 */
class roomify_system_handler_areas_properties extends views_handler_field {

  /**
   * {@inheritdoc}
   */
  public function construct() {
    parent::construct();
  }

  /**
   * {@inheritdoc}
   */
  public function query() {
    $this->ensure_my_table();
    $this->add_additional_fields();
  }

  /**
   * {@inheritdoc}
   */
  public function render($values) {
    $properties = entity_load('roomify_property', FALSE, array(), TRUE);
    $properties_ids = roomify_property_ids();
    $area_properties = array();
    foreach ($properties as $property) {
      if ($property->status == 1) {
        $areas = field_get_items('roomify_property', $property, 'field_sp_area');
        if (!empty($areas)) {
          foreach ($areas as $area) {
            if ($area['tid'] == $values->tid) {
              $area_properties[] = $property;
            }
          }
        }
      }
    }
    $list = '';
    foreach ($area_properties as $property) {
      $list .= '<a class="area-property" href="/listing/' . $property->property_id . '">';
      if ($featured_image = field_get_items('roomify_property', $property, 'field_sp_featured_image')) {
        $image = array(
          'style_name' => 'homepage_features',
          'path' => $featured_image[0]['uri'],
        );
      }
      $list .= '<div class="property-featured-image">' . theme('image_style', $image) . '</div>';

      $price = get_lower_default_price_property_types($property->property_id);

      $list .= '<div class="property-details">
        <table>
         <tbody>
          <tr>
            <td class="property-name">' . $property->name . '</td>
          </tr>
          <tr>
            <td class="starting-price"><div class="listing-base-price">
              <span class="starting-from">' . t('starting from') . ' </span>
              <span class="price">' . $price . '</span>
            </div> </td>
          </tr>
        </tbody>
        </table></div>';

      $list .= '</a>';

    }
    return $list;
  }

}
