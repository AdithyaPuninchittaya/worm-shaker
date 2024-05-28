///////

int OUT_PIN = 4;

int REPEAT = 45;
int VIBRATE_TIME = 5;
int SECOND_TIME = 15;
int WAIT_TIME = 60;
double VIBRATE_STRENGTH = 1;


///////

void setup() {
  pinMode(OUT_PIN, OUTPUT);
}

int count = 0;

void loop() {
  analogWrite(OUT_PIN, 0);
  if (count < REPEAT) {
    for (int i = 0; i < 10; i++) {
      analogWrite(OUT_PIN, round(VIBRATE_STRENGTH * 1023));
      delay(VIBRATE_TIME * 1000);
      analogWrite(OUT_PIN, 0);
      delay(SECOND_TIME * 1000);
    }
    delay(WAIT_TIME * 1000);
    count += 1;
  } else {
    delay(50);
  }
}



