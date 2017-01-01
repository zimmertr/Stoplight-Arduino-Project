int red = 12;
int yellow = 7;
int yellow2 = 6;
int green = 2;
int green2 = 3;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(green2, OUTPUT);
  digitalWrite(green, HIGH);
}

void loop() {
  stoplight();
}

void stoplight(){
  delay(4000);
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  delay(2000);
  digitalWrite(yellow, LOW);
  digitalWrite(red, HIGH);
  delay(3000);
  digitalWrite(red, LOW);
  digitalWrite(green, HIGH);
}
