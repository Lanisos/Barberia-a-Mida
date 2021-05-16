#include <iostream>
#include <queue>
using namespace std;

class Scheduler {
    private:
        int currentTime;
        priority_queue<Event> eventList;
        Source source;
        Queue queue;
        Server server;
    public:
        //Constructora per defecte
        Scheduler() {
          currentTime = 0;
          Event initializer = Event(Start,0,null);
          eventList.push(initializer);
        }

        void run() {
          configureModel();
          while (not eventList.empty() or currentTime >= 43200) {
            Event currentEvent = eventList.front();
            currentTime = currentEvent.getTime();

          }
          showStatistics();
        }

}
