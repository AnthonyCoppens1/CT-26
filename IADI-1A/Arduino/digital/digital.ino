const int LED = 13;
const int button = 7;
int currentState = 0;
int turnedOn = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  currentState = digitalRead(button);
  if (currentState == HIGH && turnedOn == 0){
    digitalWrite(LED, HIGH);
    turnedOn = 1;
  }
  else if (currentState == HIGH && turnedOn == 1){
    digitalWrite(LED, LOW);
    turnedOn = 0;
  }
  delay(200);
}
