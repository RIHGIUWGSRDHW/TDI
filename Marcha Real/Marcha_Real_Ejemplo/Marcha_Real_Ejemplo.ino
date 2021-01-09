int piezoPin = 16;
int tones[] = {349.23, 261.63, 440, 349.23, 523.25, 493.88, 440, 392, 349.23, 349.23, 329.63, 293.66, 261.63, 349.23, 392, 440, 523.25, 493.88, 440, 392, 349.23, 523.25, 0, 349.23, 261.63, 440, 349.23, 523.25, 493.88, 440, 392, 349.23, 349.23, 329.63, 293.66, 261.63, 349.23, 392, 440, 523.25, 493.88, 440, 392, 349.23, 523.25, 523.25, 440, 523.25, 493.88, 392, 493.88, 440, 349.23, 440, 392, 261.63, 293.66, 329.63, 349.23, 392, 440, 493.88, 523.25, 493.88, 440, 392, 349.23, 0, 523.25, 440, 523.25, 493.88, 392, 493.88, 440, 349.23, 440, 392, 261.63, 293.66, 329.63, 349.23, 392, 440, 493.88, 523.25, 493.88, 440, 392, 349.23}; 
int beats[] = {4, 4, 4, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 4, 4, 6, 2, 2, 2, 2, 2, 6, 2, 4, 4, 4, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 4, 4, 6, 2, 2, 2, 2, 2, 8, 4, 3, 1, 4, 3, 1, 4, 3, 1, 2, 2, 2, 2, 4, 4, 3, 1, 2, 2, 4, 4, 4, 4, 4, 3, 1, 4, 3, 1, 4, 3, 1, 2, 2, 2, 2, 4, 4, 3, 1, 2, 2, 4, 4, 8};
int Length = 90;
int tempo = 200;

void setup() {
  pinMode(piezoPin, OUTPUT);
}

void loop() {
  for(int i=0; i<Length; i++){
    noTone(piezoPin);
    delay(35);
    if(tones[i] != 0){
      tone(piezoPin, tones[i]);
    }
    delay(tempo*beats[i]);
  }
  noTone(piezoPin);
  delay(100000000);
}
