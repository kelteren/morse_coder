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

void morse(String text) {
  int i = 0;
  
  // my cousin called so this won't work just yet :p
  while (i < text.length()) {
    char thisChar = text[i];
    if (thisChar = ".") {
      mDot();
      delay(dot);
    }
  }
}

void loop () {
  morse(".");
}

