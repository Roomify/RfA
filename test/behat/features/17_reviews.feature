@api @javascript
Feature: Property Reviews
  In order to test reviews
  As a guest
  I should be able to review properties

  Background:
    Given users:
      | name             | mail                 | roles             |
      | _roomify_manager | manager@example.com  | roomify manager   |
      | _guest           | guest@example.com    | guest             |

  Scenario: Add a review
    Given I am logged in as "_guest"
    When I visit "listing/1"
    And I click on the text "Reviews"
    And I click on the element with css selector ".roomify-property-review"
    Then I should see the text "Create Review"
    When I fill in "title" with "A beautiful place"
    And I fill in "body[en][0][value]" with "This is a very nice place, I'll be back!"
    And I click on the element with css selector "div.star-5 a"
    And I press "Save"
    Then I close the better messages dialog
    And I am logged in as "_roomify_manager"
    Then I visit "admin/content/reviews"
    And I click "edit" in the "A beautiful place" row
    And I click on the text "Publishing options"
    And I click on the element with css selector ".form-item-status input"
    And I press "Save"
    Then I visit "admin/content/reviews"
    And I click "edit" in the "A beautiful place" row
    And I click on the text "View"
    Then I should see the text "Published"
    And I visit "listing/1"
    And I click on the text "Reviews"
    Then I should see the text "This is a very nice place, I'll be back!"
    Then I click on the element with css selector ".manage-icon.edit-link"
    And i wait 5 seconds
    And I click on the element with css selector ".form-item-field-sp-allow-property-reviews-und input"
    And I press "Save Property"
    Then I visit "listing/1"
    And I should not see the text "Review"
