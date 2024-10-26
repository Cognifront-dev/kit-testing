
int Input1 = 3;
int Input2 = 4;
int enableA = 5;

int Speed=255;

void setup()
{
  pinMode(Input1, OUTPUT);
  pinMode(Input2, OUTPUT);
  pinMode(enableA, OUTPUT);
}

void loop()
{
  //Rotate the shaft clockwise
  digitalWrite(Input1, HIGH);
  digitalWrite(Input2, LOW);
  analogWrite(enableA, Speed);
  delay(2000);
  //Stop the motor
  digitalWrite(Input1, LOW);
  digitalWrite(Input2, LOW);
  delay(2000);
  //Rotate the shaft Anti-clockwise
  digitalWrite(Input1, LOW);
  digitalWrite(Input2, HIGH);
  analogWrite(enableA, Speed);
  delay(2000);
  //Stop the motor
  digitalWrite(Input1, LOW);
  digitalWrite(Input2, LOW);
  delay(2000);

}
