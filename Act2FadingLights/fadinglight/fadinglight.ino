int LED = 11;
void setup() {
  // put your setup code here, to run once:
pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(LED, 0);
delay(1000);
analogWrite(LED, 64);
delay(1000);
analogWrite(LED, 127);
delay(1000);
analogWrite(LED, 255);
delay(1000);
}
