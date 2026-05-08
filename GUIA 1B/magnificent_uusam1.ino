void setup() {
  // Configuracion de los pines del 2 al 11
  for (int i = 2; i <= 11; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // Efecto escalera de ida
  for (int i = 2; i <= 11; i++) {
    digitalWrite(i, HIGH);
    delay(100);
    digitalWrite(i, LOW);
  }
  // Efecto escalera de vuelta
  for (int i = 11; i >= 2; i--) {
    digitalWrite(i, HIGH);
    delay(100);
    digitalWrite(i, LOW);
  }
}
