@api @javascript @casa
Feature: Manage Taxonomy
  To allow users to manage the casa taxonomies
  As a user with the 'Administer vocabularies and terms' permission
  I should be able to see and administer the casa taxonomies

  Scenario: User with correct permission
    Given I am logged in as a user with the "Administer vocabularies and terms" permission
    And I visit "admin/structure/taxonomy"
    Then I should see "Activity type"
    And I should see "Amenities"
    And I should see "Tags"
    And I should see the link "edit vocabulary"

  Scenario: Regular authenticated user
    Given I am logged in as a user with the "authenticated user" role on this site
    And I visit "admin/structure/taxonomy"
    Then I should see "Access denied"
