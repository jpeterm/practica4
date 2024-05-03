int Led_pin1 =(2);
int Led_pin2 =(3);
int Led_pin3 =(4);
int Led_pin4 =(8);
int SW1 = (5);
int SW2 = (6);
int SW3 = (7);

void setup()
{
 pinMode (2, OUTPUT);
 pinMode (3, OUTPUT);
 pinMode (4, OUTPUT);
 pinMode (8, OUTPUT);
 pinMode (5, INPUT);
 pinMode (6, INPUT);
 pinMode (7, INPUT);
}

void loop()
{
  
  if (digitalRead(SW1)==HIGH&&digitalRead(SW2)==LOW&&digitalRead(SW3)==LOW){
    
 digitalWrite (2, LOW);
 digitalWrite (3, LOW);
 digitalWrite (4, LOW);
 digitalWrite (8, LOW);
  delay(1000);
 
 digitalWrite (2, HIGH);
 digitalWrite (3, LOW);
 digitalWrite (4, LOW);
 digitalWrite (8, LOW);
  delay(1000);
 
 digitalWrite (2, LOW);
 digitalWrite (3, HIGH);
 digitalWrite (4, LOW);
 digitalWrite (8, LOW);
  delay(1000);
  
 digitalWrite (2, HIGH);
 digitalWrite (3, HIGH);
 digitalWrite (4, LOW);
 digitalWrite (8, LOW);
  delay(1000);
 
 digitalWrite (2, LOW);
 digitalWrite (3, LOW);
 digitalWrite (4, HIGH);
 digitalWrite (8, LOW);
  delay(1000);
 
 digitalWrite (2, HIGH);
 digitalWrite (3, LOW);
 digitalWrite (4, HIGH);
 digitalWrite (8, LOW);
  delay(1000);
  
 digitalWrite (2, LOW);
 digitalWrite (3, HIGH);
 digitalWrite (4, HIGH);
 digitalWrite (8, LOW);
  delay(1000);
 
 digitalWrite (2, HIGH);
 digitalWrite (3, HIGH);
 digitalWrite (4, HIGH);
 digitalWrite (8, LOW);
  delay(1000);
 
 digitalWrite (2, LOW);
 digitalWrite (3, LOW);
 digitalWrite (4, LOW);
 digitalWrite (8, HIGH);
  delay(1000);
  
 digitalWrite (2, HIGH);
 digitalWrite (3, LOW);
 digitalWrite (4, LOW);
 digitalWrite (8, HIGH);
  delay(1000);
  }
    
  
  
  
  
  if (digitalRead(SW1)==LOW&&digitalRead(SW2)==HIGH&&digitalRead(SW3)==LOW){
   
 digitalWrite (2, LOW);
 digitalWrite (3, LOW);
 digitalWrite (4, LOW);
 digitalWrite (8, LOW);
  delay(2000);
 
 digitalWrite (2, HIGH);
 digitalWrite (3, LOW);
 digitalWrite (4, LOW);
 digitalWrite (8, LOW);
  delay(2000);
 
 digitalWrite (2, LOW);
 digitalWrite (3, HIGH);
 digitalWrite (4, LOW);
 digitalWrite (8, LOW);
  delay(2000);
  
 digitalWrite (2, HIGH);
 digitalWrite (3, HIGH);
 digitalWrite (4, LOW);
 digitalWrite (8, LOW);
  delay(2000);
 
 digitalWrite (2, LOW);
 digitalWrite (3, LOW);
 digitalWrite (4, HIGH);
 digitalWrite (8, LOW);
  delay(2000);
 
 digitalWrite (2, HIGH);
 digitalWrite (3, LOW);
 digitalWrite (4, HIGH);
 digitalWrite (8, LOW);
  delay(2000);
  
 digitalWrite (2, LOW);
 digitalWrite (3, HIGH);
 digitalWrite (4, HIGH);
 digitalWrite (8, LOW);
  delay(2000);
 
 digitalWrite (2, HIGH);
 digitalWrite (3, HIGH);
 digitalWrite (4, HIGH);
 digitalWrite (8, LOW);
  delay(2000);
 
 digitalWrite (2, LOW);
 digitalWrite (3, LOW);
 digitalWrite (4, LOW);
 digitalWrite (8, HIGH);
  delay(2000);
  
 digitalWrite (2, HIGH);
 digitalWrite (3, LOW);
 digitalWrite (4, LOW);
 digitalWrite (8, HIGH);
  delay(2000);
     }
   
   
  
  
  if (digitalRead(SW1)==LOW&&digitalRead(SW2)==LOW&&digitalRead(SW3)==HIGH){
   
 digitalWrite (2, LOW);
 digitalWrite (3, LOW);
 digitalWrite (4, LOW);
 digitalWrite (8, LOW);
  delay(3000);
 
 digitalWrite (2, HIGH);
 digitalWrite (3, LOW);
 digitalWrite (4, LOW);
 digitalWrite (8, LOW);
  delay(3000);
 
 digitalWrite (2, LOW);
 digitalWrite (3, HIGH);
 digitalWrite (4, LOW);
 digitalWrite (8, LOW);
  delay(3000);
  
 digitalWrite (2, HIGH);
 digitalWrite (3, HIGH);
 digitalWrite (4, LOW);
 digitalWrite (8, LOW);
  delay(3000);
 
 digitalWrite (2, LOW);
 digitalWrite (3, LOW);
 digitalWrite (4, HIGH);
 digitalWrite (8, LOW);
  delay(3000);
 
 digitalWrite (2, HIGH);
 digitalWrite (3, LOW);
 digitalWrite (4, HIGH);
 digitalWrite (8, LOW);
  delay(3000);
  
 digitalWrite (2, LOW);
 digitalWrite (3, HIGH);
 digitalWrite (4, HIGH);
 digitalWrite (8, LOW);
  delay(3000);
 
 digitalWrite (2, HIGH);
 digitalWrite (3, HIGH);
 digitalWrite (4, HIGH);
 digitalWrite (8, LOW);
  delay(3000);
 
 digitalWrite (2, LOW);
 digitalWrite (3, LOW);
 digitalWrite (4, LOW);
 digitalWrite (8, HIGH);
  delay(3000);
  
 digitalWrite (2, HIGH);
 digitalWrite (3, LOW);
 digitalWrite (4, LOW);
 digitalWrite (8, HIGH);
  delay(3000);
   
  }
   
 
  
  if(digitalRead(SW1)==HIGH&&digitalRead(SW2)==HIGH&&digitalRead(SW3)==HIGH){
 
 digitalWrite (2, LOW);
 digitalWrite (3, LOW);
 digitalWrite (4, LOW);
 digitalWrite (8, LOW);
  delay(500);
 
 digitalWrite (2, HIGH);
 digitalWrite (3, LOW);
 digitalWrite (4, LOW);
 digitalWrite (8, LOW);
  delay(500);
 
 digitalWrite (2, LOW);
 digitalWrite (3, HIGH);
 digitalWrite (4, LOW);
 digitalWrite (8, LOW);
  delay(500);
  
 digitalWrite (2, HIGH);
 digitalWrite (3, HIGH);
 digitalWrite (4, LOW);
 digitalWrite (8, LOW);
  delay(500);
 
 digitalWrite (2, LOW);
 digitalWrite (3, LOW);
 digitalWrite (4, HIGH);
 digitalWrite (8, LOW);
  delay(500);
 
 digitalWrite (2, HIGH);
 digitalWrite (3, LOW);
 digitalWrite (4, HIGH);
 digitalWrite (8, LOW);
  delay(500);
  
 digitalWrite (2, LOW);
 digitalWrite (3, HIGH);
 digitalWrite (4, HIGH);
 digitalWrite (8, LOW);
  delay(500);
 
 digitalWrite (2, HIGH);
 digitalWrite (3, HIGH);
 digitalWrite (4, HIGH);
 digitalWrite (8, LOW);
  delay(500);
 
 digitalWrite (2, LOW);
 digitalWrite (3, LOW);
 digitalWrite (4, LOW);
 digitalWrite (8, HIGH);
  delay(500);
  
 digitalWrite (2, HIGH);
 digitalWrite (3, LOW);
 digitalWrite (4, LOW);
 digitalWrite (8, HIGH);
  delay(500);
      }
     
    
  
  
 
 digitalWrite (2, LOW);
 digitalWrite (3, LOW);
 digitalWrite (4, LOW);
 digitalWrite (8, LOW);
  delay(500);
 
 digitalWrite (2, HIGH);
 digitalWrite (3, LOW);
 digitalWrite (4, LOW);
 digitalWrite (8, LOW);
  delay(500);
 
 digitalWrite (2, LOW);
 digitalWrite (3, HIGH);
 digitalWrite (4, LOW);
 digitalWrite (8, LOW);
  delay(500);
  
 digitalWrite (2, HIGH);
 digitalWrite (3, HIGH);
 digitalWrite (4, LOW);
 digitalWrite (8, LOW);
  delay(500);
 
 digitalWrite (2, LOW);
 digitalWrite (3, LOW);
 digitalWrite (4, HIGH);
 digitalWrite (8, LOW);
  delay(500);
 
 digitalWrite (2, HIGH);
 digitalWrite (3, LOW);
 digitalWrite (4, HIGH);
 digitalWrite (8, LOW);
  delay(500);
  
 digitalWrite (2, LOW);
 digitalWrite (3, HIGH);
 digitalWrite (4, HIGH);
 digitalWrite (8, LOW);
  delay(500);
 
 digitalWrite (2, HIGH);
 digitalWrite (3, HIGH);
 digitalWrite (4, HIGH);
 digitalWrite (8, LOW);
  delay(500);
 
 digitalWrite (2, LOW);
 digitalWrite (3, LOW);
 digitalWrite (4, LOW);
 digitalWrite (8, HIGH);
  delay(500);
  
 digitalWrite (2, HIGH);
 digitalWrite (3, LOW);
 digitalWrite (4, LOW);
 digitalWrite (8, HIGH);
  delay(500);
