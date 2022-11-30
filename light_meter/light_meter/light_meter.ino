
int sensor;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(A0,INPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensor = analogRead(A0);
   Serial.println(sensor);
   if (sensor > 600) {
     digitalWrite(8,HIGH);
     digitalWrite(7,LOW);
   }
   else if (sensor > 800) {
          digitalWrite(7,HIGH);
          digitalWrite(8,LOW);
   }
   else {
         digitalWrite(8,HIGH);
          digitalWrite(7,HIGH);
   }

}





