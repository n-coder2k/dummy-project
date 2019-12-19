#include <AFMotor.h>

AF_DCMotor motor1(1);

AF_DCMotor motor2(2); 
 AF_DCMotor motor3(3);
 AF_DCMotor motor4(4);
char command; 
void setup() 

{ 
   pinMode(A0,INPUT);
         

 Serial.begin(9600);  
}
void loop()
{ 
  if(digitalRead(A0)==LOW)
  {
 digitalWrite(13,HIGH);
   //motor1.setSpeed(0);
   //motor4.setSpeed(0);//Define maximum velocity
  //motor1.run(RELEASE);
  //motor4.run(RELEASE);//rotate the motor clockwise
  motor2.setSpeed(255);
  motor3.setSpeed(0);//Define maximum velocity
  motor3.run(RELEASE);
  motor2.run(FORWARD); //rotate the motor clockwise
  }
  
else(digitalRead(A0)==HIGH);
   
{
  digitalWrite(13,LOW);
   Serial.print("ZZ");
 motor4.setSpeed(255);
 motor1.setSpeed(255); //Define minimum velocity
  //motor1.run(FORWARD);
  //motor4.run(FORWARD);//stop the motor when release the button
  motor2.setSpeed(0);
  motor3.setSpeed(255);//Define minimum velocity
  motor2.run(RELEASE);
  motor3.run(FORWARD);//rotate the motor clockwise
   
}}
