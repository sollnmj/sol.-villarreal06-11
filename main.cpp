int rojo=12;
int amarillo=10;
int verde=8;
void setup() {
  pinMode(rojo, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(verde, OUTPUT);
  digitalWrite(rojo, LOW); // apagamos el LED por si estuviera encendido
  digitalWrite(amarillo, LOW);
  digitalWrite(verde, LOW);
}
void loop() {
 digitalWrite(rojo, HIGH);
 delay(2000);
 digitalWrite(rojo, LOW);
 digitalWrite(verde, HIGH);
 delay(2000);
 digitalWrite(verde, LOW);
 digitalWrite(amarillo, HIGH);
 delay(500);
 digitalWrite(amarillo, LOW);
}

