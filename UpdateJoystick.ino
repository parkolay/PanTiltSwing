void UpdateAnalogs()
{
  ButtonState = digitalRead(Joystick_B);
  pan   = analogRead(Joystick_X);            // reads the value of the potentiometer (value between 0 and 1023)
  tilt  = analogRead(Joystick_Y);            // reads the value of the potentiometer (value between 0 and 1023)
  swing = analogRead(Joystick_Z);            // reads the value of the potentiometer (value between 0 and 1023)
}// end void UpdateAnalogs()
