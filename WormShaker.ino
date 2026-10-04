///////

int OUT_PIN = 10;

int BLOCK_REPEATS = 45; // times
int ITERATIONS_IN_BLOCK = 10; // times
int VIBRATE_TIME = 5; // seconds
int SECOND_TIME = 15; // seconds
int WAIT_TIME = 60; // seconds
double VIBRATE_STRENGTH = 100; // %


///////

void setup() {
  pinMode(OUT_PIN, OUTPUT);
}

int count = 0;

void loop() {
  analogWrite(OUT_PIN, 0);
  if (count < BLOCK_REPEATS) {
    for (int i = 0; i < ITERATIONS_IN_BLOCK; i++) {
      analogWrite(OUT_PIN, round(VIBRATE_STRENGTH / 100 * 255));
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


