//Coded by: Rajesh Majumdar (@freakym0nk)

int red = 11;   //Red LED attached to Pin 11
int yellow = 13; //Yellow LED attached to Pin 13
int green = 12; //Green LED attached to Pin 12

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  digitalWrite(red, HIGH);
  delay(200);
  digitalWrite(red, LOW);
  delay(300);
  digitalWrite(green, HIGH);
  delay(200);
  digitalWrite(green, LOW);
  delay(300);
  digitalWrite(yellow,HIGH);
  delay(200);
  digitalWrite(yellow,LOW);
  delay(300);
}
