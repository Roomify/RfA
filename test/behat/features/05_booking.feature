@api @javascript @global
Feature: Booking

  Background:
    Given users:
      | name             | mail                 | roles             |
      | _roomify_manager | manager@example.com  | roomify manager   |
      | _property_owner  | property@example.com | property owner    |

  Scenario: Add bookings
    Given dates "+1 month" and "+1 month +3 days" in format big-endian
    And we save that into "DATE1,DATE2"

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
    And i wait 5 seconds
    Then I select dates between "<<DATE1>>" and "<<DATE2>>" for the last unit
    And i wait 5 seconds
    Then I press "Create booking"
    And I wait for AJAX to finish
    Then I press "Save Booking"

    Given dates "+2 months" and "+2 months +3 days" in format big-endian
    And we save that into "DATE1,DATE2"

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
    And i wait 5 seconds
    Then I select dates between "<<DATE1>>" and "<<DATE2>>" for the last unit
    And i wait 5 seconds
    Then I press "Create booking"
    And I wait for AJAX to finish
    Then I press "Save Booking"

    # Test the dashboard bookings view filters.
    Given dates "+1 month" and "+1 month +20 days" in format middle-endian
    And we save that into "DATE1,DATE2"

    Then I visit "admin/bat/bookings"
    And I fill in "booking_start_date_value[value][date]" with "<<DATE1>>"
    And I fill in "booking_end_date_value[value][date]" with "<<DATE2>>"
    And I fill in "name" with "My casa for bookings"
    Then I press "Apply"

    Given dates "+1 month" and "+1 month +2 days" in format big-endian
    And we save that into "DATE1,DATE2"

    Then I should see "<<DATE1>>" in the "My casa for bookings" row
    And I should see "<<DATE2>>" in the "My casa for bookings" row

    Given dates "+2 months" and "+2 months +20 days" in format middle-endian
    And we save that into "DATE1,DATE2"

    Then I visit "admin/bat/bookings"
    And I fill in "booking_start_date_value[value][date]" with "<<DATE1>>"
    And I fill in "booking_end_date_value[value][date]" with "<<DATE2>>"
    Then I press "Apply"

    Given dates "+2 months" and "+2 months +2 days" in format big-endian
    And we save that into "DATE1,DATE2"

    Then I should see "<<DATE1>>" in the "My casa2 for bookings" row
    And I should see "<<DATE2>>" in the "My casa2 for bookings" row

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
