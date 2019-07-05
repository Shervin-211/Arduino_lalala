void setup()
{
  pinMode(4, OUTPUT);//INPUT 1
  pinMode(5, OUTPUT);//INPUT 2
  pinMode(6, OUTPUT);//INPUT 3
  pinMode(7, OUTPUT);//INPUT 4
  
  pinMode(8, OUTPUT);//NO.4
  pinMode(9, OUTPUT);//NO.3
  pinMode(10, OUTPUT);//NO.2
  pinMode(11, OUTPUT);//NO.1
}

//显示芯片型号
void loop()
{
  No1();
  T_4();
  Closeall();
  delay(20);
  
  No2();
  T_5();
  Closeall();
  
  No3();
  T_1();
  Closeall();
  delay(20);
  
  No4();
  T_1();
  Closeall();
}

void Closeall()
{
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
}

void No1()
{
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
}

void No2()
{
  digitalWrite(11, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
}

void No3()
{
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
}

void No4()
{
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, LOW);
}

void T_0()
{
  digitalWrite(7, LOW);  
    digitalWrite(6, LOW); 
    digitalWrite(5, LOW); 
    digitalWrite(4, LOW);
}

void T_1()
{
  digitalWrite(7, LOW);  
    digitalWrite(6, LOW); 
    digitalWrite(5, LOW); 
    digitalWrite(4, HIGH);
}

void T_2()
{
  digitalWrite(7, LOW);  
    digitalWrite(6, LOW); 
    digitalWrite(5, HIGH);  
    digitalWrite(4, LOW);
}

void T_3()
{
  digitalWrite(7, LOW);  
    digitalWrite(6, LOW); 
    digitalWrite(5, HIGH);  
    digitalWrite(4, HIGH);
}

void T_4()
{
  digitalWrite(7, LOW);  
    digitalWrite(6, HIGH);  
    digitalWrite(5, LOW); 
    digitalWrite(4, LOW);
}

void T_5()
{
  digitalWrite(7, LOW);  
    digitalWrite(6, HIGH);  
    digitalWrite(5, LOW); 
    digitalWrite(4, HIGH);
}

void T_6()
{
  digitalWrite(7, LOW);  
    digitalWrite(6, HIGH);  
    digitalWrite(5, HIGH);  
    digitalWrite(4, LOW);
}

void T_7()
{
  digitalWrite(7, LOW);  
    digitalWrite(6, HIGH);  
    digitalWrite(5, HIGH);  
    digitalWrite(4, HIGH);
}

void T_8()
{
  digitalWrite(7, HIGH);  
    digitalWrite(6, LOW); 
    digitalWrite(5, LOW); 
    digitalWrite(4, LOW);
}

void T_9()
{
  digitalWrite(7, HIGH);  
    digitalWrite(6, LOW); 
    digitalWrite(5, LOW); 
    digitalWrite(4, HIGH);
}
