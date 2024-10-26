#define LED_PIN 3
#define LED_PIN1 4
#define LED_PIN2 12
#define LED_PIN3 13

void setup()
{
  pinMode(LED_PIN, OUTPUT);
  pinMode(LED_PIN1, OUTPUT);
  pinMode(LED_PIN2, OUTPUT);
  pinMode(LED_PIN3, OUTPUT);
}

void loop()
{
  digitalWrite(LED_PIN, HIGH);
  digitalWrite(LED_PIN1, HIGH);
  digitalWrite(LED_PIN2, HIGH);
  digitalWrite(LED_PIN3, HIGH);
  delay(500);
  digitalWrite(LED_PIN, LOW);
  digitalWrite(LED_PIN1, LOW);
  digitalWrite(LED_PIN2, LOW);
  digitalWrite(LED_PIN3, LOW);
  delay(500);
}
