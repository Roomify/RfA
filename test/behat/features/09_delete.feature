@api @javascript @global
Feature: Delete Property and Types

  Scenario: Roomify manager - Delete type and property
    Given I am logged in as a user with the "roomify manager" role
    And I visit "user"
    Then I click on the text "Your Properties"
    And I click on the text "+ add property"
    And I wait for AJAX to finish
    Then I fill in "property_name" with "Roomify manager locanda"
    And I select the radio button "Multi-Unit (multiple rooms / types within a property)"
    Then I press "Next"
    And I wait for AJAX to finish
    Then I fill in "types_container[0][name]" with "Standard"
    And I fill in "types_container[0][rooms]" with "2"
    And I fill in "types_container[0][default_price]" with "100"
    And I fill in "types_container[0][max_occupancy]" with "4"
    Then I press "create property and add details"
    And I wait for AJAX to finish
    Then I fill in wysiwyg on field "field_sp_description[en][0][value]" with "Test description"
    And I press "Save Property"
    Then I close the better messages dialog
    Then I click "Edit" in the "Roomify manager locanda" row
    Then I click on the text "Manage Rooms"
    And I should see "Standard" in the "Standard" row
    Then I click on the text "add types"
    And I wait for AJAX to finish
    Then I fill in "types_container[0][name]" with "Superior"
    And I fill in "types_container[0][rooms]" with "1"
    And I fill in "types_container[0][default_price]" with "200"
    And I fill in "types_container[0][max_occupancy]" with "2"
    Then I press "Add types"
    And I wait for AJAX to finish
    Then I should see "Superior" in the "Superior" row
    Then I click "Edit" in the "Superior" row
    And I press "Delete Type"
    Then I press "Delete"
    Then I click on the text "Edit"
    And I press "Delete Property"
    Then I press "Confirm"

  Scenario: Roomify manager - Delete property and all related types #1
    Given I am logged in as a user with the "roomify manager" role
    And I visit "user"
    Then I click on the text "Your Properties"
    And I click on the text "+ add property"
    And I wait for AJAX to finish
    Then I fill in "property_name" with "Roomify manager locanda"
    And I select the radio button "Multi-Unit (multiple rooms / types within a property)"
    Then I press "Next"
    And I wait for AJAX to finish
    Then I fill in "types_container[0][name]" with "Delete type 1"
    And I fill in "types_container[0][rooms]" with "2"
    And I fill in "types_container[0][default_price]" with "100"
    And I fill in "types_container[0][max_occupancy]" with "4"
    Then I press "add another type"
    And I wait for AJAX to finish
    And I fill in "types_container[1][name]" with "Delete type 2"
    And I fill in "types_container[1][rooms]" with "3"
    And I fill in "types_container[1][default_price]" with "150"
    And I fill in "types_container[1][max_occupancy]" with "3"
    Then I press "create property and add details"
    And I wait for AJAX to finish
    Then I fill in wysiwyg on field "field_sp_description[en][0][value]" with "Test description"
    And I press "Save Property"
    Then I close the better messages dialog
    Then I click "Edit" in the "Roomify manager locanda" row
    And I press "Delete Property"
    Then I press "Confirm"
    Then I visit "admin/bat/config/types"
    And I should not see "Delete type 1"
    And I should not see "Delete type 2"

  Scenario: Roomify manager - Delete property and all related types #2
    Given I am logged in as a user with the "roomify manager" role
    And I visit "user"
    Then I click on the text "Your Properties"
    And I click on the text "+ add property"
    And I wait for AJAX to finish
    Then I fill in "property_name" with "Roomify manager locanda"
    And I select the radio button "Multi-Unit (multiple rooms / types within a property)"
    Then I press "Next"
    And I wait for AJAX to finish
    Then I fill in "types_container[0][name]" with "Delete type 1"
    And I fill in "types_container[0][rooms]" with "2"
    And I fill in "types_container[0][default_price]" with "100"
    And I fill in "types_container[0][max_occupancy]" with "4"
    Then I press "add another type"
    And I wait for AJAX to finish
    And I fill in "types_container[1][name]" with "Delete type 2"
    And I fill in "types_container[1][rooms]" with "3"
    And I fill in "types_container[1][default_price]" with "150"
    And I fill in "types_container[1][max_occupancy]" with "3"
    Then I press "create property and add details"
    And I wait for AJAX to finish
    Then I fill in wysiwyg on field "field_sp_description[en][0][value]" with "Test description"
    And I press "Save Property"
    Then I close the better messages dialog
    Then I click "Edit" in the "Roomify manager locanda" row
    Then I click on the text "Manage Rooms"
    Then I click "Units" in the "Delete type 1" row
    And I click on the text "Add Units"
    And I fill in "units" with "2"
    And I press "Add"
    Then I click on the text "Back to Property"
    Then I click on the text "Manage Rooms"
    Then I click "Units" in the "Delete type 2" row
    And I click on the text "Add Units"
    And I fill in "units" with "2"
    And I press "Add"
    Then I click on the text "Back to Property"
    And I press "Delete Property"
    Then I press "Confirm"
    Then I visit "admin/bat/config/types"
    And I should not see "Delete type 1"
    And I should not see "Delete type 2"
    Then All units of type "Delete type 1" are deleted
    Then All units of type "Delete type 2" are deleted
