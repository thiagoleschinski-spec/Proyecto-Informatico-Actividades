
int rojoAuto = 2;
int amarAuto = 3;
int verdAuto = 4;
int verdPeaton = 5;
int rojoPeaton = 6;

void setup() {
  pinMode(rojoAuto, OUTPUT);
  pinMode(amarAuto, OUTPUT);
  pinMode(verdAuto, OUTPUT);
  pinMode(verdPeaton, OUTPUT);
  pinMode(rojoPeaton, OUTPUT);
}

void loop() {
  // 1. PASO VEHICULAR.
  digitalWrite(verdAuto, HIGH);  digitalWrite(rojoPeaton, HIGH);
  digitalWrite(rojoAuto, LOW);   digitalWrite(amarAuto, LOW);    digitalWrite(verdPeaton, LOW);
  delay(5000); // 5 segundos

  // 2. PRECAUCIÓN VEHICULAR.
  digitalWrite(verdAuto, LOW);
  digitalWrite(amarAuto, HIGH);
  delay(2000); // 2 segundos

  // 3. PASO PEATONAL.
  digitalWrite(amarAuto, LOW);   digitalWrite(rojoPeaton, LOW);
  digitalWrite(rojoAuto, HIGH);  digitalWrite(verdPeaton, HIGH);
  delay(5000); // 5 segundos

  // 4. AVISO FIN DE PASO.
  for(int i=0; i<3; i++) {
    digitalWrite(verdPeaton, LOW); delay(300);
    digitalWrite(verdPeaton, HIGH); delay(300);
  }
}
