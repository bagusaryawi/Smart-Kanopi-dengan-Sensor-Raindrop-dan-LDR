// Tentukan pin
const int pinAnalog = 35;  // Pin A0 pada sensor hujan
const int pinDigital = 23; // Pin D0 pada sensor hujan

void setup() {
  Serial.begin(115200);

  // Atur pin digital sebagai input
  pinMode(pinDigital, INPUT);
}

void loop() {
  // Baca nilai analog
  int nilaiAnalog = analogRead(pinAnalog);
  int convertAnalog = (nilaiAnalog * 100) / 4095; // Mengonversi nilai ke persentase (0-100)

  // Baca nilai digital
  int nilaiDigital = digitalRead(pinDigital);

  // Tampilkan hasil pembacaan
  Serial.print("Nilai Analog (%): ");
  Serial.print(convertAnalog);
  Serial.print(" | Nilai Digital: ");
  Serial.println(nilaiDigital);

  // Tambahkan penundaan sejenak agar pembacaan mudah dilihat
  delay(1000);
}
