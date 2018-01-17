int ldr=0;
int intensity=0;
const int led=3;

void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
  // put your setup code here, to run once:

}

void loop() {
 ldr=analogRead(A0);
  
  delay(10);
  Serial.println(ldr);
  ldr=map(ldr, 0,300, 0,255);
  //Serial.println(ldr);
  analogWrite(led, ldr);
  
  // put your main code here, to run repeatedly:

}
