#ifndef _MORSE_H
#define _MORSE_H
class Morse
{
  public:
    Morse(int pin);
    void dot();
    void dash();
    void c_space();
    void w_space();
    void T_a();
    void T_b();
    void T_c();
    void T_d();
    void T_e();
    void T_f();
    void T_g();
    void T_h();
    void T_i();
    void T_j();
    void T_k();
    void T_l();
    void T_m();
    void T_n();
    void T_o();
    void T_p();
    void T_q();
    void T_r();
    void T_s();
    void T_t();
    void T_u();
    void T_v();
    void T_w();
    void T_x();
    void T_y();
    void T_z();
  private:
    int _pin;
    int _dottime;
};
#endif /*_MORSE_H*/
