#include "inputTest.h"

inputTest::inputTest(int PinIn, int PinOut){
  this->PinIn = PinIn;
  this->PinOut = PinOut;
}

void inputTest::initialize(){
  pinMode(PinIn,INPUT);
  pinMode(PinOut,OUTPUT);

}

void inputTest::execute(){

  int buttonState = digitalRead(PinIn);
  
  if(buttonState == HIGH){
    digitalWrite(PinOut, LOW);
  }else {
    digitalWrite(PinOut, HIGH);
  }
}

