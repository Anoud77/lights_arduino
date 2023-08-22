int redpin=3;
int yellowpin=4;
int greenpin=5;
void setup() {
  // put your setup code here, to run once:
  pinMode(redpin, OUTPUT);
  pinMode(yellowpin, OUTPUT);
  pinMode(greenpin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(greenpin, HIGH);
  delay(5000);
  digitalWrite(greenpin, LOW);
  digitalWrite(yellowpin, HIGH);
  delay(3000);
  digitalWrite(yellowpin, LOW);
  digitalWrite(redpin, HIGH);
  delay(5000);
  digitalWrite(redpin, LOW);

  
}
