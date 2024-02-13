// Code Written By BlueJay

#include <Keyboard.h>

// Define Button Pins
const byte BUTTON1 = 5;
const byte BUTTON2 = 6;
const byte BUTTON3 = 7;
const byte BUTTON4 = 8;

// Define Keybinds
const byte BUTTON1KEY = KEY_F13;
const byte BUTTON2KEY = KEY_F14;
const byte BUTTON3KEY = KEY_F15;
const byte BUTTON4KEY = KEY_F16;

void setup() {

  Keyboard.begin();

  pinMode(BUTTON1, INPUT_PULLUP);
  pinMode(BUTTON2, INPUT_PULLUP);
  pinMode(BUTTON3, INPUT_PULLUP);
  pinMode(BUTTON4, INPUT_PULLUP);

}

void loop() {
  byte state1 = digitalRead(BUTTON1);
  byte state2 = digitalRead(BUTTON2);
  byte state3 = digitalRead(BUTTON3);
  byte state4 = digitalRead(BUTTON4);

  // Button 1
  if (state1 == LOW) {
    Keyboard.press(BUTTON1KEY);
  } else {
    Keyboard.release(BUTTON1KEY);
  }

  // Button 2
  if (state2 == LOW) {
    Keyboard.press(BUTTON2KEY);
  } else {
    Keyboard.release(BUTTON2KEY);
  }

  // Button 3
  if (state3 == LOW) {
    Keyboard.press(BUTTON3KEY);
  } else {
    Keyboard.release(BUTTON3KEY);
  }

  // Button 4
  if (state4 == LOW) {
    Keyboard.press(BUTTON4KEY);
  } else {
    Keyboard.release(BUTTON4KEY);
  }

}
