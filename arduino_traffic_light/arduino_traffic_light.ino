//Author:RohanB

#define   LED_1   6
#define   LED_2   10
#define   LED_3   11

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_1, HIGH);
  delay(1000);
  digitalWrite(LED_1, LOW);
  delay(1000);
  digitalWrite(LED_2, HIGH);
  delay(1000);
  digitalWrite(LED_2, LOW);
  delay(1000);
  digitalWrite(LED_3, HIGH);
  delay(1000);
  digitalWrite(LED_3, LOW);
  delay(1000);
}
