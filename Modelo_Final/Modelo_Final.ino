// Variable (Depende de la canción)

float tone1 = 261.63;
float tone2 = 293.66;
float tone3 = 329.63;
float tone4 = 349.23;
float tone5 = 392;
float tone6 = 440;
float tone7 = 493.88;
float tone8 = 523.25;
float tone9 = 587.33;
float tone10 = 659.26;

int rows[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 16, 7, 8, 9, 10, 100}; 
//Indica que columna toca empezar a iluminar. Si aparece un "1" los Leds de la columna 1 se irán iluminando uno detrás de otro indicando 
//así que se pulse la nota por un tiempo (currentBeat), si se ponen dos "1" seguidos, la columna 1 indicará al receptro tocar la nota el doble de tiempo (2*currentBeat). 
//Se puede generalizar diciendo lo siguiente: poner un conjunto "i" de "x" seguidas en la variable "row" indicará al receptor que debe tocar la tecla 
//debajo de la columna "x" por un tiempo igual a (currentBeat*i).
//Dejar el 100 final para que cuando se acabe la melo´dia no se enciendan más luces

int AuxiliarLed[] = {0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0}; 
//Se aumenta acorde con la lista "rows" y sirve para decir cuándo hay que encender el led auxiliar que marca si hay que dejar de pulsar una tecla para volver a pulsarla. 

int baseBeat = 1000; //baseBeat es el valor de tiempo que durará la nota más corta de toda la canción
float auxiliar_tempo = 0.5; // Ser verá lo que hace en las funciones "Check" de los leds auxiliares. Están al final del programa.

float fastMultiplier = 0.8;
float slowMultiplier = 1.2;

//No más variable 


int startButtonPin = 15;
int restartButtonPin = 53;
int fastButtonPin = 2;
int slowButtonPin = 3;
int baseButtonPin  = 4;

int buttonPin1 = 5;
int buttonPin2 = 6;
int buttonPin3 = 7;
int buttonPin4 = 8;
int buttonPin5 = 9;
int buttonPin6 = 10;
int buttonPin7 = 11;
int buttonPin8 = 12;
int buttonPin9 = 13;
int buttonPin10 = 14;

int buzzerPin = 16;

int row1_1_led = 17;
int row1_2_led = 18;
int row1_3_led = 19;
int row1_4_led = 20;
int auxiliar_1_led = 21;

int row2_1_led = 22;
int row2_2_led = 23;
int row2_3_led = 24;
int row2_4_led = 25;
int auxiliar_2_led = 26;

int row3_1_led = 27;
int row3_2_led = 28;
int row3_3_led = 29;
int row3_4_led = 30;
int auxiliar_3_led = 31;

int row4_1_led = 32;
int row4_2_led = 33;
int row4_3_led = 34;
int row4_4_led = 35;
int auxiliar_4_led = 36;

int row5_1_led = 37;
int row5_2_led = 38;
int row5_3_led = 39;
int row5_4_led = 40;
int auxiliar_5_led = 41;

int row6_1_led = 42;
int row6_2_led = 43;
int row6_3_led = 44;
int row6_4_led = 45;
int auxiliar_6_led = 46;

int row7_1_led = 47;
int row7_2_led = 48;
int row7_3_led = 49;
int row7_4_led = 50;
int auxiliar_7_led = 51;

int row8_1_led = A0;
int row8_2_led = A1;
int row8_3_led = A2;
int row8_4_led = A3;
int auxiliar_8_led = A4;

int row9_1_led = A5;
int row9_2_led = A6;
int row9_3_led = A7;
int row9_4_led = A8;
int auxiliar_9_led = A9;

int row10_1_led = A10;
int row10_2_led = A11;
int row10_3_led = A12;
int row10_4_led = A13;
int auxiliar_10_led = A14;

//5 BOTONES AUXILIARES-----------------------------------------------------------------------------------------------------------------------------------------------------------

float currentBeat = baseBeat;
int fastButton = 0;
int slowButton = 0;

//5 BOTONES AUXILIARES-----------------------------------------------------------------------------------------------------------------------------------------------------------


//TECLAS Y PIEZO-----------------------------------------------------------------------------------------------------------------------------------------------------------------
int note1 = 0;
int note2 = 0;
int note3 = 0;
int note4 = 0;
int note5 = 0;
int note6 = 0;
int note7 = 0;
int note8 = 0;
int note9 = 0;
int note10 = 0;
//TECLAS Y PIEZO-----------------------------------------------------------------------------------------------------------------------------------------------------------------


//LEDS---------------------------------------------------------------------------------------------------------------------------------------------------------------------------

int firstLedPin = 17;
int totalLeds = 40;

unsigned long MelodyTimer = millis();
int MelodyPart = 10000;
//Ahora las variables de cada fila
int row1_1 = 0;
int row1_2 = 0;
int row1_3 = 0;
int row1_4 = 0;
int row2_1 = 0;
int row2_2 = 0;
int row2_3 = 0;
int row2_4 = 0;
int row3_1 = 0;
int row3_2 = 0;
int row3_3 = 0;
int row3_4 = 0;
int row4_1 = 0;
int row4_2 = 0;
int row4_3 = 0;
int row4_4 = 0;
int row5_1 = 0;
int row5_2 = 0;
int row5_3 = 0;
int row5_4 = 0;
int row6_1 = 0;
int row6_2 = 0;
int row6_3 = 0;
int row6_4 = 0;
int row7_1 = 0;
int row7_2 = 0;
int row7_3 = 0;
int row7_4 = 0;
int row8_1 = 0;
int row8_2 = 0;
int row8_3 = 0;
int row8_4 = 0;
int row9_1 = 0;
int row9_2 = 0;
int row9_3 = 0;
int row9_4 = 0;
int row10_1 = 0;
int row10_2 = 0;
int row10_3 = 0;
int row10_4 = 0;

int auxiliar_1_1 = 0;
int auxiliar_1_2 = 0;
int auxiliar_1_3 = 0;
int auxiliar_1_4 = 0;

int auxiliar_2_1 = 0;
int auxiliar_2_2 = 0;
int auxiliar_2_3 = 0;
int auxiliar_2_4 = 0;

int auxiliar_3_1 = 0;
int auxiliar_3_2 = 0;
int auxiliar_3_3 = 0;
int auxiliar_3_4 = 0;

int auxiliar_4_1 = 0;
int auxiliar_4_2 = 0;
int auxiliar_4_3 = 0;
int auxiliar_4_4 = 0;

int auxiliar_5_1 = 0;
int auxiliar_5_2 = 0;
int auxiliar_5_3 = 0;
int auxiliar_5_4 = 0;

int auxiliar_6_1 = 0;
int auxiliar_6_2 = 0;
int auxiliar_6_3 = 0;
int auxiliar_6_4 = 0;

int auxiliar_7_1 = 0;
int auxiliar_7_2 = 0;
int auxiliar_7_3 = 0;
int auxiliar_7_4 = 0;

int auxiliar_8_1 = 0;
int auxiliar_8_2 = 0;
int auxiliar_8_3 = 0;
int auxiliar_8_4 = 0;

int auxiliar_9_1 = 0;
int auxiliar_9_2 = 0;
int auxiliar_9_3 = 0;
int auxiliar_9_4 = 0;

int auxiliar_10_1 = 0;
int auxiliar_10_2 = 0;
int auxiliar_10_3 = 0;
int auxiliar_10_4 = 0;

//Ahora los cronometros para cada LED
unsigned long row1_1_timer = 0;
unsigned long row1_2_timer = 0;
unsigned long row1_3_timer = 0;
unsigned long row1_4_timer = 0;
unsigned long auxiliar_1_1_timer = 0;
unsigned long auxiliar_1_2_timer = 0;
unsigned long auxiliar_1_3_timer = 0;
unsigned long auxiliar_1_4_timer = 0;

unsigned long row2_1_timer = 0;
unsigned long row2_2_timer = 0;
unsigned long row2_3_timer = 0;
unsigned long row2_4_timer = 0;
unsigned long auxiliar_2_1_timer = 0;
unsigned long auxiliar_2_2_timer = 0;
unsigned long auxiliar_2_3_timer = 0;
unsigned long auxiliar_2_4_timer = 0;

unsigned long row3_1_timer = 0;
unsigned long row3_2_timer = 0;
unsigned long row3_3_timer = 0;
unsigned long row3_4_timer = 0;
unsigned long auxiliar_3_1_timer = 0;
unsigned long auxiliar_3_2_timer = 0;
unsigned long auxiliar_3_3_timer = 0;
unsigned long auxiliar_3_4_timer = 0;

unsigned long row4_1_timer = 0;
unsigned long row4_2_timer = 0;
unsigned long row4_3_timer = 0;
unsigned long row4_4_timer = 0;
unsigned long auxiliar_4_1_timer = 0;
unsigned long auxiliar_4_2_timer = 0;
unsigned long auxiliar_4_3_timer = 0;
unsigned long auxiliar_4_4_timer = 0;

unsigned long row5_1_timer = 0;
unsigned long row5_2_timer = 0;
unsigned long row5_3_timer = 0;
unsigned long row5_4_timer = 0;
unsigned long auxiliar_5_1_timer = 0;
unsigned long auxiliar_5_2_timer = 0;
unsigned long auxiliar_5_3_timer = 0;
unsigned long auxiliar_5_4_timer = 0;

