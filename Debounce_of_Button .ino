int switchPin=8;
int ledPin=13;
boolean lB= LOW;
boolean cB = LOW;
boolean ledOn=false;

void setup()
{
  pinMode(switchPin,INPUT);
  pinMode(ledPin,OUTPUT);
}

boolean debounce(boolean last)
{
  boolean current = digitalRead(switchPin);
  if(last!=current)
  {
    delay(5);
    current = digitalRead(switchPin);
  }
  return current;
}
void loop()
{
  cB=debounce(lB);
  if(lB==LOW && cB== HIGH)
  {
    ledOn!=ledOn;
  }
  lB=cB;
  digitalWrite(ledPin,ledOn);
 
}