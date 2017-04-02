int delay = 10;
int[] list = [13,2,3,4,5,6,7,8,9,10,11,12];
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  for (int i = 0; i < list.length; i ++)
  {
    pinMode(list[i], OUTPUT); //pin can output to control LEDs
  }
}

// the loop function runs over and over again forever
void loop() {
  for (int i = 0; i < list.length; i ++)
  {
    digitalWrite(list[i], HIGH); //LED on
    delay(delay); 
    digitalWrite(list[i], LOW); //LED off
    delay(delay);
  }
}