unsigned long row6_1_timer = 0;
unsigned long row6_2_timer = 0;
unsigned long row6_3_timer = 0;
unsigned long row6_4_timer = 0;
unsigned long auxiliar_6_1_timer = 0;
unsigned long auxiliar_6_2_timer = 0;
unsigned long auxiliar_6_3_timer = 0;
unsigned long auxiliar_6_4_timer = 0;

unsigned long row7_1_timer = 0;
unsigned long row7_2_timer = 0;
unsigned long row7_3_timer = 0;
unsigned long row7_4_timer = 0;
unsigned long auxiliar_7_1_timer = 0;
unsigned long auxiliar_7_2_timer = 0;
unsigned long auxiliar_7_3_timer = 0;
unsigned long auxiliar_7_4_timer = 0;

unsigned long row8_1_timer = 0;
unsigned long row8_2_timer = 0;
unsigned long row8_3_timer = 0;
unsigned long row8_4_timer = 0;
unsigned long auxiliar_8_1_timer = 0;
unsigned long auxiliar_8_2_timer = 0;
unsigned long auxiliar_8_3_timer = 0;
unsigned long auxiliar_8_4_timer = 0;

unsigned long row9_1_timer = 0;
unsigned long row9_2_timer = 0;
unsigned long row9_3_timer = 0;
unsigned long row9_4_timer = 0;
unsigned long auxiliar_9_1_timer = 0;
unsigned long auxiliar_9_2_timer = 0;
unsigned long auxiliar_9_3_timer = 0;
unsigned long auxiliar_9_4_timer = 0;

unsigned long row10_1_timer = 0;
unsigned long row10_2_timer = 0;
unsigned long row10_3_timer = 0;
unsigned long row10_4_timer = 0;
unsigned long auxiliar_10_1_timer = 0;
unsigned long auxiliar_10_2_timer = 0;
unsigned long auxiliar_10_3_timer = 0;
unsigned long auxiliar_10_4_timer = 0;

//LEDS---------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void setup() {
//5 BOTONES AUXILIARES-----------------------------------------------------------------------------------------------------------------------------------------------------------
  pinMode(startButtonPin, INPUT);
  pinMode(restartButtonPin, INPUT);
  pinMode(fastButtonPin, INPUT);
  pinMode(slowButtonPin, INPUT);
  pinMode(baseButtonPin, INPUT);
//5 BOTONES AUXILIARES-----------------------------------------------------------------------------------------------------------------------------------------------------------

//TECLAS Y PIEZO-----------------------------------------------------------------------------------------------------------------------------------------------------------------
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  pinMode(buttonPin4, INPUT);
  pinMode(buttonPin5, INPUT);
  pinMode(buttonPin6, INPUT);
  pinMode(buttonPin7, INPUT);
  pinMode(buttonPin8, INPUT);
  pinMode(buttonPin9, INPUT);
  pinMode(buttonPin10, INPUT);
  pinMode(buzzerPin, OUTPUT);
//TECLAS Y PIEZO-----------------------------------------------------------------------------------------------------------------------------------------------------------------

//LEDS---------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  for (int i=firstLedPin; i<=(totalLeds + firstLedPin); i++){
    pinMode(i, OUTPUT);
  }
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
  pinMode(A6, OUTPUT);
  pinMode(A7, OUTPUT);
  pinMode(A8, OUTPUT);
  pinMode(A9, OUTPUT);
  pinMode(A10, OUTPUT);
  pinMode(A11, OUTPUT);
  pinMode(A12, OUTPUT);
  pinMode(A13, OUTPUT);
  pinMode(A14, OUTPUT);
  
  unsigned long MelodyTimer = millis();
//LEDS---------------------------------------------------------------------------------------------------------------------------------------------------------------------------
}

