const int RED_PIN_NORTH = 1;
const int GREEN_PIN_NORTH = 2;
const int RED_PIN_SOUTH = 4;
const int GREEN_PIN_SOUTH = 5;

void setup() {
  pinMode(RED_PIN_NORTH, OUTPUT);
  pinMode(GREEN_PIN_NORTH, OUTPUT);
  pinMode(RED_PIN_SOUTH, OUTPUT);
  pinMode(GREEN_PIN_SOUTH, OUTPUT);
}

void loop() {
  // North red, south green
  digitalWrite(RED_PIN_NORTH, HIGH);
  digitalWrite(GREEN_PIN_NORTH, LOW);
  digitalWrite(RED_PIN_SOUTH, LOW);
  digitalWrite(GREEN_PIN_SOUTH, HIGH);
  delay(10000);

  // South yellow
  digitalWrite(RED_PIN_SOUTH, HIGH);
  digitalWrite(GREEN_PIN_SOUTH, HIGH);
  delay(1500);

  // South red, north yellow
  digitalWrite(RED_PIN_SOUTH, HIGH);
  digitalWrite(GREEN_PIN_SOUTH, LOW);
  digitalWrite(RED_PIN_NORTH, HIGH);
  digitalWrite(GREEN_PIN_NORTH, HIGH);
  delay(1500);

  // North green
  digitalWrite(RED_PIN_NORTH, LOW);
  digitalWrite(GREEN_PIN_NORTH, HIGH);
  delay(10000);

  // Reverse process
  // North yellow, south red
  digitalWrite(RED_PIN_NORTH, HIGH);
  digitalWrite(GREEN_PIN_NORTH, HIGH);
  digitalWrite(RED_PIN_SOUTH, HIGH);
  digitalWrite(GREEN_PIN_SOUTH, LOW);
  delay(1500);

  // North red, south yellow
  digitalWrite(RED_PIN_NORTH, HIGH);
  digitalWrite(GREEN_PIN_NORTH, LOW);
  digitalWrite(RED_PIN_SOUTH, HIGH);
  digitalWrite(GREEN_PIN_SOUTH, HIGH);
  delay(1500);

  // South green, north red
  digitalWrite(RED_PIN_SOUTH, LOW);
  digitalWrite(GREEN_PIN_SOUTH, HIGH);
  digitalWrite(RED_PIN_NORTH, HIGH);
  digitalWrite(GREEN_PIN_NORTH, LOW);
  delay(10000);
}
