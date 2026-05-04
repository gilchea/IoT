#define POTENTIOMETER_PIN A0

void setup() {
  Serial.begin(9600); //tốc độ bau;
}

void loop() {
  Serial.println(analogRead(POTENTIOMETER_PIN)); // cho phép đọc tín hiệu analog 
  delay(100);
}

// 

