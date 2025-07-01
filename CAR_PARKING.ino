int count1=0;
int count2=50;
int space=0;
void setup() {
  pinMode(D1,INPUT);
  pinMode(D2,INPUT);
  Serial.begin(9600);
  
}

void loop() {
  int x = digitalRead(D1);
  int y = digitalRead(D2);
  if(x==LOW)
  {
    Serial.println(" car enter ");
    while(x==LOW)
    {
      x=digitalRead(D1);
      delay(100);
    }
    count1++;
    Serial.println(count1);
    
  }
  else if(y==LOW)
  {
     Serial.println("requied space");
    while(y==LOW)
    {
      y=digitalRead(D2);
      delay(100);
    }
    space=count2-count1;
    Serial.println(space);
    
  }
  
  else if(count1==50)
  {
    Serial.println("no space to park");
    delay(100);
    
  }
  else if(count1>50)
  {
    count1=0;
    Serial.println(count1);
  }
 
    
    
  }
