@api @javascript @global
Feature: Conversation

  Background:
    Given users:
      | name             | mail                 | roles             |
      | _roomify_manager | manager@example.com  | roomify manager   |
      | _property_owner  | property@example.com | property owner    |
      | _guest           | guest@example.com    | guest             |

  Scenario:
    Given I am logged in as "_roomify_manager"
    And I visit "user"
    Then I click on the text "Manage Listing(s)"
    And I click on the text "add property"
    And I wait for AJAX to finish
    Then I fill in "property_name" with "My casa for conversation"
    And I select the radio button "Single-Unit (entire home)"
    Then I press "Next"
    And I wait for AJAX to finish
    Then I fill in "max_occupants" with "4"
    And I fill in "default_price" with "100"
    Then I press "create property and add details"
    And I wait for AJAX to finish
    Then I fill in wysiwyg on field "field_sp_description[en][0][value]" with "Test description"
    And I press "Save Property"

    Given I am logged in as "_guest"
    Then I visit last created property
    Then I fill in "arrival[date]" with "2017-01-16"
    Then I fill in "departure[date]" with "2017-01-21"
    And I click on the text "Request to book"
    And I click on the text "Send an Enquiry"
    Then I fill in "field_listing_enquiry_name[und][0][value]" with "Test user 1"
    And I fill in "field_listing_enquiry_info[und][0][value]" with "Test text test text"
    Then I press "Send Request"
    And I should see "Thank You."
    And I should see "Your Enquiry has been received and a Conversation has started with the property owner."
    And I should see "They will be able to reply and provide a customized offer for you."

    Given I am logged in as "_roomify_manager"
    Then I click on the element with css selector ".conversation-info-link"
    Then I scroll "make-offer" into view
    Then I click on the text "Make Offer"
    And I wait for AJAX to finish
    And I fill in "price" with "350"
    And I press "Create offer"
    And I wait for AJAX to finish
    Then I press "Withdraw offer"
    Then I click on the text "Make Offer"
    And I wait for AJAX to finish
    And I close the better messages dialog
    And I fill in "price" with "350"
    And I press "Create offer"
    And I wait for AJAX to finish

    Given I am logged in as "_guest"
    Then I click on the element with css selector ".conversation-info-link"
    Then I press "Book This"
    Then I press "Confirm booking"
    Then I fill in "customer_profile_billing[commerce_customer_address][und][0][name_line]" with "Test name"
    And I fill in "customer_profile_billing[commerce_customer_address][und][0][thoroughfare]" with "Street test 123"
    And I fill in "customer_profile_billing[commerce_customer_address][und][0][locality]" with "Test city"
    And I fill in "customer_profile_billing[booking_telephone][und][0][value]" with "0123456789"
    Then I press "Continue to next step"
    And I check "terms_conditions[terms_conditions]"
    Then I press "Continue to next step"
    And I should see "Checkout Complete - Thank you for your reservation"
    Then last booking user is equal to the property user
