
int led=9;
int brightness=0;
int fadeAmount=5;
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT); // make pin 9 output pin

}

void loop() 
{
  // put your main code here, to run repeatedly:
  
   analogWrite(led,brightness);//set PWM value for led
   brightness=brightness+fadeAmount;//change brightness by fadeAmount
   if(brightness==0||brightness==255)
   {
    fadeAmount= -fadeAmount;
   }
   delay(30);
   
}
