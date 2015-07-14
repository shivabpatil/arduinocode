int led=13;
int pinState=LOW;
long previousTime=0;
long timer=1000;     //set timer value

void setup() {
  // put your setup code here, to run once:
 pinMode(led,OUTPUT); // set led to output
}

void loop() {
  // put your main code here, to run repeatedly:
  long currentTime=millis();// time passed from last time led blinked
  if(currentTime-previousTime>timer)
  {
    if(pinState==LOW)
     pinState=HIGH;
    else 
     pinState=LOW;
   previousTime=currentTime;
  }
digitalWrite(led,pinState);
}
