/* File Calendar.h
  Pedro Fornari e Lucas Pereira Luiz
  Março de 2017
*/
#include <string>
#include <stdio>

using namespace std;

class Calendar : public Clock {
protected:
int mo, day, yr;
public:
Calendar (int m, int d, int y);
void setCalendar (int m, int d,
int y);
void readCalendar (int& m, int& d,
int& y);
void advance ();
};
