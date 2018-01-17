int R1=976;
double x=0;
double R2;
void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
  // put your setup code here, to run once:

}

void loop() {
  x=analogRead(A0);
  R2=(x/(1023-x))*R1;
  Serial.println(R2);
  delay(1000);
  // put your main code here, to run repeatedly:
  //ok

}
