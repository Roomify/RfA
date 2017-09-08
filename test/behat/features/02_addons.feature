@api @javascript @global
Feature: Add-ons

  Scenario: Decrease price by percentage amount
    Given I am logged in as a user with the "roomify manager" role on this site
    And I visit "admin/bat/config/types/manage/2/edit"
    Then I click on the text "Add-Ons"
    And I fill in "field_addons[en][0][name]" with "Decrease price by percentage amount"
    And I select "decrease" from "field_addons[en][0][operation]"
    And I fill in "field_addons[en][0][value]" with "50"
    Then I press "Save Type"

    Then I visit "booking/2017-12-02/2017-12-05/2"
    And I should see "$45.00" in the "#roomify-accommodation-booking-confirmation-form td.price" element
    And I check "options[decrease_price_by_percentage_amount]"
    And I wait for AJAX to finish
    And I should see "$22.50" in the "#roomify-accommodation-booking-confirmation-form td.price" element

  Scenario: Increase price by percentage amount
    Given I am logged in as a user with the "roomify manager" role on this site
    And I visit "admin/bat/config/types/manage/2/edit"
    Then I click on the text "Add-Ons"
    And I fill in "field_addons[en][0][name]" with "Increase price by percentage amount"
    And I select "increase" from "field_addons[en][0][operation]"
    And I fill in "field_addons[en][0][value]" with "50"
    Then I press "Save Type"

    Then I visit "booking/2017-12-02/2017-12-05/2"
    And I should see "$45.00" in the "#roomify-accommodation-booking-confirmation-form td.price" element
    And I check "options[increase_price_by_percentage_amount]"
    And I wait for AJAX to finish
    And I should see "$67.50" in the "#roomify-accommodation-booking-confirmation-form td.price" element
