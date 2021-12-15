int sencorValue=0;
int limit=300;

void setup() {
  pinMode(9,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  sencorValue=analogRead(A0);
  
  if (sencorValue<limit){
    digitalWrite(9,HIGH);
  }
  else {
    digitalWrite(9,LOW);
 }
  delay(1000);
}
