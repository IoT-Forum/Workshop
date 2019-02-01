int led = 9;           // the PWM pin the LED is attached to
int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup() {
  pinMode(led, OUTPUT); // declare pin 9 to be an output:
}

// the loop routine runs over and over again forever:
void loop() {
  analogWrite(led, brightness); // set the brightness of pin 9:
  
  brightness = brightness + fadeAmount; // change the brightness for next time through the loop:

  // reverse the direction of the fading at the ends of the fade:
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  
  delay(30); // wait for 30 milliseconds to see the dimming effect
}
