(function($) {
  Drupal.behaviors.library_hours_jquery = {
    attach: function(context, settings) {
      $(settings.mymodule.calendar.calendar_selector).fullCalendar({
        
        header: {
          left: '',
          center: 'title',
          right: 'today prev,next'
        },
        'handleWindowResize' : true,
        'weekMode' : 'variable',

        events: {
          url: settings.mymodule.calendar.project_events_json_url,

        },

        eventRender: function(event, element) {

         /* element.qtip({
            title: event.description
          });*/
        }
      });
 
    }
  };
})(jQuery);