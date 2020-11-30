long last_micros = 0;//first debounce
long last_micros2 = 0;//second debounce
int programState = 0;//game switching integer
int prgmstate;//storing game number while switching
int val;//mapping integer for delays
int counter;//green light counter for regular light catcher
int game;//stores integer loop for switching
int green1 = 47;//input pin for reading led off of rgb light catcher
int Loop;//integer for controlling what part of the code runs when
void setup()
{
  attachInterrupt(1, gamechange, RISING);//interrupt for game change
  attachInterrupt(0, testing, RISING);//interrupt for stopping led
  pinMode(23, OUTPUT);//led set as output
  pinMode(22, OUTPUT);//led set as output
  for (int out = 5; out <= 13; out++)
  {
    pinMode(out, OUTPUT);//led set as output
  }
  Serial.begin(9600);//start serial monitor
  pinMode(48, OUTPUT);//led set as output
  pinMode(49, OUTPUT);//led set as output
  pinMode(50, OUTPUT);//led set as output
  pinMode(green1, INPUT);//led set as input for rgb
  pinMode(4, INPUT);//button set as input for continuing
  Loop = 0;//sets integer loop to 0 to start
}
void loop()
{

  if (programState == 1) //Check to see which state to run
  {
    rgblightcatcher();//run game rgb light catcher
  }
  else//if programState is 0
  {
    lightcatcher();//run regular light catcher
  }
}

