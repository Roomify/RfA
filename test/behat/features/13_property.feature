@api @javascript @global
Feature: Manage Property

  Scenario: Roomify manager - Create new Property
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
    Then I press "add another type"
    And I wait for AJAX to finish
    And I fill in "types_container[1][name]" with "Deluxe"
    And I fill in "types_container[1][rooms]" with "3"
    And I fill in "types_container[1][default_price]" with "150"
    And I fill in "types_container[1][max_occupancy]" with "3"
    Then I press "create property and add details"
    And I wait for AJAX to finish
    Then I click on the text "Manage Rooms"
    And I should see "Standard" in the "Standard" row
    And I should see "Deluxe" in the "Deluxe" row
    Then I click on the text "add types"
    And I wait for AJAX to finish
    Then I fill in "types_container[0][name]" with "Superior"
    And I fill in "types_container[0][rooms]" with "1"
    And I fill in "types_container[0][default_price]" with "200"
    And I fill in "types_container[0][max_occupancy]" with "2"
    Then I press "Add types"
    And I wait for AJAX to finish
    Then I should see "Superior" in the "Superior" row

  Scenario: Property owner - Create new Property
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
    Then I click on the text "Availability"
    And I should see "Bulk Availability Update"
    Then I click on the text "Manage pricing"
    And I should see "Price tester"
    Then I click on the text "Manage House"
    And I should see "Edit Property owner casa"
    And I click on the text "Back to Property"

  Scenario: Dashboard - Add new property link
    Given I am logged in as a user with the "guest" role
    And I visit "user"
    Then I should not see the text "Your Properties"

    Given I am logged in as a user with the "content editor" role
    And I visit "user"
    Then I should not see the text "Your Properties"

    Given I am logged in as a user with the "property owner" role
    And I visit "user"
    Then I click on the text "Your Properties"
    And I should see the link "+ Add Property"

    Given I am logged in as a user with the "roomify manager" role
    And I visit "user"
    Then I click on the text "Your Properties"
    And I should see the link "add property"

    Given I am logged in as a user with the "roomify manager,property owner" role
    And I visit "user"
    Then I click on the text "Your Properties"
    And I should see the link "add property"
