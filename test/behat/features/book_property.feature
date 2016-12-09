@api @javascript @global
Feature: Book Property

  Scenario: Anonymous user - Book a property
    Given I am not logged in
    And I visit "listing/1"
    Then I should see "Casa Sul Mare"
    And I should see "Starting from $20.00"
    Then I fill in "arrival[date]" with "2017-01-17"
    Then I fill in "departure[date]" with "2017-01-22"
    And I click on the text "Request to book"
    Then I should see "Booking for Casa Sul Mare"
    And I should see "$100.00" in the "TOTAL COST" row
    Then I click on the text "Change Search"
    Then I fill in "arrival[date]" with "2017-01-17"
    Then I fill in "departure[date]" with "2017-01-23"
    And I click on the text "Request to book"
    Then I should see "Booking for Casa Sul Mare"
    And I should see "$120.00" in the "TOTAL COST" row
    And I should see "Confirm booking"
    And I should see "Send an Enquiry"
    Then I click on the text "Confirm booking"

  Scenario: Anonymous user - Send an Enquiry
    Given I am not logged in
    And I visit "listing/1"
    Then I should see "Casa Sul Mare"
    And I should see "Starting from $20.00"
    Then I fill in "arrival[date]" with "2017-02-17"
    Then I fill in "departure[date]" with "2017-02-22"
    And I click on the text "Request to book"
    Then I should see "Booking for Casa Sul Mare"
    And I click on the text "Send an Enquiry"
    Then I fill in "field_listing_enquiry_name[und][0][value]" with "Test user 1"
    And I fill in "field_listing_enquiry_email[und][0][email]" with "user1@roomify.us"
    And I fill in "field_listing_enquiry_info[und][0][value]" with "Test text test text"
    Then I press "Send Request"
    And I should see "Thank You."
    And I should see "Your Enquiry has been received and a Conversation has started with the property owner."
    And I should see "They will be able to reply and provide a customized offer for you."

  Scenario: Guest user - Send an Enquiry
    Given I am logged in as a user with the "guest" role
    And I visit "listing/1"
    Then I should see "Casa Sul Mare"
    And I should see "Starting from $20.00"
    Then I fill in "arrival[date]" with "2017-03-17"
    Then I fill in "departure[date]" with "2017-03-22"
    And I click on the text "Request to book"
    Then I should see "Booking for Casa Sul Mare"
    And I click on the text "Send an Enquiry"
    Then I fill in "field_listing_enquiry_name[und][0][value]" with "Test user 1"
    And I fill in "field_listing_enquiry_info[und][0][value]" with "Test text test text"
    Then I press "Send Request"
    And I should see "Thank You."
    And I should see "Your Enquiry has been received and a Conversation has started with the property owner."
    And I should see "They will be able to reply and provide a customized offer for you."