void loop() {
//5 BOTONES AUXILIARES-----------------------------------------------------------------------------------------------------------------------------------------------------------

  if (digitalRead(startButtonPin) == HIGH){
   delay(100);
   unsigned long MelodyTimer = millis();
   MelodyPart = 0;
  }

  if (digitalRead(restartButtonPin) == HIGH){
    MelodyPart = 10000;
  }

  if (fastButton==0 and digitalRead(fastButtonPin)==HIGH){
    currentBeat = currentBeat*fastMultiplier;
    fastButton = 1;
  }  
  if (fastButton==1 and digitalRead(fastButtonPin)==LOW){
    fastButton = 0;
  }

  if (slowButton==0 and digitalRead(slowButtonPin)==HIGH){
    currentBeat = currentBeat*slowMultiplier;
    slowButton = 1;
  }  
  if (slowButton==1 and digitalRead(slowButtonPin)==LOW){
    slowButton = 0;
  }

  if (digitalRead(baseButtonPin) == HIGH){
    currentBeat = baseBeat;
  }
  
//5 BOTONES AUXILIARES-----------------------------------------------------------------------------------------------------------------------------------------------------------

//TECLAS Y PIEZO-----------------------------------------------------------------------------------------------------------------------------------------------------------------
  int button1 = digitalRead(buttonPin1);
  int button2 = digitalRead(buttonPin2);
  int button3 = digitalRead(buttonPin3);
  int button4 = digitalRead(buttonPin4);
  int button5 = digitalRead(buttonPin5);
  int button6 = digitalRead(buttonPin6);
  int button7 = digitalRead(buttonPin7);
  int button8 = digitalRead(buttonPin8);
  int button9 = digitalRead(buttonPin9);
  int button10 = digitalRead(buttonPin10);
  
  if (button1==HIGH){
    if (note1==0 and note2==0 and note3==0 and note4==0 and note5==0 and note6==0 and note7==0 and note8==0 and note9==0 and note10==0){
      tone(buzzerPin, tone1);
      note1 = 1;
    }
  }
  if (button1==LOW){
    if (note1 == 1){
      noTone(buzzerPin);
      note1 = 0;
    }
  }

  if (button2==HIGH){
    if (note1==0 and note2==0 and note3==0 and note4==0 and note5==0 and note6==0 and note7==0 and note8==0 and note9==0 and note10==0){
      tone(buzzerPin, tone2);
      note2 = 1;
    }
  }
  if (button2==LOW){
    if (note2 == 1){
      noTone(buzzerPin);
      note2 = 0;
    }
  }

  if (button3==HIGH){
    if (note1==0 and note2==0 and note3==0 and note4==0 and note5==0 and note6==0 and note7==0 and note8==0 and note9==0 and note10==0){
      tone(buzzerPin, tone3);
      note3 = 1;
    }
  }
  if (button3==LOW){
    if (note3 == 1){
      noTone(buzzerPin);
      note3 = 0;
    }
  }

  if (button4==HIGH){
    if (note1==0 and note2==0 and note3==0 and note4==0 and note5==0 and note6==0 and note7==0 and note8==0 and note9==0 and note10==0){
      tone(buzzerPin, tone4);
      note4 = 1;
    }
  }
  if (button4==LOW){
    if (note4 == 1){
      noTone(buzzerPin);
      note4 = 0;
    }
  }

  if (button5==HIGH){
    if (note1==0 and note2==0 and note3==0 and note4==0 and note5==0 and note6==0 and note7==0 and note8==0 and note9==0 and note10==0){
      tone(buzzerPin, tone5);
      note5 = 1;
    }
  }
  if (button5==LOW){
    if (note5 == 1){
      noTone(buzzerPin);
      note5 = 0;
    }
  }

  if (button6==HIGH){
    if (note1==0 and note2==0 and note3==0 and note4==0 and note5==0 and note6==0 and note7==0 and note8==0 and note9==0 and note10==0){
      tone(buzzerPin, tone6);
      note6 = 1;
    }
  }
  if (button6==LOW){
    if (note6 == 1){
      noTone(buzzerPin);
      note6 = 0;
    }
  }

  if (button7==HIGH){
    if (note1==0 and note2==0 and note3==0 and note4==0 and note5==0 and note6==0 and note7==0 and note8==0 and note9==0 and note10==0){
      tone(buzzerPin, tone7);
      note7 = 1;
    }
  }
  if (button7==LOW){
    if (note7 == 1){
      noTone(buzzerPin);
      note7 = 0;
    }
  }

  if (button8==HIGH){
    if (note1==0 and note2==0 and note3==0 and note4==0 and note5==0 and note6==0 and note7==0 and note8==0 and note9==0 and note10==0){
      tone(buzzerPin, tone8);
      note8 = 1;
    }
  }
  if (button8==LOW){
    if (note8 == 1){
      noTone(buzzerPin);
      note8 = 0;
    }
  }

  if (button9==HIGH){
    if (note1==0 and note2==0 and note3==0 and note4==0 and note5==0 and note6==0 and note7==0 and note8==0 and note9==0 and note10==0){
      tone(buzzerPin, tone9);
      note9 = 1;
    }
  }
  if (button1==LOW){
    if (note9 == 1){
      noTone(buzzerPin);
      note9 = 0;
    }
  }

  if (button10==HIGH){
    if (note1==0 and note2==0 and note3==0 and note4==0 and note5==0 and note6==0 and note7==0 and note8==0 and note9==0 and note10==0){
      tone(buzzerPin, tone10);
      note10 = 1;
    }
  }
  if (button10==LOW){
    if (note10 == 1){
      noTone(buzzerPin);
      note10 = 0;
    }
  }
//TECLAS Y PIEZO-----------------------------------------------------------------------------------------------------------------------------------------------------------------

//LEDS---------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Si el programa no funciona correctamente al subirlo a la placa un posible error puede ser el orden de las funciones Chec_Row_x_x(). En tal caso seguir las instrucciones de las dos siguientes líneas.
//Las funciones Check_Row_x_x(), por como las he hecho, tienen que ir al principio del loop, y hay que ordenarlas de tal forma que, por ejemplo, en la columna 1_x la x más grande
//tiene que ir al principio. Si hay 3 leds por cada "row" , por ejemplo, sería primero el 1_3, luego 1_2 y fin almente 1_1. Si no se hace así no funcionarán correctamente.
  Check_Row_1_4();
  Check_Row_1_3();
  Check_Row_1_2();
  Check_Row_1_1();
  Check_Auxiliar_1_1();
  Check_Auxiliar_1_2();
  Check_Auxiliar_1_3();
  Check_Auxiliar_1_4();
  
  Check_Row_2_4();
  Check_Row_2_3();
  Check_Row_2_2();
  Check_Row_2_1();
  Check_Auxiliar_2_1();
  Check_Auxiliar_2_2();
  Check_Auxiliar_2_3();
  Check_Auxiliar_2_4();

  Check_Row_3_4();
  Check_Row_3_3();
  Check_Row_3_2();
  Check_Row_3_1();
  Check_Auxiliar_3_1();
  Check_Auxiliar_3_2();
  Check_Auxiliar_3_3();
  Check_Auxiliar_3_4();

  Check_Row_4_4();
  Check_Row_4_3();
  Check_Row_4_2();
  Check_Row_4_1();
  Check_Auxiliar_4_1();
  Check_Auxiliar_4_2();
  Check_Auxiliar_4_3();
  Check_Auxiliar_4_4();

  Check_Row_5_4();
  Check_Row_5_3();
  Check_Row_5_2();
  Check_Row_5_1();
  Check_Auxiliar_5_1();
  Check_Auxiliar_5_2();
  Check_Auxiliar_5_3();
  Check_Auxiliar_5_4();

  Check_Row_6_4();
  Check_Row_6_3();
  Check_Row_6_2();
  Check_Row_6_1();
  Check_Auxiliar_6_1();
  Check_Auxiliar_6_2();
  Check_Auxiliar_6_3();
  Check_Auxiliar_6_4();

  Check_Row_7_4();
  Check_Row_7_3();
  Check_Row_7_2();
  Check_Row_7_1();
  Check_Auxiliar_7_1();
  Check_Auxiliar_7_2();
  Check_Auxiliar_7_3();
  Check_Auxiliar_7_4();

  Check_Row_8_4();
  Check_Row_8_3();
  Check_Row_8_2();
  Check_Row_8_1();
  Check_Auxiliar_8_1();
  Check_Auxiliar_8_2();
  Check_Auxiliar_8_3();
  Check_Auxiliar_8_4();

  Check_Row_9_4();
  Check_Row_9_3();
  Check_Row_9_2();
  Check_Row_9_1();
  Check_Auxiliar_9_1();
  Check_Auxiliar_9_2();
  Check_Auxiliar_9_3();
  Check_Auxiliar_9_4();

  Check_Row_10_4();
  Check_Row_10_3();
  Check_Row_10_2();
  Check_Row_10_1();
  Check_Auxiliar_10_1();
  Check_Auxiliar_10_2();
  Check_Auxiliar_10_3();
  Check_Auxiliar_10_4();

  if ((millis() - MelodyTimer) >= currentBeat){
    MelodyPart++;
    if (rows[MelodyPart] == 1){
      row1_1 = 1;
      digitalWrite(row1_1_led, HIGH);
      row1_1_timer = millis();
    }
    
    if (rows[MelodyPart] == 2){
      row2_1 = 1;
      digitalWrite(row2_1_led, HIGH);
      row2_1_timer = millis();
    }
    
    if (rows[MelodyPart] == 3){
      row3_1 = 1;
      digitalWrite(row3_1_led, HIGH);
      row3_1_timer = millis();
    }
    
    if (rows[MelodyPart] == 4){
      row4_1 = 1;
      digitalWrite(row4_1_led, HIGH);
      row4_1_timer = millis();
    }
    
    if (rows[MelodyPart] == 5){
      row5_1 = 1;
      digitalWrite(row5_1_led, HIGH);
      row5_1_timer = millis();
    }
    
    if (rows[MelodyPart] == 6){
      row6_1 = 1;
      digitalWrite(row6_1_led, HIGH);
      row6_1_timer = millis();
    }
    
    if (rows[MelodyPart] == 7){
      row7_1 = 1;
      digitalWrite(row7_1_led, HIGH);
      row7_1_timer = millis();
    }
    
    if (rows[MelodyPart] == 8){
      row8_1 = 1;
      digitalWrite(row8_1_led, HIGH);
      row8_1_timer = millis();
    }
    
    if (rows[MelodyPart] == 9){
      row9_1 = 1;
      digitalWrite(row9_1_led, HIGH);
      row9_1_timer = millis();
    }
    
    if (rows[MelodyPart] == 10){
      row10_1 = 1;
      digitalWrite(row10_1_led, HIGH);
      row10_1_timer = millis();
    }

    if (rows[MelodyPart] == 100){
      MelodyPart = 10000;
    }

    //1
    if (AuxiliarLed[MelodyPart] == 1 and auxiliar_1_4 == 0 and auxiliar_1_1 != 0 and auxiliar_1_2 != 0 and auxiliar_1_3 != 0){
      auxiliar_1_4 = 1;
      auxiliar_1_4_timer = millis();
    }
    
    if (AuxiliarLed[MelodyPart] == 1 and auxiliar_1_3 == 0 and auxiliar_1_1 != 0 and auxiliar_1_2 != 0){
      auxiliar_1_3 = 1;
      auxiliar_1_3_timer = millis();
    }
    
    if (AuxiliarLed[MelodyPart] == 1 and auxiliar_1_2 == 0 and auxiliar_1_1 != 0){
      auxiliar_1_2 = 1;
      auxiliar_1_2_timer = millis();
    }

    if (AuxiliarLed[MelodyPart] == 1 and auxiliar_1_1 == 0){
      auxiliar_1_1 = 1;
      auxiliar_1_1_timer = millis();
    }

    //2
    if (AuxiliarLed[MelodyPart] == 2 and auxiliar_2_4 == 0 and auxiliar_2_1 != 0 and auxiliar_2_2 != 0 and auxiliar_2_3 != 0){
      auxiliar_2_4 = 1;
      auxiliar_2_4_timer = millis();
    }
    
    if (AuxiliarLed[MelodyPart] == 2 and auxiliar_2_3 == 0 and auxiliar_2_1 != 0 and auxiliar_2_2 != 0){
      auxiliar_2_3 = 1;
      auxiliar_2_3_timer = millis();
    }
    
    if (AuxiliarLed[MelodyPart] == 2 and auxiliar_2_2 == 0 and auxiliar_2_1 != 0){
      auxiliar_2_2 = 1;
      auxiliar_2_2_timer = millis();
    }

    if (AuxiliarLed[MelodyPart] == 2 and auxiliar_2_1 == 0){
      auxiliar_2_1 = 1;
      auxiliar_2_1_timer = millis();
    }

    //3
    if (AuxiliarLed[MelodyPart] == 3 and auxiliar_3_4 == 0 and auxiliar_3_1 != 0 and auxiliar_3_2 != 0 and auxiliar_3_3 != 0){
      auxiliar_3_4 = 1;
      auxiliar_3_4_timer = millis();
    }

    if (AuxiliarLed[MelodyPart] == 3 and auxiliar_3_3 == 0 and auxiliar_3_1 != 0 and auxiliar_3_2 != 0){
      auxiliar_3_3 = 1;
      auxiliar_3_3_timer = millis();
    }
    
    if (AuxiliarLed[MelodyPart] == 3 and auxiliar_3_2 == 0 and auxiliar_3_1 != 0){
      auxiliar_3_2 = 1;
      auxiliar_3_2_timer = millis();
    }

    if (AuxiliarLed[MelodyPart] == 3 and auxiliar_3_1 == 0){
      auxiliar_3_1 = 1;
      auxiliar_3_1_timer = millis();
    }

    //4
    if (AuxiliarLed[MelodyPart] == 4 and auxiliar_4_4 == 0 and auxiliar_4_1 != 0 and auxiliar_4_2 != 0 and auxiliar_4_3 != 0){
      auxiliar_4_4 = 1;
      auxiliar_4_4_timer = millis();
    }

    if (AuxiliarLed[MelodyPart] == 4 and auxiliar_4_3 == 0 and auxiliar_4_1 != 0 and auxiliar_4_2 != 0){
      auxiliar_4_3 = 1;
      auxiliar_4_3_timer = millis();
    }
    
    if (AuxiliarLed[MelodyPart] == 4 and auxiliar_4_2 == 0 and auxiliar_4_1 != 0){
      auxiliar_4_2 = 1;
      auxiliar_4_2_timer = millis();
    }

    if (AuxiliarLed[MelodyPart] == 4 and auxiliar_4_1 == 0){
      auxiliar_4_1 = 1;
      auxiliar_4_1_timer = millis();
    }

    //5 
    if (AuxiliarLed[MelodyPart] == 5 and auxiliar_5_4 == 0 and auxiliar_5_1 != 0 and auxiliar_5_2 != 0 and auxiliar_5_3 != 0){
      auxiliar_5_4 = 1;
      auxiliar_5_4_timer = millis();
    }

    if (AuxiliarLed[MelodyPart] == 5 and auxiliar_5_3 == 0 and auxiliar_5_1 != 0 and auxiliar_5_2 != 0){
      auxiliar_5_3 = 1;
      auxiliar_5_3_timer = millis();
    }
    
    if (AuxiliarLed[MelodyPart] == 5 and auxiliar_5_2 == 0 and auxiliar_5_1 != 0){
      auxiliar_5_2 = 1;
      auxiliar_5_2_timer = millis();
    }

    if (AuxiliarLed[MelodyPart] == 5 and auxiliar_5_1 == 0){
      auxiliar_5_1 = 1;
      auxiliar_5_1_timer = millis();
    }

    //6
    if (AuxiliarLed[MelodyPart] == 6 and auxiliar_6_4 == 0 and auxiliar_6_1 != 0 and auxiliar_6_2 != 0 and auxiliar_6_3 != 0){
      auxiliar_6_4 = 1;
      auxiliar_6_4_timer = millis();
    }

    if (AuxiliarLed[MelodyPart] == 6 and auxiliar_6_3 == 0 and auxiliar_6_1 != 0 and auxiliar_6_2 != 0){
      auxiliar_6_3 = 1;
      auxiliar_6_3_timer = millis();
    }

    if (AuxiliarLed[MelodyPart] == 6 and auxiliar_6_2 == 0 and auxiliar_6_1 != 0){
      auxiliar_6_2 = 1;
      auxiliar_6_2_timer = millis();
    }
    
    if (AuxiliarLed[MelodyPart] == 6 and auxiliar_6_1 == 0){
      auxiliar_6_1 = 1;
      auxiliar_6_1_timer = millis();
    }

    //7
    if (AuxiliarLed[MelodyPart] == 7 and auxiliar_7_4 == 0 and auxiliar_7_1 != 0 and auxiliar_7_2 != 0 and auxiliar_7_3 != 0){
      auxiliar_7_4 = 1;
      auxiliar_7_4_timer = millis();
    }

    if (AuxiliarLed[MelodyPart] == 7 and auxiliar_7_3 == 0 and auxiliar_7_1 != 0 and auxiliar_7_2 != 0){
      auxiliar_7_3 = 1;
      auxiliar_7_3_timer = millis();
    }

    if (AuxiliarLed[MelodyPart] == 7 and auxiliar_7_2 == 0 and auxiliar_7_1 != 0){
      auxiliar_7_2 = 1;
      auxiliar_7_2_timer = millis();
    }
    
    if (AuxiliarLed[MelodyPart] == 7 and auxiliar_7_1 == 0){
      auxiliar_7_1 = 1;
      auxiliar_7_1_timer = millis();
    }

    //8
    if (AuxiliarLed[MelodyPart] == 8 and auxiliar_8_4 == 0 and auxiliar_8_1 != 0 and auxiliar_8_2 != 0 and auxiliar_8_3 != 0){
      auxiliar_8_4 = 1;
      auxiliar_8_4_timer = millis();
    }
    
    if (AuxiliarLed[MelodyPart] == 8 and auxiliar_8_3 == 0 and auxiliar_8_1 != 0 and auxiliar_8_2 != 0){
      auxiliar_8_3 = 1;
      auxiliar_8_3_timer = millis();
    }

    if (AuxiliarLed[MelodyPart] == 8 and auxiliar_8_2 == 0 and auxiliar_8_1 != 0){
      auxiliar_8_2 = 1;
      auxiliar_8_2_timer = millis();
    }
    
    if (AuxiliarLed[MelodyPart] == 8 and auxiliar_8_1 == 0){
      auxiliar_8_1 = 1;
      auxiliar_8_1_timer = millis();
    }
    
    //9
    if (AuxiliarLed[MelodyPart] == 9 and auxiliar_9_4 == 0 and auxiliar_9_1 != 0 and auxiliar_9_2 != 0 and auxiliar_9_3 != 0){
      auxiliar_9_4 = 1;
      auxiliar_9_4_timer = millis();
    }

    if (AuxiliarLed[MelodyPart] == 9 and auxiliar_9_3 == 0 and auxiliar_9_1 != 0 and auxiliar_9_2 != 0){
      auxiliar_9_3 = 1;
      auxiliar_9_3_timer = millis();
    }

    if (AuxiliarLed[MelodyPart] == 9 and auxiliar_9_2 == 0 and auxiliar_9_1 != 0){
      auxiliar_9_2 = 1;
      auxiliar_9_2_timer = millis();
    }
    
    if (AuxiliarLed[MelodyPart] == 9 and auxiliar_9_1 == 0){
      auxiliar_9_1 = 1;
      auxiliar_9_1_timer = millis();
    }

    //10
    if (AuxiliarLed[MelodyPart] == 10 and auxiliar_10_4 == 0 and auxiliar_10_1 != 0 and auxiliar_10_2 != 0 and auxiliar_10_3 != 0){
      auxiliar_10_4 = 1;
      auxiliar_10_4_timer = millis();
    }

    if (AuxiliarLed[MelodyPart] == 10 and auxiliar_10_3 == 0 and auxiliar_10_1 != 0 and auxiliar_10_2 != 0){
      auxiliar_10_3 = 1;
      auxiliar_10_3_timer = millis();
    }

    if (AuxiliarLed[MelodyPart] == 10 and auxiliar_10_2 == 0 and auxiliar_10_1 != 0){
      auxiliar_10_2 = 1;
      auxiliar_10_2_timer = millis();
    }
    
    if (AuxiliarLed[MelodyPart] == 10 and auxiliar_10_1 == 0){
      auxiliar_10_1 = 1;
      auxiliar_10_1_timer = millis();
    }
        
    MelodyTimer = millis();
  }
  delay(2); //Introduciendo un delay de mínimo 2 ms, funciona el programa sin poner los "Serial.print()"
//LEDS---------------------------------------------------------------------------------------------------------------------------------------------------------------------------
}

