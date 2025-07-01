int trig=D6;
int echo=D7;
void setup() {
  
 pinMode(trig,OUTPUT); 
 pinMode(echo,INPUT);
  pinMode(D0,OUTPUT);
 Serial.begin(9600);
}

void loop() {
  digitalWrite(trig,LOW);
  delayMicroseconds(2);    //2 micro sec high
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);     //10micro sec high
  digitalWrite(trig,LOW);  // to make it low
                           //complete one loop called one trig

  long T =pulseIn(echo,HIGH);
  int dis=0.034 *(T / 2);
  Serial.println(dis);
   delay(300);

   if(dis<30 && dis>15)
   {
    Serial.println("OBSTRACAL IS AWAY FROM THE CAR  ");

    
    digitalWrite(D0,LOW);
    delay(1000);
    digitalWrite(D0,HIGH);
    delay(1000);
    
   }
   else if (dis<16 && dis>1)
   {

    Serial.println("OBSTRACAL IS NEAR TO THE CAR ");
    digitalWrite(D0,LOW);
    delay(400);
    digitalWrite(D0,HIGH);
    delay(400);
    
   }
}
