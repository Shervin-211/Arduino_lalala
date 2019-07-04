void setup()
{
  pinMode(0, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
}

int income = 0;
void loop()
{
  if(Serial.available()>0)
  {
    income = Serial.read();
    switch(income)
    {
      case'0':T_0();break;
      case'1':T_1();break;
      case'2':T_2();break;
      case'3':T_3();break;
      case'4':T_4();break;
      case'5':T_5();break;
      case'6':T_6();break;
      case'7':T_7();break;
      case'8':T_8();break;
      case'9':T_9();break;  
    }
    Serial.println(income);
  } 
}

void T_0()
{
    digitalWrite(0, LOW);
    delay(10);
	digitalWrite(4, LOW);  
  	digitalWrite(3, LOW);	
  	digitalWrite(2, LOW);	
  	digitalWrite(7, LOW);
 	digitalWrite(0, HIGH);
  	delay(10);
}

void T_1()
{
    digitalWrite(0, LOW);
    delay(10);
	digitalWrite(4, LOW);  
  	digitalWrite(3, LOW);	
  	digitalWrite(2, LOW);	
  	digitalWrite(7, HIGH);
 	digitalWrite(0, HIGH);
  	delay(10);
}

void T_2()
{
    digitalWrite(0, LOW);
    delay(10);
	digitalWrite(4, LOW);  
  	digitalWrite(3, LOW);	
  	digitalWrite(2, HIGH);	
  	digitalWrite(7, LOW);
 	digitalWrite(0, HIGH);
  	delay(10);
}

void T_3()
{
    digitalWrite(0, LOW);
    delay(10);
	digitalWrite(4, LOW);  
  	digitalWrite(3, LOW);	
  	digitalWrite(2, HIGH);	
  	digitalWrite(7, HIGH);
 	digitalWrite(0, HIGH);
  	delay(10);
}

void T_4()
{
    digitalWrite(0, LOW);
    delay(10);
	digitalWrite(4, LOW);  
  	digitalWrite(3, HIGH);	
  	digitalWrite(2, LOW);	
  	digitalWrite(7, LOW);
 	digitalWrite(0, HIGH);
  	delay(10);
}

void T_5()
{
    digitalWrite(0, LOW);
    delay(10);
	digitalWrite(4, LOW);  
  	digitalWrite(3, HIGH);	
  	digitalWrite(2, LOW);	
  	digitalWrite(7, HIGH);
 	digitalWrite(0, HIGH);
  	delay(10);
}

void T_6()
{
    digitalWrite(0, LOW);
    delay(10);
	digitalWrite(4, LOW);  
  	digitalWrite(3, HIGH);	
  	digitalWrite(2, HIGH);	
  	digitalWrite(7, LOW);
 	digitalWrite(0, HIGH);
  	delay(10);
}

void T_7()
{
    digitalWrite(0, LOW);
    delay(10);
	digitalWrite(4, LOW);  
  	digitalWrite(3, HIGH);	
  	digitalWrite(2, HIGH);	
  	digitalWrite(7, HIGH);
 	digitalWrite(0, HIGH);
  	delay(10);
}

void T_8()
{
    digitalWrite(0, LOW);
    delay(10);
	digitalWrite(4, HIGH);  
  	digitalWrite(3, LOW);	
  	digitalWrite(2, LOW);	
  	digitalWrite(7, LOW);
 	digitalWrite(0, HIGH);
  	delay(10);
}

void T_9()
{
    digitalWrite(0, LOW);
    delay(10);
	digitalWrite(4, HIGH);  
  	digitalWrite(3, LOW);	
  	digitalWrite(2, LOW);	
  	digitalWrite(7, HIGH);
 	digitalWrite(0, HIGH);
  	delay(10);
}