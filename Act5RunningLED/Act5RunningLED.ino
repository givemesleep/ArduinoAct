int led1 = 2;
int led2 = 4;
int led3 = 6;
int led4 = 8;
int led5 = 10;
void setup() {
  // put your setup code here, to run once:
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
pinMode(led5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led1, HIGH);
delay(1000);
digitalWrite(led1, LOW);
digitalWrite(led2, HIGH);
delay(1000);
digitalWrite(led2, LOW);
digitalWrite(led3, HIGH);
delay(1000);
digitalWrite(led3, LOW);
digitalWrite(led4, HIGH);
delay(1000);
digitalWrite(led4, LOW);
digitalWrite(led5, HIGH);
delay(1000);
digitalWrite(led5, LOW);
delay(1000);

}
