@api @javascript @global
Feature: Manage Rates

  Background:
    Given I remove all properties and install the example content

  Scenario: Manage Rates as user with role "Roomify manager"
    Given I am logged in as a user with the "roomify manager" role
    Then I scroll "views-table" into view
    Then I click "Pricing" in the "Casa Azzurra" row
    And I wait 5 seconds
    And I click on the element with xpath "//*[contains(concat(' ',@class,' '),' casa-pricing-calendar ')]//*[contains(concat(' ',@class,' '),' fc-resource-area ')]//tr[2]//*[contains(concat(' ',@class,' '),' fc-cell-content ')]"
    And I wait for AJAX to finish
    And I should see "Manage \"Standard\" rate"
    And I click on the element with css selector ".close"
    And I click on the element with xpath "//*[contains(concat(' ',@class,' '),' casa-pricing-calendar ')]//*[contains(concat(' ',@class,' '),' fc-resource-area ')]//tr[3]//*[contains(concat(' ',@class,' '),' fc-cell-content ')]"
    And I wait for AJAX to finish
    And I should see "Manage \"Weekly\" rate"
    And I click on the element with css selector ".close"
    And I click on the element with xpath "//*[contains(concat(' ',@class,' '),' casa-pricing-calendar ')]//*[contains(concat(' ',@class,' '),' fc-resource-area ')]//tr[4]//*[contains(concat(' ',@class,' '),' fc-cell-content ')]"
    And I wait for AJAX to finish
    And I should see "Manage \"Monthly\" rate"
    And I click on the element with css selector ".close"
    Then I visit "user"
    Then I click "Pricing" in the "Casa Sul Mare" row
    And I wait 5 seconds
    And I click on the element with xpath "//*[contains(concat(' ',@class,' '),' casa-pricing-calendar ')]//*[contains(concat(' ',@class,' '),' fc-resource-area ')]//tr[2]//*[contains(concat(' ',@class,' '),' fc-cell-content ')]"
    And I wait for AJAX to finish
    And I should see "Manage \"Standard\" rate"
    And I click on the element with css selector ".close"
    And I click on the element with xpath "//*[contains(concat(' ',@class,' '),' casa-pricing-calendar ')]//*[contains(concat(' ',@class,' '),' fc-resource-area ')]//tr[3]//*[contains(concat(' ',@class,' '),' fc-cell-content ')]"
    And I wait for AJAX to finish
    And I should see "Manage \"Weekly\" rate"
    And I click on the element with css selector ".close"
    And I click on the element with xpath "//*[contains(concat(' ',@class,' '),' casa-pricing-calendar ')]//*[contains(concat(' ',@class,' '),' fc-resource-area ')]//tr[4]//*[contains(concat(' ',@class,' '),' fc-cell-content ')]"
    And I wait for AJAX to finish
    And I should see "Manage \"Monthly\" rate"
    And I click on the element with css selector ".close"

  Scenario: Manage Rates as user with role "Property owner"
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
    Then I click "Pricing" in the "Property owner casa" row
    And I wait 5 seconds
    And I click on the element with xpath "//*[contains(concat(' ',@class,' '),' casa-pricing-calendar ')]//*[contains(concat(' ',@class,' '),' fc-resource-area ')]//tr[2]//*[contains(concat(' ',@class,' '),' fc-cell-content ')]"
    And I wait for AJAX to finish
    And I should see "Manage \"Standard\" rate"
    And I click on the element with css selector ".close"
    And I click on the element with xpath "//*[contains(concat(' ',@class,' '),' casa-pricing-calendar ')]//*[contains(concat(' ',@class,' '),' fc-resource-area ')]//tr[3]//*[contains(concat(' ',@class,' '),' fc-cell-content ')]"
    And I wait for AJAX to finish
    And I should see "Manage \"Weekly\" rate"
    And I click on the element with css selector ".close"
    And I click on the element with xpath "//*[contains(concat(' ',@class,' '),' casa-pricing-calendar ')]//*[contains(concat(' ',@class,' '),' fc-resource-area ')]//tr[4]//*[contains(concat(' ',@class,' '),' fc-cell-content ')]"
    And I wait for AJAX to finish
    And I should see "Manage \"Monthly\" rate"
    And I click on the element with css selector ".close"

  Scenario: Change Rates as user with role "Property owner"
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
    Then I click "Pricing" in the "Property owner casa" row
    And I wait 5 seconds
    And I click on the element with xpath "//*[contains(concat(' ',@class,' '),' casa-pricing-calendar ')]//*[contains(concat(' ',@class,' '),' fc-resource-area ')]//tr[2]//*[contains(concat(' ',@class,' '),' fc-cell-content ')]"
    And I wait for AJAX to finish
    And I fill in "rate_default_rate[und][0][amount]" with "45"
    Then I click on the element with css selector "#roomify-casa-event-ui-manage-rate-form .form-submit"
    And I wait 2 seconds
    And I click on the element with xpath "//*[contains(concat(' ',@class,' '),' casa-pricing-calendar ')]//*[contains(concat(' ',@class,' '),' fc-resource-area ')]//tr[3]//*[contains(concat(' ',@class,' '),' fc-cell-content ')]"
    And I wait for AJAX to finish
    And I fill in "rate_default_rate[und][0][amount]" with "450"
    Then I click on the element with css selector "#roomify-casa-event-ui-manage-rate-form .form-submit"
    And I wait 2 seconds
    And I click on the element with xpath "//*[contains(concat(' ',@class,' '),' casa-pricing-calendar ')]//*[contains(concat(' ',@class,' '),' fc-resource-area ')]//tr[4]//*[contains(concat(' ',@class,' '),' fc-cell-content ')]"
    And I wait for AJAX to finish
    And I fill in "rate_default_rate[und][0][amount]" with "1000"
    Then I click on the element with css selector "#roomify-casa-event-ui-manage-rate-form .form-submit"
    And I wait 2 seconds

    Then I select "Standard" from "rate_type"
    And I wait for AJAX to finish
    Then I click on the element with css selector ".start-date input"
    And I wait 2 seconds
    Then I should see "$45.00" in the ".ui-datepicker-today .price" element
    Then I click on the element with css selector ".end-date input"
    And I wait 2 seconds
    Then I should see "$45.00" in the ".ui-datepicker-today .price" element
    Then I select "Weekly" from "rate_type"
    And I wait for AJAX to finish
    Then I click on the element with css selector ".start-date input"
    And I wait 2 seconds
    Then I should see "$450.00" in the ".ui-datepicker-today .price" element
    Then I click on the element with css selector ".end-date input"
    And I wait 2 seconds
    Then I should see "$450.00" in the ".ui-datepicker-today .price" element
    Then I select "Monthly" from "rate_type"
    And I wait for AJAX to finish
    Then I click on the element with css selector ".start-date input"
    And I wait 2 seconds
    Then I should see "$1,000.00" in the ".ui-datepicker-today .price" element
    Then I click on the element with css selector ".end-date input"
    And I wait 2 seconds
    Then I should see "$1,000.00" in the ".ui-datepicker-today .price" element
