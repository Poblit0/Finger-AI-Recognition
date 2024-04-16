// Wire Slave Receiver
// by Nicholas Zambetti <http://www.zambetti.com>

// Demonstrates use of the Wire library
// Receives data as an I2C/TWI slave device
// Refer to the "Wire Master Writer" example for use with this

// Created 29 March 2006

// This example code is in the public domain.


#include <Wire.h>
#include <Servo.h>

Servo servo;

void setup() {
  Wire.begin(0x55);              // join i2c bus with address #4
  Wire.onReceive(receiveEvent);  // register event
  Serial.begin(9600);            // start serial for output

  servo.attach(2);  // servo is connected to PIN 2
}

void loop() {
  delay(100);
}

// function that executes whenever data is received from master
// this function is registered as an event, see setup()
void receiveEvent(int howMany) {
  while (1 < Wire.available())  // loop through all but the last
  {
    char c = Wire.read();  // receive byte as a character
    Serial.print(c);       // print the character
  }
  int x = Wire.read();  // receive byte as an integer
  Serial.println(x);    // print the integer

  if (x == 0) {       //if there is 1 finger
    servo.write(20);  //servo is pointing left
  }
  if (x == 1) {       //if there is 2 fingers
    servo.write(45);  //servo is pointing top left
  }
  if (x == 2) {       //if there is 3 fingers
    servo.write(90);  //servo is pointing top
  }
  if (x == 3) {        //if there is 4 fingers
    servo.write(135);  //servo is pointing top right
  }
  if (x == 4) {        //if there is 5 fingers
    servo.write(170);  //servo is pointing right
  }
}