const int onesecond = 8;
const int twosecond = 7;


void setup() {
  pinMode(onesecond, OUTPUT);
  pinMode(twosecond, OUTPUT);
}




void loop() {
  digitalWrite(onesecond, HIGH);   // second 0-1: both on
  digitalWrite(twosecond, HIGH);
  delay(1000);


  digitalWrite(onesecond, LOW);    // second 1-2: LED 1 off, LED 2 stays on
  delay(1000);


  digitalWrite(onesecond, HIGH);   // second 2-3: LED 1 on, LED 2 off
  digitalWrite(twosecond, LOW);
  delay(1000);


  digitalWrite(onesecond, LOW);    // second 3-4: both off
  delay(1000);
}










