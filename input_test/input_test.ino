#include <Arduino.h>
#include "inputTest.h"

const int input = PC14;
const int output = PC15;

inputTest trigger(input,output);

void setup() {
  trigger.initialize();

}

void loop() {
 trigger.execute();

}
