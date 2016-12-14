@api @javascript @global
Feature: Roomify Homepage
  In order to test the homepage
  As user
  I need to be able to see the Roomify Homepage

  Background:
    Given users:
      | name             | mail                 | roles             |
      | _roomify_manager | manager@example.com  | roomify manager   |

  Scenario: View the homepage
    Given I am logged in as "_roomify_manager"
    And I am on the homepage
    Then I should see "Welcome to your Roomify Site!"
    Then I visit "user"
    And I click on the text "Manage Content"
    And I click on the text "Manage Featured Properties"
    Then I should see "Edit Featured Properties"
    And I fill in "eq_roomify_property[und][add][entity]" with "Casa Sul Mare"
    And I wait for AJAX to finish
    And I wait 2 seconds
    And I click on the text "Casa Sul Mare"
    And I press "Add item"
    And I wait for AJAX to finish
    And I fill in "eq_roomify_property[und][add][entity]" with "Locanda Vivaldi"
    And I wait for AJAX to finish
    And I wait 2 seconds
    And I click on the text "Locanda Vivaldi"
    And I press "Add item"
    And I wait for AJAX to finish
    And I press "Save"
    Then I am on the homepage
    And I should see "Featured Properties"
    And I should see "Locanda Vivaldi"
    And I should see "Casa Sul Mare"
