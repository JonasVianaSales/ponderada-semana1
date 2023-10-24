  #define buzzer 0

void setup() {
  pinMode(buzzer, OUTPUT);
  Serial1.begin(115200);
  Serial1.println("Ponderada Semana 1: Raspberry Pi Pico.");
  Serial1.println("");
  Serial1.print("Esta demonstração foi feita no Pi Pico pois o Pi Pico W apresenta mal funcionamento.");
}

void loop() {
  int pitch = random(100, 1000);
  tone(buzzer, pitch);
  delay(1000);
  noTone(buzzer);
  delay(1000);
}