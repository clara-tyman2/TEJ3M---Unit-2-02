/*
  Blink with variable

  Turns LED on for one second, the off for one second, each time increases each time by 1 more second

  created Feb 2025 by Clara T
 */

int blinkTime = 1000;  // set variable to 1000
 
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(blinkTime); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(blinkTime); // Wait for 1000 millisecond(s)

  blinkTime = blinkTime + 1000; // add 1 second to the variable blinkTime
}
