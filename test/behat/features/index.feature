@api @javascript @global
Feature: Homepage
  In order to know the website is running
  As a website user
  I need to be able to view the site title and login

  Scenario: Viewing the site title
    Given I am on the homepage
    And I click on the element with css selector ".roomify-sidebar-link a.roomify-sidebar-menu-toggle"
    Then I should see "User login"

  Scenario: Logging into the site
    Given I am logged in as a user with the "authenticated user" role on this site
    And I am on the homepage
    And I click on the element with css selector ".roomify-sidebar-link a.roomify-sidebar-menu-toggle"
    Then I should see "Logout"