//5 BOTONES AUXILIARES-----------------------------------------------------------------------------------------------------------------------------------------------------------


//5 BOTONES AUXILIARES-----------------------------------------------------------------------------------------------------------------------------------------------------------

//LEDS---------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//El objetivo de las siguientes funcions Check_Row_x_x() es que cuando llegue el momento el led x_x se apague y encienda el led x_x+1. Si el led x_x es el último de su "row" se apagará sin más.
void Check_Row_1_1(){
  if(row1_1 == 1){                                       //Se comprueba si este led está funcionando
    if((millis() - row1_1_timer) >= currentBeat){           //Se comprueba si lleva funcionand el tiempo que toca
      row1_1 = 0;                                        //Se indica que el led ya no está funcionando
      digitalWrite(row1_1_led, LOW);                     //Se apaga el led
      row1_2 = 1;                                        //Se indica que se enciende el siguiente
      digitalWrite(row1_2_led, HIGH);                    //Se enciende el siguiente
      row1_2_timer = millis();                           //Se prepara el tiempo del siguiente
    }
  }
}

void Check_Row_1_2(){
  if(row1_2 == 1){
    if((millis() - row1_2_timer) >= currentBeat){
      row1_2 = 0;
      digitalWrite(row1_2_led, LOW);
      row1_3 = 1;
      digitalWrite(row1_3_led, HIGH);
      row1_3_timer = millis();
    }
  }
}

void Check_Row_1_3(){
  if(row1_3 == 1){
    if((millis() - row1_3_timer) >= currentBeat){
      row1_3 = 0;
      digitalWrite(row1_3_led, LOW);
      row1_4 = 1;
      digitalWrite(row1_4_led, HIGH);
      row1_4_timer = millis();
    }
  }
}

void Check_Row_1_4(){
  if(row1_4 == 1){
    if((millis() - row1_4_timer) >= currentBeat){
      row1_4 = 0;
      digitalWrite(row1_4_led, LOW);
    }
  }
}

void Check_Row_2_1(){
  if(row2_1 == 1){
    if((millis() - row2_1_timer) >= currentBeat){
      row2_1 = 0;
      digitalWrite(row2_1_led, LOW);
      row2_2 = 1;
      digitalWrite(row2_2_led, HIGH);
      row2_2_timer = millis();
    }
  }
}

void Check_Row_2_2(){
  if(row2_2 == 1){
    if((millis() - row2_2_timer) >= currentBeat){
      row2_2 = 0;
      digitalWrite(row2_2_led, LOW);
      row2_3 = 1;
      digitalWrite(row2_3_led, HIGH);
      row2_3_timer = millis();
    }
  }
}

void Check_Row_2_3(){
  if(row2_3 == 1){
    if((millis() - row2_3_timer) >= currentBeat){
      row2_3 = 0;
      digitalWrite(row2_3_led, LOW);
      row2_4 = 1;
      digitalWrite(row2_4_led, HIGH);
      row2_4_timer = millis();
    }
  }
}

