#include <stdio>
#include <stdlib>
using namespace std;

class Clock {
protected:
  int hr, min, sec, is_pm;
public:
  Clock (int h, int s, int m, int pm);
  void setClock (int h, int s, int m, int pm);
  void setClock (int& h, int& s, int& m, int& pm);
  void advance ();
};
