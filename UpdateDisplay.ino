void UpdateDisplay()
{
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Pan ");
  //lcd.setCursor(5,0);
  lcd.print(pan);
  lcd.print(" ");
  lcd.print(pos1);
  lcd.setCursor(0,1);
  lcd.print("Tilt ");
  //lcd.setCursor(6,1);
  lcd.print(tilt);
  lcd.print(" ");
  lcd.print(pos2);
  lcd.setCursor(0,2);
  lcd.print("Swing ");
  //lcd.setCursor(6,1);
  lcd.print(swing);
  lcd.print(" ");
  lcd.print(pos3);
  lcd.setCursor(0,3);
  lcd.print("Button ");
  lcd.print(ButtonState);
  //delay(250);  //
  
}//end void UpdateDisplay()
