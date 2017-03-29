#include "Clock.cpp"


int main()
{
  Clock c(0, 0, 0, 0);
  while(1)
  {
    c.advance();
  }
  return 0;
}
