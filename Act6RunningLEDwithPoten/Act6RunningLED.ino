int potPin = A0;
int LED1 = 2;
int LED2 = 4;
int LED3 = 6;
int LED4 = 8;
int LED5 = 10;
int sensorValue = 0;
int outputValue = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
pinMode(LED3, OUTPUT);
pinMode(LED4, OUTPUT);
pinMode(LED5, OUTPUT);
pinMode(potPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
sensorValue = analogRead(potPin);
outputValue = map(sensorValue, 1023, 0, 0, 255);

analogWrite(LED1, outputValue);
delay(100);
analogWrite(LED1, LOW);
delay(100);

analogWrite(LED2, outputValue);
delay(100);
analogWrite(LED2, LOW);
delay(100);

analogWrite(LED3, outputValue);
delay(100);
analogWrite(LED3, LOW);
delay(100);

analogWrite(LED4, outputValue);
delay(100);
analogWrite(LED4, LOW);
delay(100);

analogWrite(LED5, outputValue);
delay(100);
analogWrite(LED5, LOW);
delay(100);
}
