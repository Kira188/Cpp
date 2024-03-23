#include<iostream>
using namespace std;

class DATE
{
private:int day,month,year;
    int a[13];
    long double convd;
public:
    void dateget();
    void revdate(long double conv);
    DATE(int d=1,int m=1,int y=1)
    {
        day=d;
        month=m;
        year=y;
        a[1]=a[3]=a[5]=a[7]=a[8]=a[10]=a[12]=31;
        a[4]=a[6]=a[9]=a[11]=30;
        a[2]=28;
        dateget();
    }
    
    friend DATE operator+(DATE &D1,DATE &D2);
    friend DATE operator-(DATE &D1,DATE &D2);
    friend ostream& operator<<(ostream&,DATE&);
};
ostream& operator<<(ostream &out,DATE &d1)
 {
      out<<d1.day<<"/"<<d1.month<<"/"<<d1.year<<endl;
      return out;
 } 
void DATE::dateget(){
    int mon=1;
     convd=(long double)year*365+year/4;
     if(year%4>0)
     convd++;
     while(mon!=month)
     {
             convd+=a[mon];
             if(year%4==0 && mon==2)
             convd++;
             mon++;
     }
     convd+=day;
}
void DATE::revdate(long double conv){
    year=(int)conv/365;
    int remainingDays = (int)conv % 365;
    month = 1;
    while (remainingDays >= a[month]) {
        remainingDays -= a[month];
        ++month;
    }
    int day = remainingDays;

}
DATE operator+(DATE &D1,DATE &D2){
    DATE D3;
    D1.dateget();
    D2.dateget();
    D3.convd=D1.convd+D2.convd;
    D3.revdate(D3.convd);
    return D3;
}
DATE operator-(DATE &D1,DATE &D2){
    DATE D3;
    D1.dateget();
    D2.dateget();
    D3.convd=D1.convd-D2.convd;
    D3.revdate(D3.convd);
    return D3;
}
int main(){
    DATE D1(11,9,7);
    DATE D2(11,9,7);
    DATE D3;
    D3=D1+D2;
    cout<<D3;
}

