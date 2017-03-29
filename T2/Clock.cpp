#include "Clock.h"
#include <chrono>
#include <thread>
#include <time.h>
#include <iostream>

Clock::Clock(int h, int s, int m, int is_pm)
{
  hr = h;
  min = m;
  sec = s;
  is_pm = is_pm;
}

void Clock::advance(void)
{
  if(sec < 60)
    ++sec;
  else if(min < 60)
  {
    sec = 0;
    ++min;
  }
  else if(hr < 11)
  {
    sec = 0;
    min = 0;
    ++hr;
  }
  else if(hr > 11)
  {
    sec = 0;
    min = 0;
    hr = 0;
    is_pm = ~is_pm;
  }
  //sleep(1000);
  cout << hr << ":" << min << ":" << sec << "  " << is_pm;
}
