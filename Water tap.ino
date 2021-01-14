#define trig 2
#define echo 4
#define tap 8

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(tap, OUTPUT);
}

void loop() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  long t = pulseIn(echo, HIGH);
  long cm = t / 29 / 2 ;

  delay(10);

  if (cm < 30) {            // you can change 
    digitalWrite(tap, HIGH);
    delay(100);
  }
  else {
    digitalWrite(tap, LOW);
  }
}