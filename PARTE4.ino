int SwitchA	= 6;
int SwitchR	= 7;
int Conteo	= 0;


void setup()
{
 pinMode (SwitchA, INPUT);
 pinMode (SwitchR, INPUT);
 Serial.begin(9600);
  Serial.println("Contador 0-99");
}

void loop()
{
  
if(digitalRead(SwitchA) == HIGH&&Conteo<=99){
    Serial.println(Conteo) ;
    Conteo = Conteo+1;
  	delay(100);
  if(Conteo >= 100){
   Serial.println("Haz llegado al Maximo");
    Conteo=100;
	}
  
  }
  if(digitalRead(SwitchR) == HIGH&&Conteo>=1){
    Serial.println(Conteo) ;
    Conteo = Conteo-1;
  	delay(100);
  if(Conteo <= 0){
   Serial.println("Haz llegado al Minimo");
    Conteo = 0;
	}
  
  }
  
}