void lightcatcher()//regular light catcher code
{
  if (Loop == 0)//if integer loop is 0
  {
    digitalWrite(5, HIGH);//turn led on
    val = analogRead(A0);//set val to A0 for delay mapping
    val = map(val, 967, 1023, 100, 1000);
    delay(val);//delay based on a0
    digitalWrite(5, LOW);//turn led off
    digitalWrite(6, HIGH);//turn led on
    val = analogRead(A0);//set val to A0 for delay mapping
    val = map(val, 967, 1023, 100, 1000);//map a0 to a delay value
    delay(val);//delay based on a0
    digitalWrite(6, LOW);//turn led off
    digitalWrite(7, HIGH);//turn led on
    val = analogRead(A0);//set val to A0 for delay mapping
    val = map(val, 967, 1023, 100, 1000);//map a0 to a delay value
    delay(val);//delay based on a0
    digitalWrite(7, LOW);//turn led off
    digitalWrite(8, HIGH);//turn led on
    val = analogRead(A0);//set val to A0 for delay mapping
    val = map(val, 967, 1023, 100, 1000);//map a0 to a delay value
    delay(val);//delay based on a0
    digitalWrite(8, LOW);//turn led off
    digitalWrite(9, HIGH);//turn led on
    val = analogRead(A0);//set val to A0 for delay mapping
    val = map(val, 967, 1023, 100, 1000);//map a0 to a delay value
    delay(val);//delay based on a0
    digitalWrite(9, LOW);//turn led off
    counter = 1;//set internal green counter to 1
    digitalWrite(10, HIGH);//turn led on
    val = analogRead(A0);//set val to A0 for delay mapping
    val = map(val, 967, 1023, 100, 1000);//map a0 to a delay value
    delay(val);//delay based on a0
    digitalWrite(10, LOW);//turn led off
    counter = 0;//set internal green counter to 0
    digitalWrite(11, HIGH);//turn led on
    val = analogRead(A0);//set val to A0 for delay mapping
    val = map(val, 967, 1023, 100, 1000);//map a0 to a delay value
    delay(val);//delay based on a0
    digitalWrite(11, LOW);//turn led off
    digitalWrite(12, HIGH);//turn led on
    val = analogRead(A0);//set val to A0 for delay mapping
    val = map(val, 967, 1023, 100, 1000);//map a0 to a delay value
    delay(val);//delay based on a0
    digitalWrite(12, LOW);//turn led off
    digitalWrite(13, HIGH);//turn led on
    val = analogRead(A0);//set val to A0 for delay mapping
    val = map(val, 967, 1023, 100, 1000);//map a0 to a delay value
    delay(val);//delay based on a0
    digitalWrite(13, LOW);//turn led off
    digitalWrite(22, HIGH);//turn led on
    val = analogRead(A0);//set val to A0 for delay mapping
    val = map(val, 967, 1023, 100, 1000);//map a0 to a delay value
    delay(val);//delay based on a0
    digitalWrite(22, LOW);//turn led off
    digitalWrite(23, HIGH);//turn led on
    val = analogRead(A0);//set val to A0 for delay mapping
    val = map(val, 967, 1023, 100, 1000);//map a0 to a delay value
    delay(val);//delay based on a0
    digitalWrite(23, LOW);//turn led off
    digitalWrite(22, HIGH);//turn led on
    val = analogRead(A0);//set val to A0 for delay mapping
    val = map(val, 967, 1023, 100, 1000);//map a0 to a delay value
    delay(val);//delay based on a0
    digitalWrite(22, LOW);//turn led off
    digitalWrite(13, HIGH);//turn led on
    val = analogRead(A0);//set val to A0 for delay mapping
    val = map(val, 967, 1023, 100, 1000);//map a0 to a delay value
    delay(val);//delay based on a0
    digitalWrite(13, LOW);//turn led off
    digitalWrite(12, HIGH);//turn led on
    val = analogRead(A0);//set val to A0 for delay mapping
    val = map(val, 967, 1023, 100, 1000);//map a0 to a delay value
    delay(val);//delay based on a0
    digitalWrite(12, LOW);//turn led off
    digitalWrite(11, HIGH);//turn led on
    val = analogRead(A0);//set val to A0 for delay mapping
    val = map(val, 967, 1023, 100, 1000);//map a0 to a delay value
    delay(val);//delay based on a0
    digitalWrite(11, LOW);//turn led off
    counter = 1;//set internal green counter to 1
    digitalWrite(10, HIGH);//turn led on
    val = analogRead(A0);//set val to A0 for delay mapping
    val = map(val, 967, 1023, 100, 1000);//map a0 to a delay value
    delay(val);//delay based on a0
    digitalWrite(10, LOW);//turn led off
    counter = 0;//set internal green counter to 0
    digitalWrite(9, HIGH);//turn led on
    val = analogRead(A0);//set val to A0 for delay mapping
    val = map(val, 967, 1023, 100, 1000);//map a0 to a delay value
    delay(val);//delay based on a0
    digitalWrite(9, LOW);//turn led off
    digitalWrite(8, HIGH);//turn led on
    val = analogRead(A0);//set val to A0 for delay mapping
    val = map(val, 967, 1023, 100, 1000);//map a0 to a delay value
    delay(val);//delay based on a0
    digitalWrite(8, LOW);//turn led off
    digitalWrite(7, HIGH);//turn led on
    val = analogRead(A0);//set val to A0 for delay mapping
    val = map(val, 967, 1023, 100, 1000);//map a0 to a delay value
    delay(val);//delay based on a0
    digitalWrite(7, LOW);//turn led off
    digitalWrite(6, HIGH);//turn led on
    val = analogRead(A0);//set val to A0 for delay mapping
    val = map(val, 967, 1023, 100, 1000);//map a0 to a delay value
    delay(val);//delay based on a0
    digitalWrite(6, LOW);//turn led off
  }
}
void rgblightcatcher()//rgb light catcher code
{
  if (Loop == 1)//if integer loop is 1
  {
    int x = random (48, 51);//pick a random number between 48 and 50 and store it as x
    val = analogRead(A0);//set val to A0 for delay mapping
    val = map(val, 967, 1023, 100, 1000);//map a0 to a delay value
    digitalWrite(x, HIGH);//turn the light that was chosen randomly on
    delay(val);//delay based on a0
    digitalWrite(x, LOW);//turn randomly chosen light off
    delay(val);//delay based on a0
  }
}
void gamechange()
{
  game = Loop;//store current game being played (based on Loop) as game
  Loop = 2;//set loop to two
  if ((micros() - last_micros2) >= 250000)//debounce
  {
    last_micros2 = micros();//update debounce time
    programState = 1 - programState; //Flip-Flop state between 0 and 1
    Loop = 1 - game;//Flip-Flop Loop between 0 and 1
  }
}

void testing()
{
  if ((micros() - last_micros2) >= 250000)//debounce for game changing button due to the fact that we had an issue where it would activate both interrupts
  {
    prgmstate = programState;//set game based on programState to integer prgmstate
    programState = 2;//set programState to two stopping either game from running
    if ((micros() - last_micros) >= 250000)//debounce for stopping leds
    {
      last_micros = micros();//update debounce time

      if (digitalRead(green1) == HIGH || counter == 1) {//if either green light is on
        Serial.println("you win");//serial print you win
      }
      else//if not
      {
        Serial.println("you lose");//serial print you lose
      }
    }

    while (programState == 2)//while program state is two - no games are running
    {
      if (digitalRead(4) == HIGH)//wait until the button is pressed
      {
        programState = prgmstate;//restart the game stored at the beggining of this interrupt
      }
    }

  }
}
