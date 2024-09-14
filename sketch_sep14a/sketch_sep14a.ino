// C++ code
//
#define LED_PIN1 2
#define LED_PIN2 3
#define LED_PIN3 4


void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
 for (int i = 0; i < 3; i++) {
    pinMode(i + 2, OUTPUT);
  }
}

void loop()
{
  int pot1 = analogRead(A0);
  int pot2 = analogRead(A1);
  float Volts1 = pot1 * 5.0 / 1023.0;
  float Volts2 = pot2 * 5.0 / 1023.0;
 
  if(Volts1 > Volts2){
		digitalWrite(LED_PIN1, 1);
   		digitalWrite(LED_PIN2, 0);
		digitalWrite(LED_PIN3, 0);
  }else if(Volts1 < Volts2){
		digitalWrite(LED_PIN1, 0);
   		digitalWrite(LED_PIN2, 0);
		digitalWrite(LED_PIN3, 1);
  }else{
		digitalWrite(LED_PIN1, 0);
   		digitalWrite(LED_PIN2, 1);
		digitalWrite(LED_PIN3, 0);
  }
  
}