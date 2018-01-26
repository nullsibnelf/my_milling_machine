
#include <Servo.h>

#define Taster           9
#define StatusLed       13

Servo esc;


void setup() 
{
  pinMode(StatusLed,   OUTPUT);
  pinMode(Taster,      INPUT_PULLUP);
  
  Serial.begin(9600);                         // setup serial for debugging

  esc.attach(11);
  esc.writeMicroseconds(1000);
}




void loop()
{



  if (digitalRead(Taster) == 0)
  {
    Serial.println("T1");  
    
  int val;
  val = 400;
  val = map(val, 0, 1023, 1000, 2000);
  esc.writeMicroseconds(val);

    
    while (digitalRead(Taster) == 0);
  }

}



