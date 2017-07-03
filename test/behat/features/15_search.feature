@api @javascript @global
Feature: Property Search

  Background:
    Given I remove all properties and install the example content

  Scenario: Order search result by Price
    Given I am not logged in
    And I visit "availability-search"
    Then I click on the text "List View"
    And I should see "Default" in the ".pane-search-api-sorts-search-sorts .search-api-sorts .sort-item.active-sort" element
    And I should see "List by price" in the ".pane-search-api-sorts-search-sorts .search-api-sorts" element
    Then I follow "List by price"
    And I should see "Casa Azzurra" in the ".views-row-1 .property-details .name" element
    And I should see "Casa sul Mare" in the ".views-row-2 .property-details .name" element
    And I should see "Miles Boutique Hotel" in the ".views-row-3 .property-details .name" element
    And I should see "Locanda Vivaldi" in the ".views-row-4 .property-details .name" element
    Then I follow "List by price"
    And I should see "Locanda Vivaldi" in the ".views-row-1 .property-details .name" element
    And I should see "Miles Boutique Hotel" in the ".views-row-2 .property-details .name" element
    And I should see "Casa sul Mare" in the ".views-row-3 .property-details .name" element
    And I should see "Casa Azzurra" in the ".views-row-4 .property-details .name" element
    Then I follow "Default"
    And I should see "Locanda Vivaldi" in the ".views-row-1 .property-details .name" element
    And I should see "Miles Boutique Hotel" in the ".views-row-2 .property-details .name" element
    And I should see "Casa Azzurra" in the ".views-row-3 .property-details .name" element
    And I should see "Casa sul Mare" in the ".views-row-4 .property-details .name" element
