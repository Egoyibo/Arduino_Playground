/*
 Fade
 
 This example shows how to fade an LED on pin 9
 using the analogWrite() function.
 
 This example code is in the public domain.
 
 */
int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

void setup()  { 
  // declare pin 9 to be an output:
  Serial.begin(9600);
  pinMode(9, OUTPUT);
} 

void loop()  { 
  // set the brightness of pin 9:
  analogWrite(9, brightness);    

  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;
  Serial.println(brightness);

  // reverse the direction of the fading at the ends of the fade: 
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount ; 
  }     
  // wait for 30 milliseconds to see the dimming effect    
  delay(30);                            
}
