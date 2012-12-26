int led = 13;

int interval = 250;

void setup() {
  // init serial for debugging
  Serial.begin(9600);
  
  // init output pin
  pinMode(led, OUTPUT);
}

void writeSignal(int duration) {
  digitalWrite(led, HIGH);
  delay(duration);
  digitalWrite(led, LOW);
  delay(interval);
  //Serial.print("wrote for ");
  //Serial.println(duration);
}

void morse(char mCode[]) {
  int i = 0;
  int length = strLength(mCode);
  
  while(i < length) {
    
    if (mCode[i] == '.') {
      writeSignal(interval);
    } else if (mCode[i] == '-') {
      writeSignal(interval * 3);
    } else if (mCode[i] == ' ') {
      // space between letters is 3 units, space between words is 7,
      // but we only do 2 for space and 6 for wordspace as one unit 
      // delay is already done in the writeSignal() function
      
      delay(interval * 2);
      // Serial.println("space");
    } else if (mCode[i] == '/') {
      delay(interval * 6);
      // Serial.println("wordspace");
    }
    
    i++;
  }
}

void loop () {
  morse("--. --- -../.--- ..- .-../");
}

// grand theft function - http://arduino.cc/forum/index.php/topic,45301.0.html
int strLength(char *buffer) {
  int i=0;
  while(buffer[i])
    i++;
  return i;
}
