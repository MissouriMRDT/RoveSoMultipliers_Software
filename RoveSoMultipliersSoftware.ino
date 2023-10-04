#include <XInput.h>

float outputs[8]; // Declare the global outputs array
int inputs[8] = {A0, A1, A2, A3, A7, A8, A9, A10};

void setup() {
  XInput.setAutoSend(false);
  XInput.begin();

  for (int i = 0; i < 8; i++) { //Set Pins
    pinMode(inputs[i], INPUT);
  }
}

void loop() {
  readSliders(); // Call the readSliders function to update the outputs array
  sendJoysticks(); // Call the sendjoysticks function to send joystick values to the device
}

void sendJoysticks() { // Ouputs the slider values as joystick postions
  XInput.setJoystick(JOY_LEFT, -outputs[0], outputs[1]);
  XInput.setJoystick(JOY_RIGHT, -outputs[2], outputs[3]);
  XInput.press(BUTTON_Y);
  XInput.send();
  delay(50);
  XInput.release(BUTTON_Y);
  XInput.send();
  delay(5);
  XInput.setJoystick(JOY_LEFT, -outputs[4], outputs[5]);
  XInput.setJoystick(JOY_RIGHT, -outputs[6], outputs[7]);
  XInput.press(BUTTON_X);
  XInput.send();
  delay(50);
  XInput.release(BUTTON_X);
  XInput.send();
  delay(5);
}

void readSliders() { // Reads the values of the sliders
  for (int i = 0; i < 8; i++) {
    outputs[i] = (analogRead(inputs[i]) * 2 / 1023.0 - 1) * 32767;
  }
}