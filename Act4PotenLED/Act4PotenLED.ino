int potPin = A0;
int LED = 11;
int sensorValue = 0;
int outputValue = 0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(potPin, INPUT);
pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
sensorValue = analogRead(potPin);
outputValue = map(sensorValue, 0, 1023, 0, 255);
analogWrite(LED, outputValue);

//for printing
Serial.println(sensorValue);
delay(100);
}
