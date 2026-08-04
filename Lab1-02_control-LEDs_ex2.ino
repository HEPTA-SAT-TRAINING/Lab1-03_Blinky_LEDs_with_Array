const int myleds[] = {25, 29, 24};

void setup() {
  pinMode(myleds[0], OUTPUT);
  pinMode(myleds[1], OUTPUT);
  pinMode(myleds[2], OUTPUT);
}

void loop() {
  digitalWrite(myleds[0], HIGH);
  delay(200);

  digitalWrite(myleds[0], LOW);
  delay(200);
}
