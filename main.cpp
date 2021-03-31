#include "mbed.h"
using namespace std::chrono;

Ticker flipper;

DigitalOut led4(LED3);

void flip()
{
  led4 = !led4;
}

int main()
{
  led4 =1;

  flipper.attach(&flip, 500ms);
}