int led = 13;

int mDot = 250;
int mDash = 750;

void setup() {
  pinMode(led, OUTPUT);
}

void loop () {
  /* G */
  dash();
  dash();
  dot();
  /* G */
  
  delay(500);
  
  /* O */
  dash();
  dash();
  dash();
  /* O */
  
  delay(500);
  
  /* D */
  dash();
  dot();
  dot();
  /* D */
  
  delay(1500);
  
  /* J */
  dot();
  dash();
  dash();
  dash();
  /* J */
  
  delay(500);
  
  /* U */
  dot();
  dot();
  dash();
  /* U */
  
  delay(500);
  
  /* L */
  dot();
  dash();
  dot();
  dot();
  /* L */
  
  delay(1500);
}

void dash() {
  digitalWrite(led, HIGH);
  delay(mDash);
  digitalWrite(led, LOW);
  delay(mDot);
}

void dot() {
  digitalWrite(led, HIGH);
  delay(mDot);
  digitalWrite(led, LOW);
  delay(mDot);
}
