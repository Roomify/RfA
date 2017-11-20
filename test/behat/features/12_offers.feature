@api @javascript @global
Feature: Special offers

  Scenario: Flat offer
    Given dates "now" and "+1 year" in format big-endian
    And we save that into "DATE1,DATE2"

    Given I am logged in as a user with the "roomify manager" role on this site
    And I visit "user"
    Then I click on the element with css selector ".roomify-sidebar-menu-toggle"
    And I wait 1 seconds
    And I click on the element with css selector ".pane-menu-roomify-dashboard-menu .bookings"
    And I wait 1 seconds
    And I click on the text "Offers"
    Then I click on the text "add special offer"
    And I wait for AJAX to finish
    Then I fill in "name" with "Flat offer"
    And I select the radio button "Flat"
    And I fill in "bat_start_date[date]" with "<<DATE1>>"
    And I fill in "bat_start_date[time]" with "00:00"
    And I fill in "bat_end_date[date]" with "<<DATE2>>"
    And I fill in "bat_end_date[time]" with "00:00"
    Then I press "Create"
    And i wait 5 seconds

    Given dates "+1 month" and "+2 months" in format big-endian
    And we save that into "DATE1,DATE2"

    Then I visit "admin/bat/config/global/offers/calendar"
    And i wait 5 seconds
    Then I select dates between "<<DATE1>>" and "<<DATE2>>" for the last rate
    And i wait 5 seconds
    Then I fill in "pricing_event_price[und][0][amount]" with "5"
    And I press "Update value"
    And I wait for AJAX to finish

    Then I visit "admin/bat/config/property/manage/1/offers"
    And I click on "Participate" on the row containing "Flat offer"

    Given dates "+1 month + 1 day" and "+1 month +4 days" in format big-endian
    And we save that into "DATE1,DATE2"

    Then I visit "booking/<<DATE1>>/<<DATE2>>/1"
    And I should see "$15.00" in the ".current-search-item.current-search-price .offer-cost" element
    And I should see "$15.00" in the "#roomify-accommodation-booking-confirmation-form .price .offer-cost" element

  Scenario: Percentage offer
    Given dates "now" and "+1 year" in format big-endian
    And we save that into "DATE1,DATE2"

    Given I am logged in as a user with the "roomify manager" role on this site
    And I visit "user"
    Then I click on the element with css selector ".roomify-sidebar-menu-toggle"
    And I wait 1 seconds
    And I click on the element with css selector ".pane-menu-roomify-dashboard-menu .bookings"
    And I wait 1 seconds
    And I click on the text "Offers"
    Then I click on the text "add special offer"
    And I wait for AJAX to finish
    Then I fill in "name" with "Percentage offer"
    And I select the radio button "Percentage"
    And I fill in "bat_start_date[date]" with "<<DATE1>>"
    And I fill in "bat_start_date[time]" with "00:00"
    And I fill in "bat_end_date[date]" with "<<DATE2>>"
    And I fill in "bat_end_date[time]" with "00:00"
    Then I press "Create"
    And i wait 5 seconds

    Given dates "+3 months" and "+4 months" in format big-endian
    And we save that into "DATE1,DATE2"

    Then I visit "admin/bat/config/global/offers/calendar"
    And i wait 5 seconds
    Then I select dates between "<<DATE1>>" and "<<DATE2>>" for the last rate
    And i wait 5 seconds
    Then I fill in "pricing_discount[und][0][value]" with "50"
    And I press "Update value"
    And I wait for AJAX to finish

    Given dates "+3 months + 1 day" and "+3 months +4 days" in format big-endian
    And we save that into "DATE1,DATE2"

    Then I visit "admin/bat/config/property/manage/1/offers"
    And I click on "Participate" on the row containing "Percentage offer"
    And I visit "listing/1"
    And I should see "Percentage offer"
    Then I visit "booking/<<DATE1>>/<<DATE2>>/1"
    And I should see "$30.00" in the ".current-search-item.current-search-price .offer-cost" element
    And I should see "$30.00" in the "#roomify-accommodation-booking-confirmation-form .price .offer-cost" element
