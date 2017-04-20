@api @javascript @global
Feature: Booking

  Background:
    Given users:
      | name             | mail                 | roles             |
      | _roomify_manager | manager@example.com  | roomify manager   |
      | _property_owner  | property@example.com | property owner    |

  Scenario: Add bookings
    Given I am logged in as "_roomify_manager"
    And I visit "user"
    Then I click on the text "Your Properties"
    And I click on the text "+ add property"
    And I wait for AJAX to finish
    Then I fill in "property_name" with "My casa for bookings"
    And I select the radio button "Single-Unit (entire home)"
    Then I press "Next"
    And I wait for AJAX to finish
    Then I fill in "max_occupants" with "4"
    And I fill in "default_price" with "100"
    Then I press "create property and add details"
    And I wait for AJAX to finish
    Then I fill in wysiwyg on field "field_sp_description[en][0][value]" with "Test description"
    And I press "Save Property"
    Then I close the better messages dialog
    Then I click "Availability" in the "My casa for bookings" row
    And I wait 10 seconds
    Then I select dates between "2017-08-07" and "2017-08-10" for the last unit
    And I wait 10 seconds
    Then I press "Create booking"
    And I wait for AJAX to finish
    Then I press "Save Booking"

    Then I visit "user"
    And I click on the text "Your Properties"
    Then I click on the text "+ add property"
    And I wait for AJAX to finish
    Then I fill in "property_name" with "My casa2 for bookings"
    And I select the radio button "Single-Unit (entire home)"
    Then I press "Next"
    And I wait for AJAX to finish
    Then I fill in "max_occupants" with "4"
    And I fill in "default_price" with "100"
    Then I press "create property and add details"
    And I wait for AJAX to finish
    Then I fill in wysiwyg on field "field_sp_description[en][0][value]" with "Test description"
    And I press "Save Property"
    Then I close the better messages dialog
    Then I click "Availability" in the "My casa2 for bookings" row
    And I wait 10 seconds
    Then I select dates between "2017-05-07" and "2017-05-10" for the last unit
    And I wait 10 seconds
    Then I press "Create booking"
    And I wait for AJAX to finish
    Then I press "Save Booking"

    # Test the dashboard bookings view filters.
    Then I visit "admin/bat/bookings"
    And I fill in "booking_start_date_value[value][date]" with "08/01/2017"
    And I fill in "booking_end_date_value[value][date]" with "08/21/2017"
    And I fill in "name" with "My casa for bookings"
    Then I press "Apply"
    Then I should see "2017-08-07" in the "My casa for bookings" row
    And I should see "2017-08-09" in the "My casa for bookings" row

    Then I visit "admin/bat/bookings"
    And I fill in "booking_start_date_value[value][date]" with "05/01/2017"
    And I fill in "booking_end_date_value[value][date]" with "05/21/2017"
    Then I press "Apply"
    Then I should see "2017-05-07" in the "My casa2 for bookings" row
    And I should see "2017-05-09" in the "My casa2 for bookings" row

    # Delete test bookings.
    Then I visit "admin/bat/bookings"
    And I fill in "name" with "My casa for bookings"
    Then I press "Apply"
    And I click "Edit" in the "My casa for bookings" row
    And I press "Delete Booking"
    Then I press "Confirm"
    Then I visit "admin/bat/bookings"
    And I fill in "name" with "My casa2 for bookings"
    Then I press "Apply"
    And I click "Edit" in the "My casa2 for bookings" row
    And I press "Delete Booking"
    Then I press "Confirm"

    # Delete properties to prevent issues with other tests.
    Then I visit "user"
    And I click "Edit" in the "My casa for bookings" row
    And I press "Delete Property"
    Then I press "Confirm"
    Then I visit "user"
    And I click "Edit" in the "My casa2 for bookings" row
    And I press "Delete Property"
    Then I press "Confirm"
