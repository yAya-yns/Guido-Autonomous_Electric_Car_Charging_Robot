void setup() 
{
  pinMode (A0, INPUT);
  pinMode (A1, INPUT);
  pinMode (A2, INPUT);
  pinMode (A3, INPUT);
  pinMode (8, INPUT);
  pinMode (2, INPUT);
  pinMode (13, OUTPUT);
  pinMode (7, OUTPUT);
  Serial.begin(9600);

}
int fb,lr,sw,btm;//front back, left right, switch
void loop() 
{
  digitalWrite(7, HIGH);

  fb=analogRead(A0);
  lr=analogRead(A1);
  sw=analogRead(A2);
  btm = analogRead(A3);
  Serial.print(fb);
  Serial.print("     ");
  Serial.print(lr);
  Serial.print("     ");
  Serial.print(sw);
  Serial.print("     ");
  Serial.print("  ");
  Serial.print(btm);
  Serial.print("     ");
  Serial.println("  ");
  delay(100);
}
