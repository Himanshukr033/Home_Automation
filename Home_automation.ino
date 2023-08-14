#include <SoftwareSerial.h>   //including library for Software Serial communication

SoftwareSerial mySerial (2, 3);    //(RX, TX)
       
        
        // defining all pins to suitable variable
  int const light1= 4;
  int const light2 =5;
  int const fan =6;
  int const trig =7;
  int const echo =8;
  float distance =0, duration =0;
  int count = 1;

void setup() 
{         
  
       //setting all the pins 
  pinMode(light1, OUTPUT);
  pinMode(light2, OUTPUT);
  pinMode(fan, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  
         //defining baudrate
  Serial.begin(9600);
  mySerial.begin(9600);

  digitalWrite(trig, LOW);      // to ensure no garbage values is read if it is on in starting
  
  // I am using a Active-low replay module, hence when I send HIGH signal from arduino 
  //the relay module is turned inactive/de-energized and vice-versa
  digitalWrite(light1, HIGH); 
  digitalWrite(light2, HIGH); 
  digitalWrite(fan, HIGH); 

}

void loop() 
{
  if(mySerial.available() == 1)   //if communication is going on
  {
    char value = mySerial.read();   //Reads the data recieved

          // matches the recived data
          
    if(value == 'a')    // for main light
    {
      digitalWrite(light1, HIGH);  // turns on
      }
    if(value == 'A')
    {
      digitalWrite(light1, LOW); // turns off
      }
      
    if(value == 'b') // for secondary light
    {
      digitalWrite(light2, HIGH);  // turns on
      }
    if(value == 'B')
    {
      digitalWrite(light2, LOW);   // turns off
     }
     
    if(value == 'c')      // for fan
    {
      digitalWrite(fan, HIGH);    // turns on
     }
    if(value == 'C')
    {
      digitalWrite(fan, LOW);   // turns off
     }   
  }
}
