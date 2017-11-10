<?php

use Drupal\DrupalExtension\Context\RawDrupalContext,
    Drupal\Component\Utility\Random;

use Behat\Gherkin\Node\PyStringNode,
    Behat\Gherkin\Node\TableNode;

use Behat\Behat\Hook\Scope\BeforeScenarioScope,
    Behat\Behat\Hook\Scope\AfterScenarioScope;

use Behat\Behat\Context\CustomSnippetAcceptingContext;

use Drupal\DrupalDriverManager;

/**
 * Defines application features from the specific context.
 */
class FeatureContext extends RawDrupalContext implements CustomSnippetAcceptingContext {

  protected $dateFormat = 'd/m/Y';

  /**
   * The Mink context
   *
   * @var Drupal\DrupalExtension\Context\MinkContext
   */
  private $minkContext;

  /**
   * Initializes context.
   *
   * Every scenario gets its own context instance.
   * You can also pass arbitrary arguments to the
   * context constructor through behat.yml.
   */
  public function __construct() {
    variable_set('roomify_testing_environment', TRUE);
    if (variable_get('roomify_accommodation_example_content') == '') {
      roomify_accommodation_example_content_multi_property();
    }
  }

  /**
   * @BeforeStep
   */
  public function beforeStep() {
    $this->getSession()->resizeWindow(1440, 900, 'current');
  }

  public static function getAcceptedSnippetType() { return 'regex'; }

  /**
   * @BeforeScenario
   */
  public function before(BeforeScenarioScope $scope) {
    $environment = $scope->getEnvironment();
    $this->minkContext = $environment->getContext('Drupal\DrupalExtension\Context\MinkContext');
  }

  /**
   * @AfterScenario
   */
  public function after(AfterScenarioScope $scope) {
  }

  /**
   * @Then /^(?:|I )should see "(?P<text>.+)" in the "(?P<selector>\w+)" element$/
   */
  public function assertElementText($text, $selector) {
    $page = $this->getSession()->getPage();
    $element = $page->findAll('css', $selector);

    if (strpos(strtolower($element->getText()), strtolower($text) !== FALSE)) {
      return;
    }

    throw Exception("Text '{$text}' is not found in the '{$selector}' element.");
  }

  /**
   * @Then /^(?:|I )should not see "(?P<text>.+)" in the "(?P<selector>\w+)" element$/
   */
  public function disclaimElementText($text, $selector) {
    $page = $this->getSession()->getPage();
    $element = $page->findAll('css', $selector);

    if (strpos(strtolower($text), strtolower($element->getText()) !== FALSE)) {
      throw Exception("Text '{$text}' is found in the '{$selector}' element.");
    }
  }

  /**
   * @When I scroll :elementClass into view
   */
  public function scrollIntoView($elementClass) {
    $function = <<<JS
(function(){
  const element = document.getElementsByClassName("$elementClass")[0];
  const elementRect = element.getBoundingClientRect();
  const absoluteElementTop = elementRect.top + window.pageYOffset;
  const top = absoluteElementTop - (window.innerHeight / 2);
  window.scrollTo(0, top);
})()
JS;
    try {
      $this->getSession()->executeScript($function);
    }
    catch(Exception $e) {
      throw new \Exception("ScrollIntoView failed");
    }
  }

  /**
   * @Then /^(?:|I )select dates between "(?P<start>.+)" and "(?P<end>.+)" for the last unit$/
   */
  public function selectDatesOfLastUnitOnFullcalendar($start, $end) {
    $id = db_query("SELECT MAX(unit_id) as max_id FROM bat_units")->fetchCol();
    $this->selectDatesOnFullcalendar($start, $end, 'S' . reset($id));
  }

  /**
   * @Then /^(?:|I )select dates between "(?P<start>.+)" and "(?P<end>.+)" for the last rate$/
   */
  public function selectDatesOfLastRateOnFullcalendar($start, $end) {
    $id = db_query("SELECT MAX(rate_id) as max_id FROM roomify_rates")->fetchCol();
    $this->selectDatesOnFullcalendar($start, $end, 'S' . reset($id));
  }

  /**
   * @Then /^(?:|I )select dates between "(?P<start>.+)" and "(?P<end>.+)" for the resource "(?P<resource>.+)"$/
   */
  public function selectDatesOnFullcalendar($start, $end, $resource) {
    $this->getSession()->evaluateScript("jQuery('#calendar').fullCalendar('select', '$start', '$end', '$resource');");
  }

  /**
   * @Then /^All units of type "(?P<type>.+)" are deleted$/
   */
  public function allUnitsOfTypeAreDeleted($type) {
    $units = db_query("SELECT unit_id FROM bat_units WHERE name like '$type %'")->fetchCol();

    if (!empty($units)) {
      throw new \RuntimeException(sprintf("All units of $type are not deleted"));
    }
  }

