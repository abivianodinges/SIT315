uint8_t led_state = LOW;
int buttonState = 0;
void setup()
{
  	Serial.begin(9600);
	pinMode(2, INPUT);
  	pinMode(3, INPUT);
  	pinMode(LED_BUILTIN, OUTPUT);
  	attachInterrupt(digitalPinToInterrupt(2), toggle, RISING);
  	attachInterrupt(digitalPinToInterrupt(3), toggle, CHANGE);
}

void loop()
{
  Serial.print("Motion ");
  Serial.println(digitalRead(2));
  Serial.print("Button: ");
  Serial.println(digitalRead(3));
  delay(3000); // Delay a little bit to improve simulation performance
}

void toggle(){
  led_state = !led_state;
  digitalWrite(LED_BUILTIN, led_state);
}