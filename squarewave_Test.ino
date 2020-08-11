void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  analogWrite(5, 64); // 25% PWM
}

void loop() { //generate two square waves
  // put your main code here, to run repeatedly:
  digitalWrite(3, HIGH); //500Hz
  digitalWrite(3, HIGH); //250Hz
  delay(1);
  digitalWrite(3, LOW);
  delay(1);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  delay(1);
  digitalWrite(3, LOW);
  delay(1);


}