void Check_Row_2_4(){
  if(row2_4 == 1){
    if((millis() - row2_4_timer) >= currentBeat){
      row2_4 = 0;
      digitalWrite(row2_4_led, LOW);
    }
  } 
}

void Check_Row_3_1(){
  if(row3_1 == 1){
    if((millis() - row3_1_timer) >= currentBeat){
      row3_1 = 0;
      digitalWrite(row3_1_led, LOW);
      row3_2 = 1;
      digitalWrite(row3_2_led, HIGH);
      row3_2_timer = millis();
    }
  }
}

void Check_Row_3_2(){
  if(row3_2 == 1){
    if((millis() - row3_2_timer) >= currentBeat){
      row3_2 = 0;
      digitalWrite(row3_2_led, LOW);
      row3_3 = 1;
      digitalWrite(row3_3_led, HIGH);
      row3_3_timer = millis();
    }
  }
}

void Check_Row_3_3(){
  if(row3_3 == 1){
    if((millis() - row3_3_timer) >= currentBeat){
      row3_3 = 0;
      digitalWrite(row3_3_led, LOW);
      row3_4 = 1;
      digitalWrite(row3_4_led, HIGH);
      row3_4_timer = millis();
    }
  }
}

void Check_Row_3_4(){
  if(row3_4 == 1){
    if((millis() - row3_4_timer) >= currentBeat){
      row3_4 = 0;
      digitalWrite(row3_4_led, LOW);
    }
  } 
}

void Check_Row_4_1(){
  if(row4_1 == 1){
    if((millis() - row4_1_timer) >= currentBeat){
      row4_1 = 0;
      digitalWrite(row4_1_led, LOW);
      row4_2 = 1;
      digitalWrite(row4_2_led, HIGH);
      row4_2_timer = millis();
    }
  }
}

void Check_Row_4_2(){
  if(row4_2 == 1){
    if((millis() - row4_2_timer) >= currentBeat){
      row4_2 = 0;
      digitalWrite(row4_2_led, LOW);
      row4_3 = 1;
      digitalWrite(row4_3_led, HIGH);
      row4_3_timer = millis();
    }
  }
}

void Check_Row_4_3(){
  if(row4_3 == 1){
    if((millis() - row4_3_timer) >= currentBeat){
      row4_3 = 0;
      digitalWrite(row4_3_led, LOW);
      row4_4 = 1;
      digitalWrite(row4_4_led, HIGH);
      row4_4_timer = millis();
    }
  }
}

void Check_Row_4_4(){
  if(row4_4 == 1){
    if((millis() - row4_4_timer) >= currentBeat){
      row4_4 = 0;
      digitalWrite(row4_4_led, LOW);
    }
  } 
}

void Check_Row_5_1(){
  if(row5_1 == 1){
    if((millis() - row5_1_timer) >= currentBeat){
      row5_1 = 0;
      digitalWrite(row5_1_led, LOW);
      row5_2 = 1;
      digitalWrite(row5_2_led, HIGH);
      row5_2_timer = millis();
    }
  }
}

void Check_Row_5_2(){
  if(row5_2 == 1){
    if((millis() - row5_2_timer) >= currentBeat){
      row5_2 = 0;
      digitalWrite(row5_2_led, LOW);
      row5_3 = 1;
      digitalWrite(row5_3_led, HIGH);
      row5_3_timer = millis();
    }
  }
}

void Check_Row_5_3(){
  if(row5_3 == 1){
    if((millis() - row5_3_timer) >= currentBeat){
      row5_3 = 0;
      digitalWrite(row5_3_led, LOW);
      row5_4 = 1;
      digitalWrite(row5_4_led, HIGH);
      row5_4_timer = millis();
    }
  }
}

void Check_Row_5_4(){
  if(row5_4 == 1){
    if((millis() - row5_4_timer) >= currentBeat){
      row5_4 = 0;
      digitalWrite(row5_4_led, LOW);
    }
  } 
}

void Check_Row_6_1(){
  if(row6_1 == 1){
    if((millis() - row6_1_timer) >= currentBeat){
      row6_1 = 0;
      digitalWrite(row6_1_led, LOW);
      row6_2 = 1;
      digitalWrite(row6_2_led, HIGH);
      row6_2_timer = millis();
    }
  }
}

void Check_Row_6_2(){
  if(row6_2 == 1){
    if((millis() - row6_2_timer) >= currentBeat){
      row6_2 = 0;
      digitalWrite(row6_2_led, LOW);
      row6_3 = 1;
      digitalWrite(row6_3_led, HIGH);
      row6_3_timer = millis();
    }
  }
}

void Check_Row_6_3(){
  if(row6_3 == 1){
    if((millis() - row6_3_timer) >= currentBeat){
      row6_3 = 0;
      digitalWrite(row6_3_led, LOW);
      row6_4 = 1;
      digitalWrite(row6_4_led, HIGH);
      row6_4_timer = millis();
    }
  }
}

void Check_Row_6_4(){
  if(row6_4 == 1){
    if((millis() - row6_4_timer) >= currentBeat){
      row6_4 = 0;
      digitalWrite(row6_4_led, LOW);
    }
  } 
}

void Check_Row_7_1(){
  if(row7_1 == 1){
    if((millis() - row7_1_timer) >= currentBeat){
      row7_1 = 0;
      digitalWrite(row7_1_led, LOW);
      row7_2 = 1;
      digitalWrite(row7_2_led, HIGH);
      row7_2_timer = millis();
    }
  }
}

void Check_Row_7_2(){
  if(row7_2 == 1){
    if((millis() - row7_2_timer) >= currentBeat){
      row7_2 = 0;
      digitalWrite(row7_2_led, LOW);
      row7_3 = 1;
      digitalWrite(row7_3_led, HIGH);
      row7_3_timer = millis();
    }
  }
}

void Check_Row_7_3(){
  if(row7_3 == 1){
    if((millis() - row7_3_timer) >= currentBeat){
      row7_3 = 0;
      digitalWrite(row7_3_led, LOW);
      row7_4 = 1;
      digitalWrite(row7_4_led, HIGH);
      row7_4_timer = millis();
    }
  }
}

void Check_Row_7_4(){
  if(row7_4 == 1){
    if((millis() - row7_4_timer) >= currentBeat){
      row7_4 = 0;
      digitalWrite(row7_4_led, LOW);
    }
  } 
}

void Check_Row_8_1(){
  if(row8_1 == 1){
    if((millis() - row8_1_timer) >= currentBeat){
      row8_1 = 0;
      digitalWrite(row8_1_led, LOW);
      row8_2 = 1;
      digitalWrite(row8_2_led, HIGH);
      row8_2_timer = millis();
    }
  }
}

void Check_Row_8_2(){
  if(row8_2 == 1){
    if((millis() - row8_2_timer) >= currentBeat){
      row8_2 = 0;
      digitalWrite(row8_2_led, LOW);
      row8_3 = 1;
      digitalWrite(row8_3_led, HIGH);
      row8_3_timer = millis();
    }
  }
}

void Check_Row_8_3(){
  if(row8_3 == 1){
    if((millis() - row8_3_timer) >= currentBeat){
      row8_3 = 0;
      digitalWrite(row8_3_led, LOW);
      row8_4 = 1;
      digitalWrite(row8_4_led, HIGH);
      row8_4_timer = millis();
    }
  }
}

void Check_Row_8_4(){
  if(row8_4 == 1){
    if((millis() - row8_4_timer) >= currentBeat){
      row8_4 = 0;
      digitalWrite(row8_4_led, LOW);
    }
  } 
}

void Check_Row_9_1(){
  if(row9_1 == 1){
    if((millis() - row9_1_timer) >= currentBeat){
      row9_1 = 0;
      digitalWrite(row9_1_led, LOW);
      row9_2 = 1;
      digitalWrite(row9_2_led, HIGH);
      row9_2_timer = millis();
    }
  }
}

void Check_Row_9_2(){
  if(row9_2 == 1){
    if((millis() - row9_2_timer) >= currentBeat){
      row9_2 = 0;
      digitalWrite(row9_2_led, LOW);
      row9_3 = 1;
      digitalWrite(row9_3_led, HIGH);
      row9_3_timer = millis();
    }
  }
}

void Check_Row_9_3(){
  if(row9_3 == 1){
    if((millis() - row9_3_timer) >= currentBeat){
      row9_3 = 0;
      digitalWrite(row9_3_led, LOW);
      row9_4 = 1;
      digitalWrite(row9_4_led, HIGH);
      row9_4_timer = millis();
    }
  }
}

void Check_Row_9_4(){
  if(row9_4 == 1){
    if((millis() - row9_4_timer) >= currentBeat){
      row9_4 = 0;
      digitalWrite(row9_4_led, LOW);
    }
  } 
}

void Check_Row_10_1(){
  if(row10_1 == 1){
    if((millis() - row10_1_timer) >= currentBeat){
      row10_1 = 0;
      digitalWrite(row10_1_led, LOW);
      row10_2 = 1;
      digitalWrite(row10_2_led, HIGH);
      row10_2_timer = millis();
    }
  }
}

void Check_Row_10_2(){
  if(row10_2 == 1){
    if((millis() - row10_2_timer) >= currentBeat){
      row10_2 = 0;
      digitalWrite(row10_2_led, LOW);
      row10_3 = 1;
      digitalWrite(row10_3_led, HIGH);
      row10_3_timer = millis();
    }
  }
}

