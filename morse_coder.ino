int led = 13;

int dot = 250;
int dash = 750;
int space = 750;
int wordspace = 1750;

void setup() {
  pinMode(led, OUTPUT);
}

void mDot() {
  digitalWrite(led, HIGH);
  delay(dot);
  digitalWrite(led, LOW);
}

void mDash() {
  digitalWrite(led, HIGH);
  delay(dash);
  digitalWrite(led, LOW);
}

function mose(String text) {
  
}

void loop () {
  mDash();
  delay(dot);
  mDash();
  delay(dot);
  mDot();
  delay(dash);
  
  mDash();
  delay(dot);
  mDash();
  delay(dot);
  mDash();
  delay(dash);
  
  mDash();
  delay(dot);
  mDot();
  delay(dot);
  mDot();
  delay(wordspace);
}

