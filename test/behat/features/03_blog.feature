@api @javascript @global
Feature: Blog
  In order to test blogposts
  As a roomify manager
  I need to be able to add blogposts

  Scenario: Add a blogpost
    Given I am logged in as a user with the "roomify manager" role on this site
    And I visit "admin/structure/taxonomy"
    Then I should see "Category"
    Then I click "add terms" in the "Category" row
    And I fill in "name_field[en][0][value]" with "Blogpost Category 1"
    And I press "Save"
    And I fill in "name_field[en][0][value]" with "Blogpost Category 2"
    And I press "Save"
    And I visit 'blog'
    And I click on the element with css selector ".roomify-add-blogpost"
    Then I should see "Create Blog Post"
    Then I fill in "title_field[en][0][value]" with "A new blogpost"
    And I wait 3 seconds
    And I click "Categories and Placement"
    And I select "Blogpost Category 1" from "field_blog_categories[und][]"
    And I press "Save"
    Then I visit 'blog'
    And I click on the element with css selector ".roomify-add-blogpost"
    Then I should see "Create Blog Post"
    Then I fill in "title_field[en][0][value]" with "My new Blog post"
    And I attach the file "dog.jpg" to "edit-field-featured-image-und-0-upload"
    And I wait 3 seconds
    And I fill in wysiwyg on field "body[en][0][value]" with "This is my blogpost body"
    And I click "Categories and Placement"
    And I select "Blogpost Category 2" from "field_blog_categories[und][]"
    And I press "Save"
    And I should see "My new Blog post"
    And I should see "Blogpost Category 1" in the ".pane-blog-categories" element
    And I should see "Blogpost Category 2" in the ".pane-blog-categories" element
    And the response should contain "<meta property=\"og:image\""
    And the metatag property "og:image" should contain the value "dog"
