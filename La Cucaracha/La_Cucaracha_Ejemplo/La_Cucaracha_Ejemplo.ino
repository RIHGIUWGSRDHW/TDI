int piezoPin = 8;
int tones[] = {196, 196, 196, 261.63, 329.63, 196, 196, 196, 261.63, 329.63, 261.63, 261.63, 246.94, 246.94, 220, 220, 196, 196, 196, 196, 246.94, 293.66, 196, 196, 196, 246.94, 293.66, 392, 440, 392, 349.23, 329.63, 293.66, 261.63};
int beats[] = {1, 1, 1, 2, 1, 1, 1, 1, 2, 4, 1, 1, 1, 1, 1, 1, 3, 1, 1, 1, 2, 1, 1, 1, 1, 2, 4, 1, 1, 1, 1, 1, 1, 3};
int Length = 34;
int tempo = 300;

void setup() {
  pinMode(piezoPin, OUTPUT);
}

void loop() {
  for(int i=0; i<Length; i++){
    noTone(piezoPin);
    tone(piezoPin, tones[i]);
    delay(tempo*beats[i]);
  }
  noTone(piezoPin);
  delay(2000000);
}