  /**
   * @Then /^(?:|I )visit last created property$/
   */
  public function visitLastCreatedProperty() {
    $id = db_query("SELECT MAX(property_id) as max_id FROM roomify_properties")->fetchCol();
    $this->getSession()->visit($this->locatePath('/listing/' . reset($id)));
  }

  /**
   * @Then /^last booking user is equal to the property user$/
   */
  public function assertLastBookingUserEqualPropertyUser() {
    $id = db_query("SELECT MAX(booking_id) as max_id FROM bat_bookings")->fetchCol();
    $booking = bat_booking_load(reset($id));

    $booking_wrapper = entity_metadata_wrapper('bat_booking', $booking);
    $type = bat_type_load($booking_wrapper->booking_event_reference->event_bat_unit_reference->type_id->value());

    if ($booking->uid != $type->uid) {
      throw new \RuntimeException(sprintf("Booking uid is not equal to the property user"));
    }
  }

  /**
   * @Given /^(?:|I )visit the search page for "(?P<start>.+)" to "(?P<end>.+)"$/
   */
  public function visitSearchPage($start, $end) {
    $start_date = new DateTime();
    $start_date->setTime(0, 0);
    $start_date->modify($start);

    $end_date = new DateTime();
    $end_date->setTime(0, 0);
    $end_date->modify($end);

    $url = 'availability-search?bat_start_date=' . $start_date->format('Y-m-d') . '&bat_end_date=' . $end_date->format('Y-m-d') . '&location=0&group_size=0';
    $this->getSession()->visit($this->locatePath($url));
  }

  /**
   * @Then /^(?:|I )remove all properties and install the example content$/
   */
  public function removePropertiesAddExampleContent() {
    foreach (roomify_property_load_multiple(FALSE) as $property) {
      $property->delete();
    }

    roomify_accommodation_example_content_multi_property_delete(array('users' => 1, 'conversations' => 1, 'bookings' => 1, 'homepage' => 1));
    roomify_accommodation_example_content_multi_property();

    $index = search_api_index_load('properties_index');
    search_api_index_clear('properties_index');
    search_api_index_items($index, 100);
  }

  /**
   * @Then /^I close the better messages dialog$/
   */
  public function iCloseTheBetterMessagesDialog() {
    $page = $this->getSession()->getPage();

    // Wait for the damn thing to appear.
    $this->getSession()->wait(2500);
    $element = @$page->find('css', 'a.message-close');

    if ($element !== NULL) {
      // print_r($element);
      // $element->click();
      $page->find('css', 'a.message-close')->click();
      // Wait for the damn thing to disappear.
      $this->getSession()->wait(3500);
    }

  }

  /**
   * @When I fill in the autocomplete :autocomplete with :text and click :popup
   */
  public function fillInDrupalAutocomplete($autocomplete, $text, $popup) {
    $el = $this->getSession()->getPage()->findField($autocomplete);
    $el->focus();

    // Set the autocomplete text then put a space at the end which triggers
    // the JS to go do the autocomplete stuff.
    $el->setValue($text);
    $el->keyUp(' ');

    // Sadly this grace of 1 second is needed here.
    sleep(1);
    $this->minkContext->iWaitForAjaxToFinish();

    // Drupal autocompletes have an id of autocomplete which is bad news
    // if there are two on the page.
    $autocomplete = $this->getSession()->getPage()->findById('autocomplete');

    if (empty($autocomplete)) {
      throw new ExpectationException(t('Could not find the autocomplete popup box'), $this->getSession());
    }

    $popup_element = $autocomplete->find('xpath', "//div[text() = '{$popup}']");

    if (empty($popup_element)) {
      throw new ExpectationException(t('Could not find autocomplete popup text @popup', array(
        '@popup' => $popup)), $this->getSession());
    }

    $popup_element->click();
  }

  /**
   * @Given dates :date1 and :date2 in format big-endian
   */
  public function getDatesBigEndian($date1, $date2) {
    $now = new DateTime();

    $dateobject1 = clone($now);
    $dateobject2 = clone($now);

    if ($date1 != 'now') {
      $dateobject1->modify($date1);
    }
    if ($date2 != 'now') {
      $dateobject2->modify($date2);
    }

    return [$dateobject1->format('Y-m-d'), $dateobject2->format('Y-m-d')];
  }

  /**
   * @Given dates :date1 and :date2 in format middle-endian
   */
  public function getDatesMiddleEndian($date1, $date2) {
    $now = new DateTime();

    $dateobject1 = clone($now);
    $dateobject2 = clone($now);

    if ($date1 != 'now') {
      $dateobject1->modify($date1);
    }
    if ($date2 != 'now') {
      $dateobject2->modify($date2);
    }

    return [$dateobject1->format('m/d/Y'), $dateobject2->format('m/d/Y')];
  }

}
