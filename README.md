#寸箫闻的开源硬件作业
寸箫闻  18040100042 

##第一天

####学习内容
1.为什么要学习开源硬件
学习开源硬件使我们多了一个兴趣爱好，大学四年有可以“玩”的东西，可以激发我们的创造力和想象力。学习开源硬件，让我们更深刻的将软件和硬件结合到一起，增强了我们动手操作的能力和解决实际问题的能力。

2.如何学习开源硬件
根据自己的兴趣实际动手去实践，实现想法的过程就是一种学习。

3.IT行业最重要的能力——学习。
   想要学号计算机，尽早入门Linux。

4.学好英语，目前各大开源硬件的资料原版均为英文，纵使有中文翻译版本，但在翻译的过程中一些定义词义会有所改变，造成理解上的困难。

5.三个软件
![Arduino.png](https://upload-images.jianshu.io/upload_images/18621111-230d24e620b95780.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

![fritzing.png](https://upload-images.jianshu.io/upload_images/18621111-1e76a46edf55030e.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

![processsing.png](https://upload-images.jianshu.io/upload_images/18621111-bd02240f78f0665c.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

6.几个常用网站
[arduino官网](https://arduino.cc)

[gihub](https://github.com)

[fritzing官网](http://fritzing.org)

[tinkercad在线模拟](tinkercad.com)

##第二天
1.学习了Morse电码在Arduino上的应用；

2.学习了如何在GitHub建立存储库，如何上传文件；

3.以库函数的形式完成作业Morse电码的转换；

```
#include <Morse.h>

Morse morse(13);
int i = 0;
void setup()
{
  Serial.begin(9600);// opens serial port, sets data rate to 9600 bps
}


void loop() 
{
  // reply only when you receive data:
  if (Serial.available() > 0) 
  {
    // read the incoming byte:
    i = Serial.read();
    switch(i)
    {
    //check the satuation satisfied the condition
    case' ':morse.c_space();break;
    case'a':morse.T_a();break;
    case'b':morse.T_b();break;
    case'c':morse.T_c();break;
    case'd':morse.T_d();break;
    case'e':morse.T_e();break;
    case'f':morse.T_f();break;
    case'g':morse.T_g();break;
    case'h':morse.T_h();break;
    case'i':morse.T_i();break;
    case'j':morse.T_j();break;
    case'k':morse.T_k();break;
    case'l':morse.T_l();break;
    case'm':morse.T_m();break;
    case'n':morse.T_n();break;
    case'o':morse.T_o();break;
    case'p':morse.T_p();break;
    case'q':morse.T_q();break;
    case'r':morse.T_r();break;
    case's':morse.T_s();break;
    case't':morse.T_t();break;
    case'u':morse.T_u();break;
    case'v':morse.T_v();break;
    case'w':morse.T_w();break;
    case'x':morse.T_x();break;
    case'y':morse.T_y();break;
    case'z':morse.T_z();break;
    }
    //say what you got:
    Serial.print("I received: ");
    Serial.println(i, DEC);
  }
}
```
##第三天
1.学会使用Tinkercad在线模拟工具；
2.编写了小车的简单代码(驱动电机)；
3.学习了如何通过SSH密钥在本地建立与GitHub服务器的连接；
3.课后完成了对数码管的控制；
####小车代码
```
void setup()
{
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  Serial.begin(9600);
}

int income;
void loop()
{
  if(Serial.available()>0)
  {
    income=Serial.read();
  }
  switch(income)
  {
    case'f':
    	forward();break;
  	case'b':
    	backward();break;
  	case'l':
    	left();break;
  	case'r':
    	right();break;
  	case's':
    	stop();break;
  }
  
}

void forward()
{
 	digitalWrite(5,HIGH);
  	digitalWrite(9,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(10,LOW);
}
void backward()
{
 	digitalWrite(6,HIGH);
  	digitalWrite(10,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(9,LOW);
}
void left()
{
 	digitalWrite(5,HIGH);
  	digitalWrite(9,LOW);
    digitalWrite(6,LOW);
    digitalWrite(10,LOW);
}
void right()
{
 	digitalWrite(5,LOW);
  	digitalWrite(9,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(10,LOW);
}
void stop()
{
 	digitalWrite(5,LOW);
  	digitalWrite(9,LOW);
    digitalWrite(6,LOW);
    digitalWrite(10,LOW);
}
```
##第四天
学习了如何借助CD4511的锁存器控制多个数码管显示不同内容
![寄存器.png](https://upload-images.jianshu.io/upload_images/18621111-f7bae88c00f3a011.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

####代码
```
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
```


##***课程总结***
短短四天的开源硬件实战课使我学到了很多知识，让我对arduino有了更多的了解。最重要的是是我感受到了开源硬件的乐趣所在，很多生活中的创新发明都离不开开源硬件。此次课程还使我真正接触到了Linux系统，注册了全球最大的开源社区GitHub，希望今后我能熟悉Linux系统，对计算机有更深层次的了解。此次课程老师的教育也使我意识到了持续学习对于人自身发展的重要性。我的专业是机械设计制造及其自动化，曾经我认为我的专业并不需要掌握太多的计算机知识，在大一上学期学习完C语言之后，便停滞了对于编程的学习，但此次课程让我意识到：学习是无止境的，在将来，编程会越来越普及，只有不断学习，跟上时代的步伐，才能使自己在改革的浪潮中继续前进，没有什么知识是学习了而对自己无用的。所以我认为这节课对我来说很有意义，它让我明白了学习的重要性。无论是开源硬件，还是计算机，还是其他的事物，永远都有进步的空间，只要你愿意，你可以一直学习下去，从入门到精通，从小白到大神。阶段的跨越永远不是偶然的，而是你一步一步积累而来的，所以在今后的生活中，唯有不断地学习（并非指单纯的理论知识学习）才是保持自己的思维活跃，才能使自己不断进步。
最后，感谢老师连续四天不知疲惫的为我们上课，课后还在微信、QQ群里给我们答疑解惑。很开心选了老师的课，让我学到了这么多。

