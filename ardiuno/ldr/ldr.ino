const int ledPin = 2;

const int ldrPin = A5;

void setup() {

  Serial.begin(9600);

  pinMode(ledPin, OUTPUT);

  pinMode(ldrPin, INPUT);

}

void loop() {

  int ldr = analogRead(ldrPin);
  digitalWrite(ledPin, LOW);

  if (ldr <= 500) //might have to change threshold from ldr module to module
  {
    digitalWrite(ledPin, HIGH);

    Serial.print("Its Night Time, Turn on the LED : ");

    Serial.println(ldr);

  } 
  
  else {

    digitalWrite(ledPin, LOW);

    Serial.print("Its daytime, Turn off the LED : ");

    Serial.println(ldr);

  }
  Serial.println(ldr);
  delay(2000);
}
