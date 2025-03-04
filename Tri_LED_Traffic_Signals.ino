// Define pin connections
const int redA = 1;  // East-West red light
const int greenA = 2;  // East-West green light
const int redB = 4;  // North-South red light
const int greenB = 5;  // North-South green light

void setup() {
  // Initialize pin modes
  pinMode(redA, OUTPUT);
  pinMode(greenA, OUTPUT);
  pinMode(redB, OUTPUT);
  pinMode(greenB, OUTPUT);
}

void loop() {
  // Initial state: A is red, B is green
  digitalWrite(redA, HIGH);
  digitalWrite(greenB, HIGH);
  delay(20000);

  // B turns yellow
  digitalWrite(greenB, HIGH);
  digitalWrite(redB, HIGH);
  delay(3000);

  // B turns red, A turns yellow
  digitalWrite(greenB, LOW);
  digitalWrite(redB, HIGH);
  digitalWrite(redA, HIGH);
  digitalWrite(greenA, HIGH);
  delay(3000);

  // A turns green
  digitalWrite(redA, LOW);
  digitalWrite(greenA, HIGH);
  delay(20000);

  // A turns yellow
  digitalWrite(redA, HIGH);
  digitalWrite(greenA, HIGH);
  delay(3000);

  // A turns red, B turns yellow
  digitalWrite(redA, HIGH);
  digitalWrite(greenA, LOW);
  digitalWrite(redB, HIGH);
  digitalWrite(greenB, HIGH);
  delay(3000);

  // B turns green
  digitalWrite(redB, LOW);

}
