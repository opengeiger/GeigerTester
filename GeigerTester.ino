void setup() {
  pinMode(8, OUTPUT);      // sets the digital pin as output
}

void loop() {
  float cpm = 1200;
  int del = round(1/(cpm/60.0)*1000/2);
  digitalWrite(8, LOW);
  delay(del);
  digitalWrite(8, HIGH);
  delay(del);
}
