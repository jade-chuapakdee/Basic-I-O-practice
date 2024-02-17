#ifndef INPUT_TEST_H
#define INPUT_TEST_H

#include <Arduino.h>

class inputTest {
  private:
    int PinIn;
    int PinOut;

  public:
    inputTest(int PinIn,int PinOut);
    void initialize();
    void execute();
};

#endif

