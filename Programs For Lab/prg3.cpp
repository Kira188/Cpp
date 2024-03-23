#include<iostream>
using namespace std;
class COMPLEX{//keep class names in caps
    private:
        float real;
        float imaginary;
    public:
        COMPLEX(float real=0,float imaginary=0):real(real),imaginary(imaginary){}//contructor
        COMPLEX ADD(int a, const COMPLEX & S2)
        {
            COMPLEX S0;//create S0 to reutrn it
            S0.real=S2.real+a;
            S0.imaginary=S2.imaginary;
            return S0;
        }
        COMPLEX ADD(const COMPLEX & S1, const COMPLEX & S2)
        {
            COMPLEX S0;//create S0 to reutrn it
            S0.real=S1.real+S2.real;
            S0.imaginary=S1.imaginary+S2.imaginary;
            return S0;
        }
        void display(){
            cout<<"Result is :"<<real<<"+"<<imaginary<<"i"<<endl;
        }
};
int main()
{
    int real=12;
    COMPLEX ob1(23,12),ob2(13,19);//in exam enter real and
    //imaignaruy and put in consrtuctor
    COMPLEX ob3;
    ob3=ob1.ADD(real,ob1);
    ob3.display();
    ob3=ob1.ADD(ob1,ob2);
    ob3.display();
}