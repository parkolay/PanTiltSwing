void UpdateServo()
{
  UpdatePosition();
  myservo1.write(pos1);
  myservo2.write(pos2);
  myservo3.write(pos3);
}//end void UpdateServo()

void UpdatePosition()
{
    //remap the analog read values to servo position values
    //these values were mapped using values read from three axis joystick
    pos1 = map(pan,  45, 975, 32, 137); 
    pos2 = map(tilt, 45, 950, 62, 175);
    pos3 = map(swing,319, 706, 50, 137); 
}//end void UpdatePosition()
