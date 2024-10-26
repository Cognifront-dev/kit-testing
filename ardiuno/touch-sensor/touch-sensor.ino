//Program for digital Touch sensor

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(5, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = digitalRead(5);
  //keep your fingure on the sensor
  //You will get '1' value on serial monitor
  //When no finger, value will be zero
  Serial.println(val);
  delay(100);
}
