/*********TACHLOG powered********
*********www.troncart.com*******
**electronics components online**
*https://github.com/troncart
***********Basic Robot_1.1V**************
***********24-09-2020**************
*/
int Left_Enable = 2;
int Left_Motor11 = 3;
int Left_Motor12 = 4;// intializing left motor
int Right_Enable = 5;
int Right_Motor11 = 6;
int Right_Motor12 = 7;// intializing right motor
// the setup function runs once when you press reset or power the board

void setup()// intializing the pin mode of arduino
{
  pinMode(Left_Motor11,OUTPUT);
  pinMode(Left_Motor12,OUTPUT);
  pinMode(Right_Motor11,OUTPUT);
  pinMode(Right_Motor12,OUTPUT);
  pinMode(Left_Enable,OUTPUT);
  pinMode(Right_Enable,OUTPUT);
  Serial.begin(9600);
}

void forward()// function to move forward
{
  digitalWrite(Left_Enable,HIGH);
  digitalWrite(Right_Enable,HIGH);
  digitalWrite(Left_Motor11,HIGH);
  digitalWrite(Left_Motor12,LOW);
  digitalWrite(Right_Motor11,HIGH);
  digitalWrite(Right_Motor12,LOW);
  Serial.println("Forward");
}

void backward()// function to move backward
{
  digitalWrite(Left_Enable,HIGH);
  digitalWrite(Right_Enable,HIGH);
  digitalWrite(Left_Motor11,LOW);
  digitalWrite(Left_Motor12,HIGH);
  digitalWrite(Right_Motor11,LOW);
  digitalWrite(Right_Motor12,HIGH);
  Serial.println("Backward");
}

void left()// function to move left
{
  
  digitalWrite(Left_Enable,LOW);
  digitalWrite(Right_Enable,HIGH);
  digitalWrite(Left_Motor11,LOW);
  digitalWrite(Left_Motor12,LOW);
  digitalWrite(Right_Motor11,HIGH);
  digitalWrite(Right_Motor12,LOW);
  Serial.println("Left");
}

void right()// function to move right
{
  
  digitalWrite(Left_Enable,HIGH);
  digitalWrite(Right_Enable,LOW);
  digitalWrite(Left_Motor11,HIGH);
  digitalWrite(Left_Motor12,LOW);
  digitalWrite(Right_Motor11,LOW);
  digitalWrite(Right_Motor12,LOW);
  Serial.println("Right");
}
void rotate()// function to move rotate
{
  digitalWrite(Left_Enable,HIGH);
  digitalWrite(Right_Enable,HIGH);
  digitalWrite(Left_Motor11,HIGH);
  digitalWrite(Left_Motor12,LOW);
  digitalWrite(Right_Motor11,LOW);
  digitalWrite(Right_Motor12,HIGH);
  delay(500);
  digitalWrite(Left_Motor11,LOW);
  digitalWrite(Left_Motor12,HIGH);
  digitalWrite(Right_Motor11,HIGH);
  digitalWrite(Right_Motor12,LOW);
  delay(500);
  Serial.println("rotate");
}
    void loop()// the loop function runs over and over again forever 
      {
        forward();// calling forward function
        delay(2500);// delay for 2.5 sec
        left();// calling left function
        delay(1000);//delay for 1 sec
        backward(); //calling backward function
        delay(2500);// delay 2.5 sec
        right();// calling right function
        delay(1000);// delay 1 sec
        backward();// calling backward function
        delay(2500);// delay 2.5 sec
      }
