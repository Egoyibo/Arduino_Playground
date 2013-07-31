/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */

//I am going to give the LED connected to Pin 13 a name

int led = 13;

//setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  // Pin 13 has an LED connected on most Arduino boards:
  pinMode(led, OUTPUT);     
}

void loop() {
  digitalWrite(led, HIGH);   // set the LED on
  delay(2000);              // wait for a second
  digitalWrite(led, LOW);    // set the LED off
  delay(2000);              // wait for a second
}
