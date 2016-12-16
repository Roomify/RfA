@api @javascript @global
Feature: Special offers

  Scenario: Flat offer
    Given I am logged in as a user with the "roomify manager" role on this site
    And I visit "user"
    Then I click on the text "Manage Configuration"
    And I click on the text "Manage Offers"
    Then I click on the text "add special offer"
    And I wait for AJAX to finish
    Then I fill in "name" with "Flat offer"
    And I select the radio button "Flat"
    And I fill in "bat_start_date[date]" with "2016-10-01"
    And I fill in "bat_start_date[time]" with "00:00"
    And I fill in "bat_end_date[date]" with "2017-10-01"
    And I fill in "bat_end_date[time]" with "00:00"
    Then I press "Create"
    And I wait 10 seconds

    Then I visit "admin/bat/config/global/offers/calendar"
    And I wait 10 seconds
    Then I select dates between "2017-02-01" and "2017-02-28" for the last rate
    And I wait 10 seconds
    Then I fill in "pricing_event_price[und][0][amount]" with "5"
    And I press "Update value"
    And I wait for AJAX to finish

    Then I visit "admin/bat/config/property/manage/1/offers"
    And I click on "Participate" on the row containing "Flat offer"

    Then I visit "booking/2017-02-02/2017-02-05/1"
    And I should see "$15.00" in the ".current-search-item.current-search-price .offer-cost" element
    And I should see "$15.00" in the "#roomify-accommodation-booking-confirmation-form .price .offer-cost" element

  Scenario: Percentage offer
    Given I am logged in as a user with the "roomify manager" role on this site
    And I visit "user"
    Then I click on the text "Manage Configuration"
    And I click on the text "Manage Offers"
    Then I click on the text "add special offer"
    And I wait for AJAX to finish
    Then I fill in "name" with "Percentage offer"
    And I select the radio button "Percentage"
    And I fill in "bat_start_date[date]" with "2016-10-01"
    And I fill in "bat_start_date[time]" with "00:00"
    And I fill in "bat_end_date[date]" with "2017-10-01"
    And I fill in "bat_end_date[time]" with "00:00"
    Then I press "Create"
    And I wait 10 seconds

    Then I visit "admin/bat/config/global/offers/calendar"
    And I wait 10 seconds
    Then I select dates between "2017-04-01" and "2017-04-30" for the last rate
    And I wait 10 seconds
    Then I fill in "pricing_discount[und][0][value]" with "50"
    And I press "Update value"
    And I wait for AJAX to finish

    Then I visit "admin/bat/config/property/manage/1/offers"
    And I click on "Participate" on the row containing "Percentage offer"

    Then I visit "booking/2017-04-02/2017-04-05/1"
    And I should see "$30.00" in the ".current-search-item.current-search-price .offer-cost" element
    And I should see "$30.00" in the "#roomify-accommodation-booking-confirmation-form .price .offer-cost" element
