PROGRAM 1: Joystick Controlled LEDs + Buzzer

int xPin = A0;
int yPin = A1;
int swPin = 2;

int ledForward = 8;
int ledBackward = 9;
int ledLeft = 10;
int ledRight = 11;
int buzzer = 12;

void setup() {
  pinMode(swPin, INPUT_PULLUP);
  pinMode(ledForward, OUTPUT);
  pinMode(ledBackward, OUTPUT);
  pinMode(ledLeft, OUTPUT);
  pinMode(ledRight, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int xValue = analogRead(xPin);
  int yValue = analogRead(yPin);
  int swState = digitalRead(swPin);

  digitalWrite(ledForward, LOW);
  digitalWrite(ledBackward, LOW);
  digitalWrite(ledLeft, LOW);
  digitalWrite(ledRight, LOW);

  if (yValue > 700) {
    digitalWrite(ledForward, HIGH);
  }

  if (yValue < 300) {
    digitalWrite(ledBackward, HIGH);
  }

  if (xValue < 300) {
    digitalWrite(ledLeft, HIGH);
  }

  if (xValue > 700) {
    digitalWrite(ledRight, HIGH);
  }

  if (swState == LOW) {
    digitalWrite(buzzer, HIGH);
  } else {
    digitalWrite(buzzer, LOW);
  }

  Serial.print("X: ");
  Serial.print(xValue);
  Serial.print(" Y: ");
  Serial.print(yValue);
  Serial.print(" Switch: ");
  Serial.println(swState);

  delay(100);
}