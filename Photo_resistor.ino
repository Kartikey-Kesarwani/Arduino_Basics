int sensepin=0;
int ledpin=9;

void setup()
{
  pinMode(ledpin, OUTPUT);
}

void loop()
{
  int v =analogRead(sensepin);
  v=constrain(v,750,900);
  int ledlevel=map(v,750,900,255,0);
  analogWrite(ledpin,ledlevel);
}