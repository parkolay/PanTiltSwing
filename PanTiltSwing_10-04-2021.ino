/*
 * Pan, Tilt Swing control using three axis joystick, servos, and LCD display 
 */

#include <Servo.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F,20,4); //Set the LCD I2C address

Servo myservo1;  // create servo object to control the 'pan' servo
Servo myservo2;  // create servo object to control the 'tilt' servo
Servo myservo3;  // create servo object to control the 'swing' servo

const int Joystick_X = 0;  // analog pin used to connect the 'X' potentiometer on joystick --> "pan"
const int Joystick_Y = 1;  // analog pin used to connect the 'Y' potentiometer on joystick --> "tilt"
const int Joystick_Z = 2;  // analog pin used to connect the 'Z' potentiometer on joystick --> "Swing"

const int Joystick_B = 12; // Digital pin used to connect Joystick Button

int pan   = 0;    // variable to read the value from the analog pin
int tilt  = 0;    // variable to read the value from the analog pin
int swing = 0;    // variable to read the value from the analog pin
int pos1  = 0;    // variable to set servo position
int pos2  = 0;    // variable to set servo position
int pos3  = 0;    // variable to set servo position

int ButtonState = 0;  // variable to read the value from the joystick button
int ResetPos = 0;    // variable to store the servo position



void setup() 
{
  myservo1.attach(9);   // attaches the servo on pin 9 to the servo object
  myservo2.attach(10);  // attaches the servo on pin 10 to the servo object
  myservo3.attach(11);  // attaches the servo on pin 11 to the servo object
  Serial.begin(57600);  // open a serial connection

  pinMode(Joystick_B, INPUT_PULLUP);  // initialize the button pin as an input with an internal pull up resistor :
  
  lcd.init();

  lcd.backlight();
  lcd.print("Ready to Comply...");    // Print a message to the LCD.

}

void loop() 
{
  UpdateAnalogs();  //Check the analog inputs
  UpdatePosition();
  UpdateServo();    //move the servos to new positions
  UpdateDisplay();

}
