int led_1 	= (14);
int led_2 = (15);
int led_3 = (16);
int led_4 = (17);
int led_5 = (18);
int led_6 = (19);
int G = (2);
int F = (3);
int A = (4);
int B = (5);
int C = (6);
int D = (7);
int E = (8);
int SW1 = (9);
int SW2 = (10);
int SW3 = (11);
int SW4 = (12);

#define Encendido(pin) digitalWrite(pin, HIGH)
#define Apagado(pin) digitalWrite(pin, LOW)
#define tiempo delay(500)
#define tiempo_2 delay(1500)
void setup()
{
 pinMode (led_1, OUTPUT);
 pinMode (led_2, OUTPUT);
 pinMode (led_3, OUTPUT);
 pinMode (led_4, OUTPUT);
 pinMode (led_5, OUTPUT);
 pinMode (led_6, OUTPUT);
 pinMode (G, OUTPUT);
 pinMode (F, OUTPUT);
 pinMode (A, OUTPUT);
 pinMode (B, OUTPUT);
 pinMode (C, OUTPUT);
 pinMode (D, OUTPUT);
 pinMode (E, OUTPUT);
 pinMode (SW1, INPUT);
 pinMode (SW2, INPUT);
 pinMode (SW3, INPUT);
 pinMode (SW4, INPUT);
 Serial.begin(9600);
}

void loop()
{
  if(digitalRead (SW1) == HIGH){
    if(digitalRead (SW2) == LOW){
       if(digitalRead (SW3) == LOW){
         if(digitalRead (SW4) == LOW){
    Serial.println ("Practica No-4 Jose Alejandro Perez Valencia");
    delay(5000);
        }
      }
    }
  }
  if(digitalRead (SW2) == HIGH){
     if(digitalRead (SW1) == LOW){
        if(digitalRead (SW3) == LOW){
          if(digitalRead (SW4) == LOW){
         Encendido(led_1);
         tiempo;
         Apagado(led_1);
         tiempo;
  
         Encendido(led_2);
         tiempo;
         Apagado(led_2);
         tiempo;
          
         Encendido(led_3);
         tiempo;
         Apagado(led_3);
         tiempo;
  
         Encendido(led_4);
         tiempo;
         Apagado(led_4);
         tiempo;
          
         Encendido(led_5);
         tiempo;
         Apagado(led_5);
         tiempo;
          
         Encendido(led_6);
         tiempo;
         Apagado(led_6);
         tiempo;
          
          
          
         Encendido(led_6);
         tiempo;
         Apagado(led_6);
         tiempo;
  
         Encendido(led_5);
         tiempo;
         Apagado(led_5);
         tiempo;
          
         Encendido(led_4);
         tiempo;
         Apagado(led_4);
         tiempo;
  
         Encendido(led_3);
         tiempo;
         Apagado(led_3);
         tiempo;
          
         Encendido(led_2);
         tiempo;
         Apagado(led_2);
         tiempo;
          
         Encendido(led_1);
         tiempo;
         Apagado(led_1);
         tiempo;
         
         
          
         Encendido(led_1);
         Encendido(led_2);
         Encendido(led_3);
         Encendido(led_4);
         Encendido(led_5);
         Encendido(led_6);
          tiempo;
         Apagado(led_1);
         Apagado(led_2);
         Apagado(led_3);
         Apagado(led_4);
         Apagado(led_5);
         Apagado(led_6);
          tiempo;
         Encendido(led_1);
         Encendido(led_2);
         Encendido(led_3);
         Encendido(led_4);
         Encendido(led_5);
         Encendido(led_6);
          tiempo;
         Apagado(led_1);
         Apagado(led_2);
         Apagado(led_3);
         Apagado(led_4);
         Apagado(led_5);
         Apagado(led_6);
          tiempo;
           }
  
          }
  
         }
     }
		if(digitalRead (SW2) == LOW){
     	  if(digitalRead (SW1) == LOW){
            if(digitalRead (SW3) == HIGH){
              if(digitalRead (SW4) == LOW){ 
                
                digitalWrite (A, HIGH);
                digitalWrite (B, LOW);
                digitalWrite (C, LOW);
                digitalWrite (D, HIGH);
                digitalWrite (E, HIGH);
                digitalWrite (F, HIGH);
                digitalWrite (G, LOW);
                tiempo_2;
                
                digitalWrite (A, LOW);
                digitalWrite (B, HIGH);
                digitalWrite (C, HIGH);
                digitalWrite (D, HIGH);
                digitalWrite (E, HIGH);
                digitalWrite (F, HIGH);
                digitalWrite (G, LOW);
                tiempo_2;
                
                digitalWrite (A, HIGH);
                digitalWrite (B, HIGH);
                digitalWrite (C, HIGH);
                digitalWrite (D, LOW);
                digitalWrite (E, HIGH);
                digitalWrite (F, HIGH);
                digitalWrite (G, HIGH);
                tiempo_2;
                
                digitalWrite (A, LOW);
                digitalWrite (B, LOW);
                digitalWrite (C, LOW);
                digitalWrite (D, HIGH);
                digitalWrite (E, HIGH);
                digitalWrite (F, HIGH);
                digitalWrite (G, HIGH);
                tiempo_2;
                
                digitalWrite (A, HIGH);
                digitalWrite (B, LOW);
                digitalWrite (C, LOW);
                digitalWrite (D, LOW);
                digitalWrite (E, HIGH);
                digitalWrite (F, HIGH);
                digitalWrite (G, LOW);
                tiempo_2;
                
                digitalWrite (A, HIGH);
                digitalWrite (B, HIGH);
                digitalWrite (C, HIGH);
                digitalWrite (D, HIGH);
                digitalWrite (E, HIGH);
                digitalWrite (F, HIGH);
                digitalWrite (G, LOW);
                tiempo_2;
                
              }
            }
          }
        }
         
       if(digitalRead (SW1) == HIGH){
     	  if(digitalRead (SW2) == LOW){
            if(digitalRead (SW3) == HIGH){
              if(digitalRead (SW4) == LOW){ 
                
                Serial.println("Gracias por su atencion");
                delay(5000);
                
              }
            }
          }
       }
  
      if(digitalRead (SW1) == LOW){
     	  if(digitalRead (SW2) == HIGH){
            if(digitalRead (SW3) == LOW){
              if(digitalRead (SW4) == HIGH){ 
                
                Serial.println("Gracias por su atencion");
                delay(5000);
                
              }
            }
          }
       }
                
}