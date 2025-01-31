int Loop = 0;//loop for keeping code separate
int Score = 0;//game score
#include <LiquidCrystal_I2C.h> //display library

#include <Wire.h>//arduino i2c library

LiquidCrystal_I2C lcd(0x27, 16, 2); // defining our i2c display

void setup() {
  // put your setup code here, to run once:
  lcd.init();//initiate lcd
  lcd.backlight();//turn on backlight
  pinMode(4, INPUT); //button input
  pinMode(8, INPUT); //led input
  pinMode(3, INPUT);//declare button 2 input
  pinMode(9, INPUT);//second led input
  Serial.begin(9600);
  attachInterrupt(0, testing, RISING);//interrupt for switching button so it does not activate any other things
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Loop == 5)//quick delay while game is switching
  {
    lcd.clear();//clear lcd if anything is on it
    delay(100);//wait 1/10 of a second
    lcd.clear();//clear lcd if anything is on it
    Loop = 0;//set loop integer to 0
  }
  if (Loop == 0)//if loop integer is 0
  {
    if (digitalRead(4) == HIGH) //if button is pressed
    {
      Loop++;//set loop integer to 1
    }
  }
  if (Loop == 1)//if loop integer is 1
  {

    if (digitalRead(8) == HIGH || digitalRead(9) == HIGH) //is led in pin 8 on or led in pin 9 on
    {
      lcd.setCursor(0, 0);//set lcd to first line of lcd
      lcd.print("You Win"); //print You Win
      Score++;//set score to one more than it was before
      delay(1500);//delay 1 and a half seconds 
      lcd.clear();//clear lcd if anything is on it
      lcd.setCursor(0, 0);//set lcd to first line of lcd
      lcd.print("Score = "); //print Score =
      lcd.setCursor(9, 0);//set lcd to after equal sign
      lcd.print(Score);//out score number
    }
    else if (digitalRead(8) == LOW && digitalRead(9) == LOW) // if both leds in pin 8 and pin 9 are off (they will never both be on)
    {      

      lcd.setCursor(0, 0);//set lcd to first line of lcd
      lcd.print("You Lose"); //print You Lose
      delay(1500);//wait 1 and a half seconds
      lcd.clear();//clear lcd if anything is on it
      lcd.setCursor(0, 0);//set lcd to first line of lcd
      lcd.print("Score = "); //print Score =
      lcd.setCursor(9, 0);//set lcd to after equal sign
      Score = 0;//set score to 0
      lcd.print(Score);//print score number
    }
    Loop ++;//set integer loop up one
  }

  if (Loop == 2)//if integer loop is two
  {

    if (digitalRead(3) == HIGH)//if button in pin 3 is pressed
    {
      lcd.clear();//clear lcd if anything is on it
      Loop = 0;//set integer loop to 0
    }
    else//if not
    {
      Loop = 2;//keep loop at two - stop from exiting program
    }
  }
}

void testing()//interrupt for switching button
{
  Loop = 5;//set integer loop to 5
}
