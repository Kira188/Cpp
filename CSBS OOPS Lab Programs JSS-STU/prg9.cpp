#include<iostream>
using namespace std;
class OCTAL{
    private:
        int decimal;
        int octal;
    public:
        OCTAL(int x):decimal(x){
            //byheart conversion
            int decimal=x;
            octal=0;
            int placevalue=1;
            while(decimal>0){
                octal+=(decimal%8)*placevalue;
                decimal/=8;
                placevalue*=10;
            }
        }
        friend int operator+(OCTAL & h,int k);
        friend ostream & operator<<(ostream & os,OCTAL o)
        {
            os<<"Decimal number is "<<o.decimal<<" octal numer is "<<o.octal<<endl;
            return os;
        }
    };
 int operator+(OCTAL & h,int k){
    int x=h.decimal+k;
    OCTAL r(x);
    return r.octal;
}

int main(){
    OCTAL o1(55),o2(25),o3(30);
    cout<<o1<<o2<<o3;
    int a=o1+23;
    cout<<o1;
    cout<<a;

}