void Check_Row_10_3(){
  if(row10_3 == 1){
    if((millis() - row10_3_timer) >= currentBeat){
      row10_3 = 0;
      digitalWrite(row10_3_led, LOW);
      row10_4 = 1;
      digitalWrite(row10_4_led, HIGH);
      row10_4_timer = millis();
    }
  }
}

void Check_Row_10_4(){
  if(row10_4 == 1){
    if((millis() - row10_4_timer) >= currentBeat){
      row10_4 = 0;
      digitalWrite(row10_4_led, LOW);
    }
  } 
}

//---Auxiliar--------------------------------------------------------------------------------------------------------------

//1
void Check_Auxiliar_1_1(){
  if(auxiliar_1_1 == 1){
    if((millis() - auxiliar_1_1_timer) >= ((3*currentBeat)+ (currentBeat*auxiliar_tempo))){ //Si se quiere que el led auxiliar se encienda en mitad de la nota que hay que dejar de pulsar, se debe
      //aumentar la variable "auxiliar_tempo". Por ejemplo si está se pone a 0,5, se encenderá a mitad de la nota. Si se pone a 0,25 a un cuarto de la nota. Y así proporcionalmente.
      digitalWrite(auxiliar_1_led, HIGH);
      auxiliar_1_1 = 2;
      auxiliar_1_1_timer = millis();
    }
  }
  if(auxiliar_1_1 == 2){
    if((millis() - auxiliar_1_1_timer) >= (currentBeat-(currentBeat*auxiliar_tempo))){  //Se encarga de comprobar si ya toca apagar el led auxiliar. Se apaga siempre al comienzo de la proxima nota. Justo
                                                                                        //cuando hay que dejar de pulsar la tecla para volver a pulsarla
      digitalWrite(auxiliar_1_led, LOW);
      auxiliar_1_1 = 0;
    }
  }
}
void Check_Auxiliar_1_2(){
  if(auxiliar_1_2 == 1){
    if((millis() - auxiliar_1_2_timer) >= ((3*currentBeat)+ (currentBeat*auxiliar_tempo))){ 
      digitalWrite(auxiliar_1_led, HIGH);
      auxiliar_1_2 = 2;
      auxiliar_1_2_timer = millis();
    }
  }
  if(auxiliar_1_2 == 2){
    if((millis() - auxiliar_1_2_timer) >= (currentBeat-(currentBeat*auxiliar_tempo))){
      digitalWrite(auxiliar_1_led, LOW);
      auxiliar_1_2 = 0;
    }
  }
}
void Check_Auxiliar_1_3(){
  if(auxiliar_1_3 == 1){
    if((millis() - auxiliar_1_3_timer) >= ((3*currentBeat)+ (currentBeat*auxiliar_tempo))){ 
      digitalWrite(auxiliar_1_led, HIGH);
      auxiliar_1_3 = 2;
      auxiliar_1_3_timer = millis();
    }
  }
  if(auxiliar_1_3 == 2){
    if((millis() - auxiliar_1_3_timer) >= (currentBeat-(currentBeat*auxiliar_tempo))){
      digitalWrite(auxiliar_1_led, LOW);
      auxiliar_1_3 = 0;
    }
  }
}
void Check_Auxiliar_1_4(){
  if(auxiliar_1_4 == 1){
    if((millis() - auxiliar_1_4_timer) >= ((3*currentBeat)+ (currentBeat*auxiliar_tempo))){ 
      digitalWrite(auxiliar_1_led, HIGH);
      auxiliar_1_4 = 2;
      auxiliar_1_4_timer = millis();
    }
  }
  if(auxiliar_1_4 == 2){
    if((millis() - auxiliar_1_4_timer) >= (currentBeat-(currentBeat*auxiliar_tempo))){
      digitalWrite(auxiliar_1_led, LOW);
      auxiliar_1_4 = 0;
    }
  }
}

//2
void Check_Auxiliar_2_1(){
  if(auxiliar_2_1 == 1){
    if((millis() - auxiliar_2_1_timer) >= ((3*currentBeat)+ (currentBeat*auxiliar_tempo))){ 
      digitalWrite(auxiliar_2_led, HIGH);
      auxiliar_2_1 = 2;
      auxiliar_2_1_timer = millis();
    }
  }
  if(auxiliar_2_1 == 2){
    if((millis() - auxiliar_2_1_timer) >= (currentBeat-(currentBeat*auxiliar_tempo))){
      digitalWrite(auxiliar_2_led, LOW);
      auxiliar_2_1 = 0;
    }
  }
}
void Check_Auxiliar_2_2(){
  if(auxiliar_2_2 == 1){
    if((millis() - auxiliar_2_2_timer) >= ((3*currentBeat)+ (currentBeat*auxiliar_tempo))){ 
      digitalWrite(auxiliar_2_led, HIGH);
      auxiliar_2_2 = 2;
      auxiliar_2_2_timer = millis();
    }
  }
  if(auxiliar_2_2 == 2){
    if((millis() - auxiliar_2_2_timer) >= (currentBeat-(currentBeat*auxiliar_tempo))){
      digitalWrite(auxiliar_2_led, LOW);
      auxiliar_2_2 = 0;
    }
  }
}
void Check_Auxiliar_2_3(){
  if(auxiliar_2_3 == 1){
    if((millis() - auxiliar_2_3_timer) >= ((3*currentBeat)+ (currentBeat*auxiliar_tempo))){ 
      digitalWrite(auxiliar_2_led, HIGH);
      auxiliar_2_3 = 2;
      auxiliar_2_3_timer = millis();
    }
  }
  if(auxiliar_2_3 == 2){
    if((millis() - auxiliar_2_3_timer) >= (currentBeat-(currentBeat*auxiliar_tempo))){
      digitalWrite(auxiliar_2_led, LOW);
      auxiliar_2_3 = 0;
    }
  }
}
void Check_Auxiliar_2_4(){
  if(auxiliar_2_4 == 1){
    if((millis() - auxiliar_2_4_timer) >= ((3*currentBeat)+ (currentBeat*auxiliar_tempo))){ 
      digitalWrite(auxiliar_2_led, HIGH);
      auxiliar_2_4 = 2;
      auxiliar_2_4_timer = millis();
    }
  }
  if(auxiliar_2_4 == 2){
    if((millis() - auxiliar_2_4_timer) >= (currentBeat-(currentBeat*auxiliar_tempo))){
      digitalWrite(auxiliar_2_led, LOW);
      auxiliar_2_4 = 0;
    }
  }
}

//3
void Check_Auxiliar_3_1(){
  if(auxiliar_3_1 == 1){
    if((millis() - auxiliar_3_1_timer) >= ((3*currentBeat)+ (currentBeat*auxiliar_tempo))){ 
      digitalWrite(auxiliar_3_led, HIGH);
      auxiliar_3_1 = 2;
      auxiliar_3_1_timer = millis();
    }
  }
  if(auxiliar_3_1 == 2){
    if((millis() - auxiliar_3_1_timer) >= (currentBeat-(currentBeat*auxiliar_tempo))){
      digitalWrite(auxiliar_3_led, LOW);
      auxiliar_3_1 = 0;
    }
  }
}
void Check_Auxiliar_3_2(){
  if(auxiliar_3_2 == 1){
    if((millis() - auxiliar_3_2_timer) >= ((3*currentBeat)+ (currentBeat*auxiliar_tempo))){ 
      digitalWrite(auxiliar_3_led, HIGH);
      auxiliar_3_2 = 2;
      auxiliar_3_2_timer = millis();
    }
  }
  if(auxiliar_3_2 == 2){
    if((millis() - auxiliar_3_2_timer) >= (currentBeat-(currentBeat*auxiliar_tempo))){
      digitalWrite(auxiliar_3_led, LOW);
      auxiliar_3_2 = 0;
    }
  }
}
void Check_Auxiliar_3_3(){
  if(auxiliar_3_3 == 1){
    if((millis() - auxiliar_3_3_timer) >= ((3*currentBeat)+ (currentBeat*auxiliar_tempo))){ 
      digitalWrite(auxiliar_3_led, HIGH);
      auxiliar_3_3 = 2;
      auxiliar_3_3_timer = millis();
    }
  }
  if(auxiliar_3_3 == 2){
    if((millis() - auxiliar_3_3_timer) >= (currentBeat-(currentBeat*auxiliar_tempo))){
      digitalWrite(auxiliar_3_led, LOW);
      auxiliar_3_3 = 0;
    }
  }
}
void Check_Auxiliar_3_4(){
  if(auxiliar_3_4 == 1){
    if((millis() - auxiliar_3_4_timer) >= ((3*currentBeat)+ (currentBeat*auxiliar_tempo))){ 
      digitalWrite(auxiliar_3_led, HIGH);
      auxiliar_3_4 = 2;
      auxiliar_3_4_timer = millis();
    }
  }
  if(auxiliar_3_4 == 2){
    if((millis() - auxiliar_3_4_timer) >= (currentBeat-(currentBeat*auxiliar_tempo))){
      digitalWrite(auxiliar_3_led, LOW);
      auxiliar_3_4 = 0;
    }
  }
}

