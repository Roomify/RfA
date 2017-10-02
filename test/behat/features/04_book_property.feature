@api @javascript @global
Feature: Book Property

  Scenario: Anonymous user - Book a property
    Given I am not logged in
    And I visit "listing/1"
    Then I should see "Casa Sul Mare"
    And I should see "Starting from $20.00"

    Given dates "+3 months +5 days" and "+3 months +10 days" in format big-endian
    And we save that into "DATE1,DATE2"

    Then I fill in "arrival[date]" with "<<DATE1>>"
    Then I fill in "departure[date]" with "<<DATE2>>"
    And I click on the text "Book Now"
    Then I should see "Booking for Casa Sul Mare"
    And I should see "$100.00" in the "TOTAL COST" row
    Then I click on the text "Change Search"

    Given dates "+3 months +5 days" and "+3 months +11 days" in format big-endian
    And we save that into "DATE1,DATE2"

    Then I fill in "arrival[date]" with "<<DATE1>>"
    Then I fill in "departure[date]" with "<<DATE2>>"
    And I click on the text "Book Now"
    Then I should see "Booking for Casa Sul Mare"
    And I should see "$120.00" in the "TOTAL COST" row
    And I should see "Confirm booking"
    And I should see "Send an Enquiry"
    Then I click on the text "Confirm booking"

  Scenario: Anonymous user - Send an Enquiry
    Given dates "+5 days" and "+10 days" in format big-endian
    And we save that into "DATE1,DATE2"

    Given I am not logged in
    And I visit "listing/1"
    Then I should see "Casa Sul Mare"
    And I should see "Starting from $20.00"
    Then I fill in "arrival[date]" with "<<DATE1>>"
    Then I fill in "departure[date]" with "<<DATE2>>"
    And I click on the text "Book Now"
    Then I should see "Booking for Casa Sul Mare"
    And I click on the text "Send an Enquiry"
    And I wait for AJAX to finish
    Then I fill in "guest_name" with "Test user 1"
    And I fill in "guest_last_name" with "LastName"
    And I fill in "email" with "user1@roomify.us"
    And I fill in "further_info" with "Test text test text"
    Then I press "Send Request"
    And I wait for AJAX to finish
    And I should see "Thank You."
    And I should see "Your Enquiry has been received and a Conversation has started with the property owner."
    And I should see "They will be able to reply and provide a customized offer for you."

  Scenario: Guest user - Send an Enquiry
    Given dates "+1 month +5 days" and "+1 month +10 days" in format big-endian
    And we save that into "DATE1,DATE2"

    Given I am logged in as a user with the "guest" role
    And I visit "listing/1"
    Then I should see "Casa Sul Mare"
    And I should see "Starting from $20.00"
    Then I fill in "arrival[date]" with "<<DATE1>>"
    Then I fill in "departure[date]" with "<<DATE2>>"
    And I click on the text "Book Now"
    Then I should see "Booking for Casa Sul Mare"
    And I click on the text "Send an Enquiry"
    And I wait for AJAX to finish
    Then I fill in "guest_name" with "Test user 1"
    And I fill in "guest_last_name" with "LastName"
    And I fill in "further_info" with "Test text test text"
    Then I press "Send Request"
    And I wait for AJAX to finish
    And I should see "Thank You."
    And I should see "Your Enquiry has been received and a Conversation has started with the property owner."
    And I should see "They will be able to reply and provide a customized offer for you."
