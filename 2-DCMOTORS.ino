const int button1=12;
const int button2=13;
int buttonstate1 =0;
int buttonstate2 =0;
 int x;  int y;
void setup()
{
  pinMode (button1 ,INPUT);
   pinMode (button2 ,INPUT);
  pinMode(7,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(8,OUTPUT); //PINS(4,8,2,7)WILL BE CONNECTED TO H- BRIDGE  AS INPUTS
  pinMode(4,OUTPUT);
}

void loop()
{
  buttonstate1 = digitalRead(button1);
  buttonstate2 = digitalRead(button2);
  
  if(buttonstate1==HIGH){   //THE 2 MOTORS WILL MOVE Clockwise
  x=1; y=0;
  digitalWrite(8,x);
  digitalWrite(4,y);
  digitalWrite(7,x);
  digitalWrite(2,y);
  delay(150);
  }
  
  if (buttonstate1==buttonstate2){//THE 2 MOTORS WILL STOPE MOVING
     x=0; y=0;
  digitalWrite(8,x);
  digitalWrite(4,y);
  digitalWrite(7,x);
  digitalWrite(2,y);
  delay(150);
  }
  
  if (buttonstate2==HIGH){ //THE 2 MOTORS WILL MOVE counter clockwise
    x=0; y=1;
  digitalWrite(8,x);
  digitalWrite(4,y);
  digitalWrite(7,x);
  digitalWrite(2,y);
  delay(150);
  }
   
}