//4
void Check_Auxiliar_4_1(){
  if(auxiliar_4_1 == 1){
    if((millis() - auxiliar_4_1_timer) >= ((3*currentBeat)+ (currentBeat*auxiliar_tempo))){ 
      digitalWrite(auxiliar_4_led, HIGH);
      auxiliar_4_1 = 2;
      auxiliar_4_1_timer = millis();
    }
  }
  if(auxiliar_4_1 == 2){
    if((millis() - auxiliar_4_1_timer) >= (currentBeat-(currentBeat*auxiliar_tempo))){
      digitalWrite(auxiliar_4_led, LOW);
      auxiliar_4_1 = 0;
    }
  }
}
void Check_Auxiliar_4_2(){
  if(auxiliar_4_2 == 1){
    if((millis() - auxiliar_4_2_timer) >= ((3*currentBeat)+ (currentBeat*auxiliar_tempo))){ 
      digitalWrite(auxiliar_4_led, HIGH);
      auxiliar_4_2 = 2;
      auxiliar_4_2_timer = millis();
    }
  }
  if(auxiliar_4_2 == 2){
    if((millis() - auxiliar_4_2_timer) >= (currentBeat-(currentBeat*auxiliar_tempo))){
      digitalWrite(auxiliar_4_led, LOW);
      auxiliar_4_2 = 0;
    }
  }
}
void Check_Auxiliar_4_3(){
  if(auxiliar_4_3 == 1){
    if((millis() - auxiliar_4_3_timer) >= ((3*currentBeat)+ (currentBeat*auxiliar_tempo))){ 
      digitalWrite(auxiliar_4_led, HIGH);
      auxiliar_4_3 = 2;
      auxiliar_4_3_timer = millis();
    }
  }
  if(auxiliar_4_3 == 2){
    if((millis() - auxiliar_4_3_timer) >= (currentBeat-(currentBeat*auxiliar_tempo))){
      digitalWrite(auxiliar_4_led, LOW);
      auxiliar_4_3 = 0;
    }
  }
}
void Check_Auxiliar_4_4(){
  if(auxiliar_4_4 == 1){
    if((millis() - auxiliar_4_4_timer) >= ((3*currentBeat)+ (currentBeat*auxiliar_tempo))){ 
      digitalWrite(auxiliar_4_led, HIGH);
      auxiliar_4_4 = 2;
      auxiliar_4_4_timer = millis();
    }
  }
  if(auxiliar_4_4 == 2){
    if((millis() - auxiliar_4_4_timer) >= (currentBeat-(currentBeat*auxiliar_tempo))){
      digitalWrite(auxiliar_4_led, LOW);
      auxiliar_4_4 = 0;
    }
  }
}

//5
void Check_Auxiliar_5_1(){
  if(auxiliar_5_1 == 1){
    if((millis() - auxiliar_5_1_timer) >= ((3*currentBeat)+ (currentBeat*auxiliar_tempo))){ 
      digitalWrite(auxiliar_5_led, HIGH);
      auxiliar_5_1 = 2;
      auxiliar_5_1_timer = millis();
    }
  }
  if(auxiliar_5_1 == 2){
    if((millis() - auxiliar_5_1_timer) >= (currentBeat-(currentBeat*auxiliar_tempo))){
      digitalWrite(auxiliar_5_led, LOW);
      auxiliar_5_1 = 0;
    }
  }
}
void Check_Auxiliar_5_2(){
  if(auxiliar_5_2 == 1){
    if((millis() - auxiliar_5_2_timer) >= ((3*currentBeat)+ (currentBeat*auxiliar_tempo))){ 
      digitalWrite(auxiliar_5_led, HIGH);
      auxiliar_5_2 = 2;
      auxiliar_5_2_timer = millis();
    }
  }
  if(auxiliar_5_2 == 2){
    if((millis() - auxiliar_5_2_timer) >= (currentBeat-(currentBeat*auxiliar_tempo))){
      digitalWrite(auxiliar_5_led, LOW);
      auxiliar_5_2 = 0;
    }
  }
}
void Check_Auxiliar_5_3(){
  if(auxiliar_5_3 == 1){
    if((millis() - auxiliar_5_3_timer) >= ((3*currentBeat)+ (currentBeat*auxiliar_tempo))){ 
      digitalWrite(auxiliar_5_led, HIGH);
      auxiliar_5_3 = 2;
      auxiliar_5_3_timer = millis();
    }
  }
  if(auxiliar_5_3 == 2){
    if((millis() - auxiliar_5_3_timer) >= (currentBeat-(currentBeat*auxiliar_tempo))){
      digitalWrite(auxiliar_5_led, LOW);
      auxiliar_5_3 = 0;
    }
  }
}
void Check_Auxiliar_5_4(){
  if(auxiliar_5_4 == 1){
    if((millis() - auxiliar_5_4_timer) >= ((3*currentBeat)+ (currentBeat*auxiliar_tempo))){ 
      digitalWrite(auxiliar_5_led, HIGH);
      auxiliar_5_4 = 2;
      auxiliar_5_4_timer = millis();
    }
  }
  if(auxiliar_5_4 == 2){
    if((millis() - auxiliar_5_4_timer) >= (currentBeat-(currentBeat*auxiliar_tempo))){
      digitalWrite(auxiliar_5_led, LOW);
      auxiliar_5_4 = 0;
    }
  }
}

//6
void Check_Auxiliar_6_1(){
  if(auxiliar_6_1 == 1){
    if((millis() - auxiliar_6_1_timer) >= ((3*currentBeat)+ (currentBeat*auxiliar_tempo))){ 
      digitalWrite(auxiliar_6_led, HIGH);
      auxiliar_6_1 = 2;
      auxiliar_6_1_timer = millis();
    }
  }
  if(auxiliar_6_1 == 2){
    if((millis() - auxiliar_6_1_timer) >= (currentBeat-(currentBeat*auxiliar_tempo))){
      digitalWrite(auxiliar_6_led, LOW);
      auxiliar_6_1 = 0;
    }
  }
}
void Check_Auxiliar_6_2(){
  if(auxiliar_6_2 == 1){
    if((millis() - auxiliar_6_2_timer) >= ((3*currentBeat)+ (currentBeat*auxiliar_tempo))){ 
      digitalWrite(auxiliar_6_led, HIGH);
      auxiliar_6_2 = 2;
      auxiliar_6_2_timer = millis();
    }
  }
  if(auxiliar_6_2 == 2){
    if((millis() - auxiliar_6_2_timer) >= (currentBeat-(currentBeat*auxiliar_tempo))){
      digitalWrite(auxiliar_6_led, LOW);
      auxiliar_6_2 = 0;
    }
  }
}
void Check_Auxiliar_6_3(){
  if(auxiliar_6_3 == 1){
    if((millis() - auxiliar_6_3_timer) >= ((3*currentBeat)+ (currentBeat*auxiliar_tempo))){ 
      digitalWrite(auxiliar_6_led, HIGH);
      auxiliar_6_3 = 2;
      auxiliar_6_3_timer = millis();
    }
  }
  if(auxiliar_6_3 == 2){
    if((millis() - auxiliar_6_3_timer) >= (currentBeat-(currentBeat*auxiliar_tempo))){
      digitalWrite(auxiliar_6_led, LOW);
      auxiliar_6_3 = 0;
    }
  }
}
void Check_Auxiliar_6_4(){
  if(auxiliar_6_4 == 1){
    if((millis() - auxiliar_6_4_timer) >= ((3*currentBeat)+ (currentBeat*auxiliar_tempo))){ 
      digitalWrite(auxiliar_6_led, HIGH);
      auxiliar_6_4 = 2;
      auxiliar_6_4_timer = millis();
    }
  }
  if(auxiliar_6_4 == 2){
    if((millis() - auxiliar_6_4_timer) >= (currentBeat-(currentBeat*auxiliar_tempo))){
      digitalWrite(auxiliar_6_led, LOW);
      auxiliar_6_4 = 0;
    }
  }
}

//7
void Check_Auxiliar_7_1(){
  if(auxiliar_7_1 == 1){
    if((millis() - auxiliar_7_1_timer) >= ((3*currentBeat)+ (currentBeat*auxiliar_tempo))){ 
      digitalWrite(auxiliar_7_led, HIGH);
      auxiliar_7_1 = 2;
      auxiliar_7_1_timer = millis();
    }
  }
  if(auxiliar_7_1 == 2){
    if((millis() - auxiliar_7_1_timer) >= (currentBeat-(currentBeat*auxiliar_tempo))){
      digitalWrite(auxiliar_7_led, LOW);
      auxiliar_7_1 = 0;
    }
  }
}
void Check_Auxiliar_7_2(){
  if(auxiliar_7_2 == 1){
    if((millis() - auxiliar_7_2_timer) >= ((3*currentBeat)+ (currentBeat*auxiliar_tempo))){ 
      digitalWrite(auxiliar_7_led, HIGH);
      auxiliar_7_2 = 2;
      auxiliar_7_2_timer = millis();
    }
  }
  if(auxiliar_7_2 == 2){
    if((millis() - auxiliar_7_2_timer) >= (currentBeat-(currentBeat*auxiliar_tempo))){
      digitalWrite(auxiliar_7_led, LOW);
      auxiliar_7_2 = 0;
    }
  }
}
void Check_Auxiliar_7_3(){
  if(auxiliar_7_3 == 1){
    if((millis() - auxiliar_7_3_timer) >= ((3*currentBeat)+ (currentBeat*auxiliar_tempo))){ 
      digitalWrite(auxiliar_7_led, HIGH);
      auxiliar_7_3 = 2;
      auxiliar_7_3_timer = millis();
    }
  }
  if(auxiliar_7_3 == 2){
    if((millis() - auxiliar_7_3_timer) >= (currentBeat-(currentBeat*auxiliar_tempo))){
      digitalWrite(auxiliar_7_led, LOW);
      auxiliar_7_3 = 0;
    }
  }
}
void Check_Auxiliar_7_4(){
  if(auxiliar_7_4 == 1){
    if((millis() - auxiliar_7_4_timer) >= ((3*currentBeat)+ (currentBeat*auxiliar_tempo))){ 
      digitalWrite(auxiliar_7_led, HIGH);
      auxiliar_7_4 = 2;
      auxiliar_7_4_timer = millis();
    }
  }
  if(auxiliar_7_4 == 2){
    if((millis() - auxiliar_7_4_timer) >= (currentBeat-(currentBeat*auxiliar_tempo))){
      digitalWrite(auxiliar_7_led, LOW);
      auxiliar_7_4 = 0;
    }
  }
}

