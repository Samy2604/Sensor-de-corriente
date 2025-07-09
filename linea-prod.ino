int sensorPin = A0;     // Simula lectura del sensor
int ledPin = 10;        // Alerta de consumo anómalo
float threshold = 3.0;  // Umbral de voltaje simulado

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int lectura = analogRead(sensorPin);
  float voltaje = lectura * (5.0 / 1023.0);
  
  Serial.print("Voltaje simulado: ");
  Serial.println(voltaje);

  if (voltaje > threshold) {
    digitalWrite(ledPin, HIGH);  // Enciende alerta
  } else {
    digitalWrite(ledPin, LOW);   // Apaga alerta
  }

  delay(300);
}
[5:41 PM, 5/17/2025] Sam: // Pines de sensores simulados (potenciómetros)
int sensor1 = A0;
int sensor2 = A1;

// Pines de LEDs
int led1 = 10;
int led2 = 11;

// Umbral de consumo simulado
float threshold = 3.0;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Leer voltajes simulados de cada potenciómetro
  float volt1 = analogRead(sensor1) * (5.0 / 1023.0);
  float volt2 = analogRead(sensor2) * (5.0 / 1023.0);

  // Mostrar en monitor serial
  Serial.print("Máquina 1: ");
  Serial.println(volt1);
  Serial.print("Máquina 2: ");
  Serial.println(volt2);

  // Máquina 1
  if (volt1 > threshold) {
    digitalWrite(led1, HIGH);
  } else {
    digitalWrite(led1, LOW);
  }

  // Máquina 2
  if (volt2 > threshold) {
    digitalWrite(led2, HIGH);
  } else {
    digitalWrite(led2, LOW);
  }

  delay(500);
}
