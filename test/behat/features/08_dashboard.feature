@api @javascript @global
Feature: Dashboard
  To allow users to manage the site throught the dashboard
  As an authenticated user
  I need to be able to view the dashboard and different links

  Background:
    Given users:
      | name             | mail                 | roles             |
      | _roomify_manager | manager@example.com  | roomify manager   |
      | _property_owner  | property@example.com | property owner    |
      | _guest           | guest@example.com    | guest             |

  Scenario: Viewing the Dashboard
    Given I am logged in as a user with the "authenticated user" role on this site
    And I visit "user"
    Then I should see "welcome to your dashboard"

  Scenario: Viewing the My Account Link
    Given I am logged in as a user with the "authenticated user" role on this site
    And I visit "user"
    And I click on the element with css selector ".roomify-sidebar-menu-toggle"
    And I wait 1 seconds
    Then I should see "Edit Account"

  Scenario: View My Guest Profile Link if i am a Guest.
    Given I am logged in as a user with the "guest" role on this site
    And I visit "user"
    And I click on the element with css selector ".roomify-sidebar-menu-toggle"
    And I wait 1 seconds
    Then I should see "Edit Guest Profile"
    Given I click on the text "Edit Guest Profile"
    Then I should see "Name"
    And I should see "Image"
    And I should see "Bio"

  Scenario: View My Property Owner Profile Link if i am a Property Owner.
    Given I am logged in as a user with the "property owner" role on this site
    And I visit "user"
    And I click on the element with css selector ".roomify-sidebar-menu-toggle"
    And I wait 1 seconds
    Then I should see "Edit Property Owner Profile"
    Given I click on the text "Edit Property Owner Profile"
    Then I should see "Name"
    And I should see "Mailing Address"
    And I should see "Image"
    And I should see "Bio"

  Scenario: View The Logout link.
    Given I am logged in as a user with the "authenticated user" role on this site
    And I visit "user"
    And I click on the element with css selector ".roomify-sidebar-menu-toggle"
    And I wait 1 seconds
    Then I should see "Logout"
    And I click on the text "Logout"
    Then I am not logged in

  Scenario: View the Manage Main Menu link #1
    Given I am logged in with the "access content overview,administer menu" permission
    And I visit "user"
    And I click on the element with css selector ".roomify-sidebar-menu-toggle"
    And I wait 1 seconds
    And I click on the element with css selector ".pane-menu-roomify-dashboard-menu .content"
    And I wait 1 seconds
    Then I click on the text "Main Menu"
    And the url should match "admin/structure/menu/manage/main-menu"

    Given I am logged in with the "access content overview" permission
    And I visit "user"
    And I click on the element with css selector ".roomify-sidebar-menu-toggle"
    And I wait 1 seconds
    And I click on the element with css selector ".pane-menu-roomify-dashboard-menu .content"
    Then I should not see the text "Main Menu"

  Scenario: View the Manage Main Menu link #2
    Given I am logged in with the "access content overview" permission
    And I visit "user"
    And I click on the element with css selector ".roomify-sidebar-menu-toggle"
    And I wait 1 seconds
    And I click on the element with css selector ".pane-menu-roomify-dashboard-menu .content"
    And I wait 1 seconds
    Then I click on the text "Site Pages"
    And the url should match "admin/content"

    Given I am logged in as a user with the "authenticated user" role on this site
    And I visit "user"
    And I click on the element with css selector ".roomify-sidebar-menu-toggle"
    And I wait 1 seconds
    Then I should not see "Content" in the ".pane-menu-roomify-dashboard-menu" element

  Scenario: View the Manage Email Templates link
    Given I am logged in with the "access content overview,administer previewable email templates,configure bat settings,access content overview" permission
    And I visit "user"
    And I click on the element with css selector ".roomify-sidebar-menu-toggle"
    And I wait 1 seconds
    And I click on the element with css selector ".pane-menu-roomify-dashboard-menu .content"
    And I wait 1 seconds
    Then I click on the text "Email Templates"
    And the url should match "email-templates"

    Given I am logged in with the "access content overview" permission
    And I visit "user"
    And I click on the element with css selector ".roomify-sidebar-menu-toggle"
    And I wait 1 seconds
    And I click on the element with css selector ".pane-menu-roomify-dashboard-menu .content"
    Then I should not see the text "Email Templates"

  Scenario: View the Add new content link
    Given I am logged in with the "access content overview,create blog content" permission
    And I visit "user"
    And I click on the element with css selector ".roomify-sidebar-menu-toggle"
    And I wait 1 seconds
    And I click on the element with css selector ".pane-menu-roomify-dashboard-menu .content"
    And I wait 1 seconds
    Then I click on the text "Add new content"
    And the url should match "node/add"

    Given I am logged in with the "access content overview" permission
    And I visit "user"
    And I click on the element with css selector ".roomify-sidebar-menu-toggle"
    And I wait 1 seconds
    And I click on the element with css selector ".pane-menu-roomify-dashboard-menu .content"
    Then I should not see the text "Add new content"

  Scenario: Featured Properties
    Given I am logged in as "_roomify_manager"
    And I visit "user"
    And I click on the element with css selector ".roomify-sidebar-menu-toggle"
    And I wait 1 seconds
    And I click on the element with css selector ".pane-menu-roomify-dashboard-menu .content"
    And I wait 1 seconds
    And I click on the text "Featured Properties"
    Then I should see "Edit Featured Properties"

  Scenario: Featured Areas
    Given I am logged in as "_roomify_manager"
    And I visit "user"
    And I click on the element with css selector ".roomify-sidebar-menu-toggle"
    And I wait 1 seconds
    And I click on the element with css selector ".pane-menu-roomify-dashboard-menu .content"
    And I wait 1 seconds
    And I click on the text "Featured Areas"
    Then I should see "Edit Featured Areas"