//8
void Check_Auxiliar_8_1(){
  if(auxiliar_8_1 == 1){
    if((millis() - auxiliar_8_1_timer) >= ((3*currentBeat)+ (currentBeat*auxiliar_tempo))){ 
      digitalWrite(auxiliar_8_led, HIGH);
      auxiliar_8_1 = 2;
      auxiliar_8_1_timer = millis();
    }
  }
  if(auxiliar_8_1 == 2){
    if((millis() - auxiliar_8_1_timer) >= (currentBeat-(currentBeat*auxiliar_tempo))){
      digitalWrite(auxiliar_8_led, LOW);
      auxiliar_8_1 = 0;
    }
  }
}
void Check_Auxiliar_8_2(){
  if(auxiliar_8_2 == 1){
    if((millis() - auxiliar_8_2_timer) >= ((3*currentBeat)+ (currentBeat*auxiliar_tempo))){ 
      digitalWrite(auxiliar_8_led, HIGH);
      auxiliar_8_2 = 2;
      auxiliar_8_2_timer = millis();
    }
  }
  if(auxiliar_8_2 == 2){
    if((millis() - auxiliar_8_2_timer) >= (currentBeat-(currentBeat*auxiliar_tempo))){
      digitalWrite(auxiliar_8_led, LOW);
      auxiliar_8_2 = 0;
    }
  }
}
void Check_Auxiliar_8_3(){
  if(auxiliar_8_3 == 1){
    if((millis() - auxiliar_8_3_timer) >= ((3*currentBeat)+ (currentBeat*auxiliar_tempo))){ 
      digitalWrite(auxiliar_8_led, HIGH);
      auxiliar_8_3 = 2;
      auxiliar_8_3_timer = millis();
    }
  }
  if(auxiliar_8_3 == 2){
    if((millis() - auxiliar_8_3_timer) >= (currentBeat-(currentBeat*auxiliar_tempo))){
      digitalWrite(auxiliar_8_led, LOW);
      auxiliar_8_3 = 0;
    }
  }
}
void Check_Auxiliar_8_4(){
  if(auxiliar_8_4 == 1){
    if((millis() - auxiliar_8_4_timer) >= ((3*currentBeat)+ (currentBeat*auxiliar_tempo))){ 
      digitalWrite(auxiliar_8_led, HIGH);
      auxiliar_8_4 = 2;
      auxiliar_8_4_timer = millis();
    }
  }
  if(auxiliar_8_4 == 2){
    if((millis() - auxiliar_8_4_timer) >= (currentBeat-(currentBeat*auxiliar_tempo))){
      digitalWrite(auxiliar_8_led, LOW);
      auxiliar_8_4 = 0;
    }
  }
}

//9
void Check_Auxiliar_9_1(){
  if(auxiliar_9_1 == 1){
    if((millis() - auxiliar_9_1_timer) >= ((3*currentBeat)+ (currentBeat*auxiliar_tempo))){ 
      digitalWrite(auxiliar_9_led, HIGH);
      auxiliar_9_1 = 2;
      auxiliar_9_1_timer = millis();
    }
  }
  if(auxiliar_9_1 == 2){
    if((millis() - auxiliar_9_1_timer) >= (currentBeat-(currentBeat*auxiliar_tempo))){
      digitalWrite(auxiliar_9_led, LOW);
      auxiliar_9_1 = 0;
    }
  }
}
void Check_Auxiliar_9_2(){
  if(auxiliar_9_2 == 1){
    if((millis() - auxiliar_9_2_timer) >= ((3*currentBeat)+ (currentBeat*auxiliar_tempo))){ 
      digitalWrite(auxiliar_9_led, HIGH);
      auxiliar_9_2 = 2;
      auxiliar_9_2_timer = millis();
    }
  }
  if(auxiliar_9_2 == 2){
    if((millis() - auxiliar_9_2_timer) >= (currentBeat-(currentBeat*auxiliar_tempo))){
      digitalWrite(auxiliar_9_led, LOW);
      auxiliar_9_2 = 0;
    }
  }
}
void Check_Auxiliar_9_3(){
  if(auxiliar_9_3 == 1){
    if((millis() - auxiliar_9_3_timer) >= ((3*currentBeat)+ (currentBeat*auxiliar_tempo))){ 
      digitalWrite(auxiliar_9_led, HIGH);
      auxiliar_9_3 = 2;
      auxiliar_9_3_timer = millis();
    }
  }
  if(auxiliar_9_3 == 2){
    if((millis() - auxiliar_9_3_timer) >= (currentBeat-(currentBeat*auxiliar_tempo))){
      digitalWrite(auxiliar_9_led, LOW);
      auxiliar_9_3 = 0;
    }
  }
}
void Check_Auxiliar_9_4(){
  if(auxiliar_9_4 == 1){
    if((millis() - auxiliar_9_4_timer) >= ((3*currentBeat)+ (currentBeat*auxiliar_tempo))){ 
      digitalWrite(auxiliar_9_led, HIGH);
      auxiliar_9_4 = 2;
      auxiliar_9_4_timer = millis();
    }
  }
  if(auxiliar_9_4 == 2){
    if((millis() - auxiliar_9_4_timer) >= (currentBeat-(currentBeat*auxiliar_tempo))){
      digitalWrite(auxiliar_9_led, LOW);
      auxiliar_9_4 = 0;
    }
  }
}

//10
void Check_Auxiliar_10_1(){
  if(auxiliar_10_1 == 1){
    if((millis() - auxiliar_10_1_timer) >= ((3*currentBeat)+ (currentBeat*auxiliar_tempo))){ 
      digitalWrite(auxiliar_10_led, HIGH);
      auxiliar_10_1 = 2;
      auxiliar_10_1_timer = millis();
    }
  }
  if(auxiliar_10_1 == 2){
    if((millis() - auxiliar_10_1_timer) >= (currentBeat-(currentBeat*auxiliar_tempo))){
      digitalWrite(auxiliar_10_led, LOW);
      auxiliar_10_1 = 0;
    }
  }
}
void Check_Auxiliar_10_2(){
  if(auxiliar_10_2 == 1){
    if((millis() - auxiliar_10_2_timer) >= ((3*currentBeat)+ (currentBeat*auxiliar_tempo))){ 
      digitalWrite(auxiliar_10_led, HIGH);
      auxiliar_10_2 = 2;
      auxiliar_10_2_timer = millis();
    }
  }
  if(auxiliar_10_2 == 2){
    if((millis() - auxiliar_10_2_timer) >= (currentBeat-(currentBeat*auxiliar_tempo))){
      digitalWrite(auxiliar_10_led, LOW);
      auxiliar_10_2 = 0;
    }
  }
}
void Check_Auxiliar_10_3(){
  if(auxiliar_10_3 == 1){
    if((millis() - auxiliar_10_3_timer) >= ((3*currentBeat)+ (currentBeat*auxiliar_tempo))){ 
      digitalWrite(auxiliar_10_led, HIGH);
      auxiliar_10_3 = 2;
      auxiliar_10_3_timer = millis();
    }
  }
  if(auxiliar_10_3 == 2){
    if((millis() - auxiliar_10_3_timer) >= (currentBeat-(currentBeat*auxiliar_tempo))){
      digitalWrite(auxiliar_10_led, LOW);
      auxiliar_10_3 = 0;
    }
  }
}
void Check_Auxiliar_10_4(){
  if(auxiliar_10_4 == 1){
    if((millis() - auxiliar_10_4_timer) >= ((3*currentBeat)+ (currentBeat*auxiliar_tempo))){ 
      digitalWrite(auxiliar_10_led, HIGH);
      auxiliar_10_4 = 2;
      auxiliar_10_4_timer = millis();
    }
  }
  if(auxiliar_10_4 == 2){
    if((millis() - auxiliar_10_4_timer) >= (currentBeat-(currentBeat*auxiliar_tempo))){
      digitalWrite(auxiliar_10_led, LOW);
      auxiliar_10_4 = 0;
    }
  }
}

//LEDS---------------------------------------------------------------------------------------------------------------------------------------------------------------------------
