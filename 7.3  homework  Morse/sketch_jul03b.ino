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
