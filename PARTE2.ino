
int SW1 = 10;
int SW2 = 11;
#define led1	9
#define led2	8
#define led3	7
#define led4	6
#define led5	5
#define led6	4
#define led7	3
#define Encendido(pin)	digitalWrite(pin, HIGH)
#define Apagado(pin)	digitalWrite(pin, LOW)
#define tiempo1 		delay(500)
#define tiempo2     delay(1000)
void setup()
{
 pinMode (SW1, INPUT);
 pinMode (SW2, INPUT);
 pinMode (led1, OUTPUT);
 pinMode (led2, OUTPUT);
 pinMode (led3, OUTPUT);
 pinMode (led4, OUTPUT);
 pinMode (led5, OUTPUT);
 pinMode (led6, OUTPUT);
 pinMode (led7, OUTPUT);
 Serial.begin(9600);
 Serial.println("No se ha seleccionado ninguna velocidad");
}

void loop()
{
  if(digitalRead (SW1) == HIGH){
    Serial.println("Velocidad 1");
    Encendido(led1);
    tiempo1;
    Apagado(led1);
    
    Encendido(led2);
    tiempo1;
    Apagado(led2);
    
    Encendido(led3);
    tiempo1;
    Apagado(led3);
    
    Encendido(led4);
    tiempo1;
    Apagado(led4);
    
    Encendido(led5);
    tiempo1;
    Apagado(led5);
    
    Encendido(led6);
    tiempo1;
    Apagado(led6);
    
    Encendido(led7);
    tiempo1;
    Apagado(led7);
    
    Encendido(led6);
    tiempo1;
    Apagado(led6);
    
    Encendido(led5);
    tiempo1;
    Apagado(led5);
    
    Encendido(led4);
    tiempo1;
    Apagado(led4);
    
    Encendido(led3);
    tiempo1;
    Apagado(led3);
    
    Encendido(led2);
    tiempo1;
    Apagado(led2);
    
    Encendido(led1);
    tiempo1;
    Apagado(led1);
    tiempo1;

    Encendido(led1);
    Encendido(led2);
    Encendido(led3);
    Encendido(led4);
    Encendido(led5);
    Encendido(led6);
    Encendido(led7);
    tiempo1;
    Apagado(led1);
    Apagado(led2);
    Apagado(led3);
    Apagado(led4);
    Apagado(led5);
    Apagado(led6);
    Apagado(led7);
    tiempo1;
    Encendido(led1);
    Encendido(led2);
    Encendido(led3);
    Encendido(led4);
    Encendido(led5);
    Encendido(led6);
    Encendido(led7);
    tiempo1;
    Apagado(led1);
    Apagado(led2);
    Apagado(led3);
    Apagado(led4);
    Apagado(led5);
    Apagado(led6);
    Apagado(led7);
    tiempo1;
    Encendido(led1);
    Encendido(led2);
    Encendido(led3);
    Encendido(led4);
    Encendido(led5);
    Encendido(led6);
    Encendido(led7);
    tiempo1;
    Apagado(led1);
    Apagado(led2);
    Apagado(led3);
    Apagado(led4);
    Apagado(led5);
    Apagado(led6);
    Apagado(led7);
    tiempo1;
    Serial.println("fin de la velocidad 1");
  }
  if(digitalRead (SW2) == HIGH){
    Serial.println("Velocidad 2");
    Encendido(led1);
    tiempo2;
    Apagado(led1);
    
    Encendido(led2);
    tiempo2;
    Apagado(led2);
    
    Encendido(led3);
    tiempo2;
    Apagado(led3);
    
    Encendido(led4);
    tiempo2;
    Apagado(led4);
    
    Encendido(led5);
    tiempo2;
    Apagado(led5);
    
    Encendido(led6);
    tiempo2;
    Apagado(led6);
    
    Encendido(led7);
    tiempo2;
    Apagado(led7);
    
    Encendido(led6);
    tiempo2;
    Apagado(led6);
    
    Encendido(led5);
    tiempo2;
    Apagado(led5);
    
    Encendido(led4);
    tiempo2;
    Apagado(led4);
    
    Encendido(led3);
    tiempo2;
    Apagado(led3);
    
    Encendido(led2);
    tiempo2;
    Apagado(led2);
    
    Encendido(led1);
    tiempo2;
    Apagado(led1);
    tiempo2;

    Encendido(led1);
    Encendido(led2);
    Encendido(led3);
    Encendido(led4);
    Encendido(led5);
    Encendido(led6);
    Encendido(led7);
    tiempo2;
    Apagado(led1);
    Apagado(led2);
    Apagado(led3);
    Apagado(led4);
    Apagado(led5);
    Apagado(led6);
    Apagado(led7);
    tiempo2;
    Encendido(led1);
    Encendido(led2);
    Encendido(led3);
    Encendido(led4);
    Encendido(led5);
    Encendido(led6);
    Encendido(led7);
    tiempo2;
    Apagado(led1);
    Apagado(led2);
    Apagado(led3);
    Apagado(led4);
    Apagado(led5);
    Apagado(led6);
    Apagado(led7);
    tiempo2;
    Encendido(led1);
    Encendido(led2);
    Encendido(led3);
    Encendido(led4);
    Encendido(led5);
    Encendido(led6);
    Encendido(led7);
    tiempo2;
    Apagado(led1);
    Apagado(led2);
    Apagado(led3);
    Apagado(led4);
    Apagado(led5);
    Apagado(led6);
    Apagado(led7);
    tiempo2;
    Serial.println("fin de la velocidad 2");
  }
}