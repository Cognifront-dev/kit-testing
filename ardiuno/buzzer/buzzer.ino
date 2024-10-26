#define buz 2

void setup()
{
  pinMode(buz, OUTPUT);
}

void loop()
{
  digitalWrite(buz, HIGH);
  delay(500);
  digitalWrite(buz, LOW);
  delay(500);
}
