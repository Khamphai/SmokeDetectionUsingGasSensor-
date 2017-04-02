/***********************************
   Create By Mr. Khamphai KHOUNNAVONGSA
   Date: 17/06/2016
************************************/

int redLed = 12;
int greenLed = 11;
int buzzer = 10;
int sensorGas = A5;
int smoke_level;

// end of Variable-------------------------------------------

void setup() {
  Serial.begin(9600);
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(sensorGas, INPUT);
}// end of setup---------------------------------------------

void loop() {
  smoke_level = analogRead(sensorGas);

  Serial.print("Pin A5: ");
  Serial.println(smoke_level);
  
  if (smoke_level > 300)
  {
    digitalWrite(redLed, HIGH);
    digitalWrite(greenLed, LOW);
    tone(buzzer, 1000, 200);
  }
  else
  {
    digitalWrite(redLed, LOW);
    digitalWrite(greenLed, HIGH);
    noTone(buzzer);
  }
  delay(100);
}// end of loop---------------------------------------------
