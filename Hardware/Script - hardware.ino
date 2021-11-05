// C++ code
//
#include <SoftwareSerial.h>

SoftwareSerial BTSerial(0,1); // RX | TX
   int Left = 2;
   int right = 3;
   int up = 4;
   int down = 5;
   int LED_NUILTIN_uno;
   int LED_NUILTIN_dos;
   int LED_NUILTIN_tres;
   int LED_NUILTIN_cuatro;
// Se referencia la declaracion de variables

void setup()
{
  pinMode(9, OUTPUT);  // Pin del bluetooth HC-05 
  digitalWrite(9, HIGH);
  Serial.begin(9600);
  BTSerial.begin(30000);  // HC-05 default speed
  
  pinMode(A1, INPUT);
  pinMode(LED_BUILTIN_uno, OUTPUT);
  Serial.begin(9600);
  pinMode(A2, INPUT);
  pinMode(LED_BUILTIN_dos, OUTPUT);
  Serial.begin(9600);
  pinMode(A3, INPUT);
  pinMode(LED_BUILTIN_tres, OUTPUT);
  Serial.begin(9600);
  pinMode(A4, INPUT);
  pinMode(LED_BUILTIN_cuatro, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if (BTSerial.available())
    Serial.write(BTSerial.read());

  	analogRead(A1);

  	digitalWrite(LED_BUILTIN_uno, HIGH);
 	delay(1000); // Wait for 1000 millisecond(s)
 	digitalWrite(LED_BUILTIN_uno, LOW);
 	delay(1000); // Wait for 1000 millisecond(s)
 	Serial.println("Left");

  	analogRead(A2);

  	digitalWrite(LED_BUILTIN_dos, HIGH);
  	delay(1000); // Wait for 1000 millisecond(s)
    	digitalWrite(LED_BUILTIN_dos, LOW);
   	delay(1000); // Wait for 1000 millisecond(s)
   	Serial.println("Right");

    	analogRead(A3);

    	digitalWrite(LED_BUILTIN_tres, HIGH);
    	delay(1000); // Wait for 1000 millisecond(s)
   	digitalWrite(LED_BUILTIN_tres, LOW);
   	delay(1000); // Wait for 1000 millisecond(s)
   	Serial.println("Up");

    	analogRead(A4);

    	digitalWrite(LED_BUILTIN_cuatro, HIGH);
    	delay(1000); // Wait for 1000 millisecond(s)
    	digitalWrite(LED_BUILTIN_cuatro, LOW);
    	delay(1000); // Wait for 1000 millisecond(s)
    	Serial.println("Down");
  
    if (Serial.available()){
    	BTSerial.write(Serial.read());
	}
}

