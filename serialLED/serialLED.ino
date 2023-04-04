int nbFois = 0;
int state = 0;

void setup() {
  Serial.begin(9600);

  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  nbFois = Serial.parseInt() *2;

  for(int i = 0; i < nbFois; i++) {
    state = !state;
    digitalWrite(LED_BUILTIN, state);
    delay(250);
  }


}
