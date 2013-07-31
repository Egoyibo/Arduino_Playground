/*
 * SerialOutput Sketch
 *Print numbers to the serial port
*/

void setup()
{
  Serial.begin(9600); //send and receive data at 9600 baud
}

int number = 0;

void loop()
{
  Serial.println(number);
  
  delay(1000);
  number++;
}
