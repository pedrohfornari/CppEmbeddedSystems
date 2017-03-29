/* File ClockCalendar.h
  Pedro Fornari e Lucas Pereira Luiz
  Março de 2017
*/
#include <string>
using namespace std;

class ClockCalendar : public Clock, public Calendar {
public:
ClockCalendar (int mt, int d, int y, int h, int m, int s, int pm);
void advance ();
};
