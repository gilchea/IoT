#define LED_PIN 8
#define BUTTON_PIN 7
byte lastButtonState = LOW;
byte ledState = LOW;
unsigned long debounceDuration = 50; // milis
unsigned long lastTimeButtonStateChange = 0;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop() {
  if (milis() - lastTimeButtonStateChange > debounceDuration) {
    byte buttonState = digitalRead(BUTTON_PIN);
    if (buttonState != lastButtonState) {
      lastTimeButtonStateChange = millis();
      lastButtonState = buttonState;
      if (buttonState == LOW) {
        ledState = (ledState == HIGH) ? LOW : HIGH;
        digitalWrite(LED_PIN, ledState);
      }
    }
  }
}