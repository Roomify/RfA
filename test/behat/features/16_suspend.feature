@api @javascript @global
Feature: Suspend Property and Types

  Scenario: Roomify manager - Create new Property and Suspend
    Given I am logged in as a user with the "roomify manager" role
    And I visit "user"
    Then I click on the text "Your Properties"
    And I click on the text "+ add property"
    And I wait for AJAX to finish
    Then I fill in "property_name" with "Roomify manager casa"
    And I select the radio button "Single-Unit (entire home)"
    Then I press "Next"
    And I wait for AJAX to finish
    Then I fill in "max_occupants" with "4"
    And I fill in "default_price" with "100"
    Then I press "create property and add details"
    And I wait for AJAX to finish
    Then I fill in wysiwyg on field "field_sp_description[en][0][value]" with "Test description"
    And I press "Save Property"
    Then I click on the text "Edit"
    And I press "Suspend Property"
    And I should see "Property suspend"
    And I press "Activate Property"
    Then I click on the text "Manage House"
    And I should see "Edit Roomify manager casa"
    And I press "Suspend Type"
    And I should see "Type suspend"
    And I press "Activate Type"

  Scenario: Property owner - Create new Property and Suspend
    Given I am logged in as a user with the "property owner" role
    Then I click on the text "+ Add Property"
    And I wait for AJAX to finish
    Then I fill in "property_name" with "Property owner casa"
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
    Then I click on the text "Edit"
    And I press "Suspend Property"
    And I should see "Property suspend"
    And I press "Activate Property"
    Then I click on the text "Manage House"
    And I should see "Edit Property owner casa"
    And I press "Suspend Type"
    And I should see "Type suspend"
    And I press "Activate Type"
