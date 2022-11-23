

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(8, OUTPUT); // Definierar "pin 8" att vara otgång, ström från Arduino på.
  pinMode(7, OUTPUT); // Definierar "pin 8" att vara otgång, ström från Arduino på.
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
   digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
    digitalWrite(7, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second
}
