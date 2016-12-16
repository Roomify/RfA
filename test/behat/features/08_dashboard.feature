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
    And I click on the text "My Account"
    Then I should see "Visit Dashboard"

  Scenario: View My Guest Profile Link if i am a Guest.
    Given I am logged in as a user with the "guest" role on this site
    And I visit "user"
    And I click on the text "Account Settings"
    Then I should see "My Guest Profile"
    Given I click on the text "My Guest Profile"
    Then I should see "Name"
    And I should see "Image"
    And I should see "Bio"

  Scenario: View My Property Owner Profile Link if i am a Property Owner.
    Given I am logged in as a user with the "property owner" role on this site
    And I visit "user"
    And I click on the text "Account Settings"
    Then I should see "My Property Owner Profile"
    Given I click on the text "My Property Owner Profile"
    Then I should see "Name"
    And I should see "Mailing Address"
    And I should see "Image"
    And I should see "Bio"

  Scenario: View The Logout link.
    Given I am logged in as a user with the "authenticated user" role on this site
    And I visit "user"
    And I click on the text "Account Settings"
    Then I should see "Logout"
    And I click on the element with css selector "#dashboard-logout"
    Then I am not logged in

  Scenario: View the Manage Contact form link
    Given I am logged in with the "access content overview" permission
    And I visit "user"
    And I click on the text "Manage Content"
    Then I should not see the text "Manage Contact Forms"
    Given I am logged in with the "view any entityform,access content overview" permission
    And I visit "user"
    And I click on the text "Manage Content"
    Then I should see "Manage Contact Form Submissions"
    And I click on the element with css selector "#dashboard-manage-contact-forms"
    Then I should be on "form-submissions"
    Given I am logged in with the "view any entityform,access content overview,administer entityform types,administer fields" permission
    And I visit "admin/structure/entityform_types"
    When I click on "manage fields" on the row containing "Side Wide Contact"
    Then I should see "First Name"
    Then I should see "Last Name"
    Then I should see "Telephone"
    Then I should see "Mail Address"
    Then I should see "More Information"

  Scenario: View the Manage Main Menu link
    Given I am logged in with the "access content overview,administer menu" permission
    And I visit "user"
    And I click on the text "Manage Content"
    Then I click on the text "Manage Main Menu"
    And the url should match "admin/structure/menu/manage/main-menu"

    Given I am logged in with the "access content overview" permission
    And I visit "user"
    And I click on the text "Manage Content"
    Then I should not see the text "Manage Main Menu"

  Scenario: View the Manage Main Menu link
    Given I am logged in with the "access content overview" permission
    And I visit "user"
    And I click on the text "Manage Content"
    Then I click on the text "Manage Site Pages"
    And the url should match "admin/content"

    Given I am logged in as a user with the "authenticated user" role on this site
    And I visit "user"
    Then I should not see the text "Manage Content"

  Scenario: View the Manage Email Templates link
    Given I am logged in with the "access content overview,administer previewable email templates" permission
    And I visit "user"
    And I click on the text "Manage Content"
    Then I click on the text "Manage Email Templates"
    And the url should match "email-templates"

    Given I am logged in with the "access content overview" permission
    And I visit "user"
    And I click on the text "Manage Content"
    Then I should not see the text "Manage Email Templates"

  Scenario: View the Add new content link
    Given I am logged in with the "access content overview,create blog content" permission
    And I visit "user"
    And I click on the text "Manage Content"
    Then I click on the text "Add new content"
    And the url should match "node/add"

    Given I am logged in with the "access content overview" permission
    And I visit "user"
    And I click on the text "Manage Content"
    Then I should not see the text "Add new content"

  Scenario: Featured Properties
    Given I am logged in as "_roomify_manager"
    And I visit "user"
    And I click on the text "Manage Content"
    And I click on the text "Manage Featured Properties"
    Then I should see "Edit Featured Properties"

  Scenario: Featured Areas
    Given I am logged in as "_roomify_manager"
    And I visit "user"
    And I click on the text "Manage Content"
    And I click on the text "Manage Featured Areas"
    Then I should see "Edit Featured Areas"
