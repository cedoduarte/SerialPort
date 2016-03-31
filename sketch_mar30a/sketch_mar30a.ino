#define PIN_LED 9

void setup()
{
  pinMode(PIN_LED, OUTPUT);
  analogWrite(PIN_LED, 0);
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available()){
    char led_specifier = Serial.read();
    int led_brightness = Serial.parseInt();
    analogWrite(PIN_LED, led_brightness);
  }
}




