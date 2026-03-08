//#define TX_DDD 1
//#define PIN_RX A
//#define ARDUINO_PIN_14  2   // GPIO2
//#define ARDUINO_PIN_A0  ARDUINO_PIN_14
#define I2S_LRC  25
#define I2S_BCLK 5
#define I2S_DIN  26

void setup() {
  Serial.begin(115200);
}
void loop() {
  int a = analogChannelToDigitalPin(A0);
  delay(100);
}