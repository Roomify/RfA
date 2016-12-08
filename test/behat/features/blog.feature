@api @javascript @global
Feature: Blog
  In order to test blogposts
  As a roomify manager
  I need to be able to add blogposts

  Scenario: Add a blogpost
    Given I am logged in as a user with the "roomify manager" role on this site
    And I visit 'blog'
    And I click on the element with css selector ".roomify-add-blog-post-link"
    Then I should see "Create Blog Post"
    Then I fill in "title_field[und][0][value]" with "A new blogpost"
    And I attach the file "dog.jpg" to "edit-field-featured-image-und-0-upload"
    And I wait 3 seconds
    And I fill in wysiwyg on field "body[und][0][value]" with "This is my blogpost body"
    And I press "Save"
    And I should see "A new blogpost"
    And the response should contain "<meta property=\"og:image\""
    And the metatag property "og:image" should contain the value "dog"
