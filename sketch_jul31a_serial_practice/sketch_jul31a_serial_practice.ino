/*
 * SerialOutput Sketch
 * Print numbers to the serial port
 
void setup()
{
  Serial.begin(9600); //send and receive data at 9600 baud
}

int number = 0;

void loop()
{
  Serial.println(number);
  
  delay(3000
  
  );
  number++;
  
}
*/

/* SerialReceive sketch
 * Blinks the LED at a rate proportional to the received digit value
*/

int ledPin = 13;
int blinkRate = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  if (Serial.available())
  {
    char ch = Serial.read();
    if (isDigit(ch))
    {
      blinkRate = (ch - '0');
      blinkRate = blinkRate * 100;
    }
  }
  blink();
}

void blink()
{
  digitalWrite(ledPin, HIGH);
  delay(blinkRate);
  digitalWrite(ledPin, LOW);
  delay(blinkRate);
}


