(function ($) {

// Define our objects.
Drupal.batCalendar = Drupal.batCalendar || {};
Drupal.batCalendar.Modal = Drupal.batCalendar.Modal || {};

Drupal.behaviors.bat_event = {
  attach: function(context) {

    var calendars = [];
    for (id in Drupal.settings.batCalendar) {
      calendars[id] = new Array('#' + Drupal.settings.batCalendar[id]['id']);
    }

    // Refresh the event once the modal is closed.
    $(document).one('CToolsDetachBehaviors', function() {
      $.each(calendars, function(key, value) {
        $(value[0]).fullCalendar('refetchEvents');
      });
    });

    $.each(calendars, function(key, value) {

      $(value[0]).once().fullCalendar({
        schedulerLicenseKey: Drupal.settings.batCalendar[key].schedulerLicenseKey,
        slotWidth: Drupal.settings.batCalendar[key].slotWidth,
        height: Drupal.settings.batCalendar[key].calendarHeight,
        editable: Drupal.settings.batCalendar[key].editable,
        selectable: Drupal.settings.batCalendar[key].selectable,
        displayEventTime: false,
        dayNamesShort:[Drupal.t('Sun'), Drupal.t('Mon'), Drupal.t('Tue'), Drupal.t('Wed'), Drupal.t('Thu'), Drupal.t('Fri'), Drupal.t('Sat')],
        monthNames:[Drupal.t('January'), Drupal.t('February'), Drupal.t('March'), Drupal.t('April'), Drupal.t('May'), Drupal.t('June'), Drupal.t('July'), Drupal.t('August'), Drupal.t('September'), Drupal.t('October'), Drupal.t('November'), Drupal.t('December')],
        header: {
          left: Drupal.settings.batCalendar[key].headerLeft,
          center: Drupal.settings.batCalendar[key].headerCenter,
          right: Drupal.settings.batCalendar[key].headerRight,
        },
        businessHours: Drupal.settings.batCalendar[key].businessHours,
        defaultView: Drupal.settings.batCalendar[key].defaultView,
        selectConstraint: (Drupal.settings.batCalendar[key].selectConstraint == null) ? undefined : Drupal.settings.batCalendar[key].selectConstraint,
        minTime: Drupal.settings.batCalendar[key].minTime,
        maxTime: Drupal.settings.batCalendar[key].maxTime,
        hiddenDays: Drupal.settings.batCalendar[key].hiddenDays,
        defaultDate: $.fullCalendar.moment(Drupal.settings.batCalendar[key].defaultDate),
        views: {
          timelineDay: {
            buttonText: Drupal.settings.batCalendar[key].viewsTimelineDayButtonText,
            slotDuration: Drupal.settings.batCalendar[key].viewsTimelineDaySlotDuration,
            slotLabelFormat: Drupal.settings.batCalendar[key].viewsTimelineDaySlotLabelFormat,
            titleFormat: Drupal.settings.batCalendar[key].viewsTimelineDayTitleFormat
          },
          timelineSevenDay: {
            buttonText: Drupal.settings.batCalendar[key].viewsTimelineSevenDayButtonText,
            duration: Drupal.settings.batCalendar[key].viewsTimelineSevenDayDuration,
            slotDuration: Drupal.settings.batCalendar[key].viewsTimelineSevenDaySlotDuration,
            slotLabelFormat: Drupal.settings.batCalendar[key].viewsTimelineSevenDaySlotLabelFormat,
            titleFormat: Drupal.settings.batCalendar[key].viewsTimelineSevenDayTitleFormat,
            type: 'timeline'
          },
          timelineTenDay: {
            buttonText: Drupal.settings.batCalendar[key].viewsTimelineTenDayButtonText,
            duration: Drupal.settings.batCalendar[key].viewsTimelineTenDayDuration,
            slotDuration: Drupal.settings.batCalendar[key].viewsTimelineTenDaySlotDuration,
            slotLabelFormat: Drupal.settings.batCalendar[key].viewsTimelineTenDaySlotLabelFormat,
            titleFormat: Drupal.settings.batCalendar[key].viewsTimelineTenDayTitleFormat,
            type: 'timeline'
          },
          timelineThirtyDay: {
            buttonText: Drupal.settings.batCalendar[key].viewsTimelineThirtyDayButtonText,
            duration: Drupal.settings.batCalendar[key].viewsTimelineThirtyDayDuration,
            slotDuration: Drupal.settings.batCalendar[key].viewsTimelineThirtyDaySlotDuration,
            slotLabelFormat: Drupal.settings.batCalendar[key].viewsTimelineThirtyDaySlotLabelFormat,
            titleFormat: Drupal.settings.batCalendar[key].viewsTimelineThirtyDayTitleFormat,
            type: 'timeline'
          },
          timeline365Day: {
            buttonText: Drupal.settings.batCalendar[key].viewsTimeline365DayButtonText,
            duration: Drupal.settings.batCalendar[key].viewsTimeline365DayDuration,
            slotLabelFormat: Drupal.settings.batCalendar[key].viewsTimeline365DaySlotLabelFormat,
            titleFormat: Drupal.settings.batCalendar[key].viewsTimeline365DayTitleFormat,
            type: 'timeline'
          }
        },
        customButtons: Drupal.settings.batCalendar[key].customButtons,
        resourceAreaWidth: Drupal.settings.batCalendar[key].resourceAreaWidth,
        resourceLabelText: Drupal.settings.batCalendar[key].resourceLabelText,
        resources: Drupal.settings.basePath + '?q=offers/offers-calendar',
        selectOverlap: function(event) {
          // Allow selections over background events, but not any other types of events.
          return event.rendering === 'background';
        },
        events: Drupal.settings.basePath + '?q=offers/events-offers-calendar',
        windowResize: function(view) {
          $(this).fullCalendar('refetchEvents');
        },
        eventClick: function(event, jsEvent, view) {
          if (event.editable) {
            var unit_id = event.resourceId.substring(1);
            var sd = event.start.format('YYYY-MM-DD HH:mm');
            event.end.add(1, 'm');
            var ed = event.end.format('YYYY-MM-DD HH:mm');

            // Open the modal for edit
            Drupal.batCalendar.Modal(view, key, event.bat_id, sd, ed, unit_id);
          }
        },
        select: function(start, end, jsEvent, view, resource) {
          if (resource.create_event) {
            var unit_id = resource.id.substring(1);

            var ed = end.format('YYYY-MM-DD HH:mm');
            var sd = start.format('YYYY-MM-DD HH:mm');

            // Open the modal for edit
            Drupal.batCalendar.Modal(this, key, 0, sd, ed, unit_id, resource.event_type);
          }

          $(value[0]).fullCalendar('unselect');
        },
        eventOverlap: function(stillEvent, movingEvent) {
          // Prevent events from being drug over blocking events.
          return !stillEvent.blocking && (stillEvent.type == movingEvent.type);
        },
        eventDrop: function(event, delta, revertFunc) {
          if (event.editable) {
            // Prevent events from being dropped over unit types row.
            if (event.resourceId.match(/^S[0-9]+$/)) {
              saveBatEvent(event, revertFunc, calendars, key);
            }
            else {
              revertFunc();
            }
          }
          else {
            revertFunc();
          }
        },
        eventResize: function(event, delta, revertFunc) {
          if (event.editable) {
            saveBatEvent(event, revertFunc, calendars, key);
          }
          else {
            revertFunc();
          }
        },
        eventAfterRender: function(event, element, view) {
          // Append event title when rendering as background.
          if (event.rendering == 'background' && event.fixed == 0) {
            if ((view.type == 'timelineThirtyDay' || view.type == 'timelineMonth' || view.type == 'timelineYear' || view.type == 'timeline365Day') && Drupal.settings.batCalendar[key].repeatEventTitle) {
              var start = event.start.clone();
              start.subtract(start.hour(), 'hours').subtract(start.minute(), 'minutes');

              if (start < view.start) {
                start = view.start.clone();
              }

              if (event.end === null) {
                var end = event.start.clone();
              }
              else {
                var end = event.end.clone();

                if (end > view.end) {
                  end = view.end.clone();
                }
                else if (end.unix() != view.end.unix()) {
                  end.add(1, 'minute');
                }
              }

              var index = 0;

              // Event width.
              var width = element.width();
              // Event colspan number.
              var colspan = element.get(0).colSpan;

              if (event.end != null) {
                // Single cell width.
                var cell_width = width/(end.diff(start, 'days'));

                while (start < end) {
                  element.append('<span class="fc-title" style="position:absolute; top:8px; left:' + (index * cell_width + 3) + 'px;">' + (event.title || '&nbsp;') + '</span>');
                  start = start.add(1, 'day');
                  index++;
                }
              }
              else {
                element.append('<span class="fc-title" style="position:absolute; top:8px; left:3px;">' + (event.title || '&nbsp;') + '</span>');
                start = start.add(1, 'day');
              }
            }
            else {
              element.append('<span class="fc-title" style="position:absolute; top:8px; left:3px;">' + (event.title || '&nbsp;') + '</span>');
            }
          }
        }
      });
    });
  }
};

/**
 * Initialize the modal box.
 */
Drupal.batCalendar.Modal = function(element, key, eid, sd, ed, $unit_id, $ev_type) {
  Drupal.CTools.Modal.show('bat-modal-style');

  // The base url (which doesn't change) is used to identify our ajax instance.
  var base = Drupal.settings.basePath + '?q=admin/bat/fullcalendar/';
  // Create a drupal ajax object that points to the event form.
  var element_settings = {
    url : base + $unit_id + '/event/' + $ev_type + '/' + eid + '/' + sd + '/' + ed,
    event : 'getResponse',
    progress : { type: 'throbber' }
  };

  // To make all calendars trigger correctly the getResponse event we need to
  // initialize the ajax instance with the global calendar table element.
  var calendars_table = $(element.el).closest('.calendar-set');

  // Create a new instance only once.
  // If it exists just override the url.
  if (Drupal.ajax[base + key] === undefined) {
    Drupal.ajax[base + key] = new Drupal.ajax(element_settings.url, calendars_table, element_settings);
  }
  else {
    Drupal.ajax[base + key].element_settings.url = element_settings.url;
    Drupal.ajax[base + key].options.url = element_settings.url;
  }
  // We need to trigger the AJAX getResponse manually because the
  // fullcalendar select event is not recognized by Drupal's AJAX.
  $(calendars_table).trigger('getResponse');
};

function saveBatEvent(event, revertFunc, calendars, key) {
  // The event has been moved - attempt to update it.
  var unit_id = event.resourceId.substring(1);

  // Retrieve all events for the unit and time we're dragging onto.
  var events_url = Drupal.settings.basePath + '?q=bat/v2/events&target_ids=' + unit_id + '&target_entity_type=bat_unit&start_date=' + event.start.format('YYYY-MM-DD HH:mm') +
                   '&end_date=' + event.end.format('YYYY-MM-DD HH:mm') + '&event_types=' + event.type;
  proceed = true;
  jQuery.ajax({
    url: events_url,
    success: function(data) {
      // Iterate over each event.
      $.each(data.events, function(index, existingEvent) {
        if (proceed && existingEvent.blocking && (existingEvent.bat_id != event.bat_id)) {
          // This is a blocking event that is not the one we're dragging, bail out!
          alert(Drupal.t('It appears that a conflicting event has been created. Refreshing events.'));
          proceed = false;
          // Refresh calendar events to show the conflicting event.
          $.each(calendars, function(key, value) {
            $(value[0]).fullCalendar('refetchEvents');
          });
        }
      });
    },
    failure: function() {
      alert(Drupal.t('Could not verify that this change is possible. Please try again.'));
      proceed = false;
    },
    async: false
  });

  // Only save the event if we didn't find any conflicts.
  if (proceed == true) {
    // Get session token.
    $.ajax({
      url: Drupal.settings.basePath + '?q=services/session/token',
      type: 'get',
      dataType: 'text',
      error:function (jqXHR, textStatus, errorThrown) {
        alert(Drupal.settings.batCalendar[key].errorMessage);
      },
      success: function (token) {
        // Update event, using session token.
        var events_url = Drupal.settings.basePath + '?q=bat/v2/events';
        $.ajax({
          type: 'PUT',
          url: events_url + '/' + event.bat_id,
          data: JSON.stringify({start_date: event.start.format('YYYY-MM-DD HH:mm'), end_date: event.end.format('YYYY-MM-DD HH:mm'), target_id: unit_id}),
          dataType: 'json',
          beforeSend: function (request) {
            request.setRequestHeader('X-CSRF-Token', token);
          },
          contentType: 'application/json',
          error: function (jqXHR, textStatus, errorThrown) {
            alert(Drupal.settings.batCalendar[key].errorMessage);
            revertFunc();
          },
          success: function (request) {
            // Refresh calendar events.
            $.each(calendars, function(key, value) {
              $(value[0]).fullCalendar('refetchEvents');
            });
          }
        });
      }
    });
  }
  else {
    // We found a conflict, revert the event to its previous position.
    revertFunc();
    // Refresh calendar events.
    $.each(calendars, function(key, value) {
      $(value[0]).fullCalendar('refetchEvents');
    });
  }
}

})(jQuery);
