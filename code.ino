float temp; 
float vout; 
float vout1; 
int LED = 12; 
int gasSensor; 
int piezo = 7; 
int pirsensor =0;
int buzzer=6;
int force=10;
int ldr_pin = A5;
int led=3;
  int ldr_value;
  
  int light = 5;
void setup() 
{ 
pinMode(A0,INPUT); 
pinMode(A1, INPUT); 
pinMode(LED,OUTPUT); 
pinMode(piezo,OUTPUT);
pinMode(13,OUTPUT);
pinMode(2,INPUT);
pinMode(A2,INPUT);
pinMode(3,OUTPUT);
Serial.begin(9600);
  pinMode(light, OUTPUT); pinMode(ldr_pin, INPUT);
} 
void loop() 
{ 
vout=analogRead(A1); 
vout1=(vout/1023)*5000; 
temp=(vout1-500)/10; 
gasSensor=analogRead(A0); 
if (temp>=70) 
{ 
digitalWrite(LED,HIGH); 
 Serial.println("Temperature HIGH"); 
} 
else 
{ 
digitalWrite(LED,LOW); 
} 
if (gasSensor>=100) 
{ 
digitalWrite(piezo,HIGH); 
} 
else 
{ 
digitalWrite(piezo,LOW); 
} 
Serial.print("in DegreeC= ");

			 
Serial.print(" "); 

Serial.print(temp); 
Serial.print("\t"); 
Serial.print("GasSensor= "); 
Serial.print(" "); 
Serial.print(gasSensor); 
Serial.println(); 
delay(1000); 
pirsensor=digitalRead(2);

if(pirsensor==HIGH)
{
  digitalWrite(13,HIGH);
      	Serial.println("motion sensed");

}
else
{
  digitalWrite(13,LOW);
}
 delay(10);
force=analogRead(A2);
  if(force>100)
  {
    	Serial.println("lift is overloaded");
    	analogWrite(3,force);
    	 
   } 
  else 
  { 	
		analogWrite(3,0);
	}   

delay(25);

  ldr_value = analogRead(ldr_pin);
    if (ldr_value > 512)
      digitalWrite(light, 0);
    else
      digitalWrite(light, 1);
 
  
}
