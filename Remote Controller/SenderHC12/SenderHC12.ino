//Transmitter
//Demo - https://youtu.be/3bsvpogH8-0
//visit www.rootsaid.com for full tutorial
//For Video Demo and tutorials Visit www.youtube.com/c/rootsaid

#include <SoftwareSerial.h>
#include <Wire.h>
SoftwareSerial HC12(10, 11);

int lr;//left and right on Left Joystick
int bf;//back and front on Left Joystick
int rotate;//left and right on Right Joystick
int nothing;//not being used yet,up and down on the right joystick
int jSWleft;//button on the left joystick
int jSWright;//button on the right joystick
int btnLeft;//small button on the left
int btnRight;//small button on the right
  

void setup()
{ 
  HC12.begin(9600);
  Serial.begin(9600);
  pinMode(A0, INPUT);//jstickXright
  pinMode(A1, INPUT);//jstickYright
  pinMode(A2, INPUT);//jSWright
  pinMode(A3, INPUT);//jstickXleft
  pinMode(A4, INPUT);//jstickYleft
  pinMode(A5, INPUT);//jSWleft
  pinMode(A6, INPUT);//button left
  pinMode(A7, INPUT);//button right
}
void loop()
{  
  lr = analogRead(A3);
  bf = analogRead(A4);
  jSWleft = analogRead(A5);
  jSWright = analogRead(A2);
  rotate = analogRead(A0);
  nothing = analogRead(A1);
  btnLeft = analogRead(A6);
  btnRight = analogRead(A7);
  
  
  HC12.print(lr);
  HC12.print(",");
  HC12.print(bf);
  HC12.print(",");
  HC12.print(rotate);
  HC12.print(",");
  HC12.print(jSWleft);
  HC12.print(",");
  HC12.print(jSWright);
  HC12.print(",");
  HC12.print(btnLeft);
  HC12.print(",");
  HC12.print(btnRight);
  HC12.print(",");
  HC12.print(nothing);
  HC12.println("");


  Serial.print(lr);
  Serial.print(",");
  Serial.print(bf);
  Serial.print(",");
  Serial.print(rotate);
  Serial.print(",");
  Serial.print(jSWleft);
  Serial.print(",");
  Serial.print(jSWright);
  Serial.print(",");
  Serial.print(btnLeft);
  Serial.print(",");
  Serial.print(btnRight);
  Serial.print(",");
  Serial.print(nothing);
  Serial.println("");
  
  delay(100);
}
