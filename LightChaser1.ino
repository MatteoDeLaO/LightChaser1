void setup() {
   pinMode(9, OUTPUT); // these two pins are now outputs
  pinMode(10, OUTPUT); 
}
// the loop function runs over and over again forever
void loop() {
  digitalWrite(9,1);  // Turns pin 9 on
  digitalWrite(10,0); // Keeps pin 10 off 
  delay(1000); // waits 1 second 
  digitalWrite(9,0);  // turns pin 9 off
  digitalWrite(10,1); // Turns pin 10 off
  delay(1000);  // Wait 1 second
}