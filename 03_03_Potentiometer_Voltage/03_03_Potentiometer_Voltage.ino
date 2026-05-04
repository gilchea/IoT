#define POTENTIOMETER_PIN A0

void setup()
{
  Serial.begin(9600);

}

void loop()
{
  int data = analogRead(POTENTIOMETER_PIN);
  int Volt = map(data, 0, 1023, 0, 5000);

  float data2 = analogRead(POTENTIOMETER_PIN);
  // float Volt2 = map(data2, 0, 1023, 0, 5);
  float Volt2 = data * (5.0 / 1023.0);
  Serial.print("POTETIOMETER at ");
  // Serial.print(Volt);
  // Serial.println("mV");


  Serial.print(Volt2, 2);
  Serial.println("V");
  delay(100);
}   

