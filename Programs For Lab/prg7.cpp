#include<iostream>
using namespace std;
class DATE{
    private:
    int dd,mm,yy;
    public:
        
        DATE(int d,int m,int y):dd(d),mm(m),yy(y){}
        friend int operator-(DATE & d1,DATE & d2);
        friend DATE operator+(DATE & d1,int days);
        friend ostream & operator<<(ostream& os,const DATE & d);
};
int operator-(DATE & d1,DATE & d2){
    int days1 = d1.yy * 365 + d1.mm * 30 + d1.dd;
    int days2 = d2.yy * 365 + d2.mm * 30 + d2.dd;
    return days1-days2;
}
DATE operator+(DATE & d1,int days){
    DATE result = d1;
    result.dd += days;
    while (result.dd > 30) {
        result.dd -= 30;
        result.mm++;
    }
    while (result.mm > 12) {
        result.mm -= 12;
        result.yy++;
    }
    return result;
}
ostream & operator<<(ostream& os,const DATE & d){
    os<<"Date is "<<d.dd<<"/"<<d.mm<<"/"<<d.yy<<"/"<<endl;
    return os;
}
void get_date(int d, int m,int y){

}
 bool isValid(int d,int m,int y) {
        if (y < 0)
            return false;
        if (m < 1 || m > 12)
            return false;
        if (d < 1 || d > 30) // Assuming each month has 30 days
            return false;
        return true;
    }
int main(){
    int d1,d2,m1,m2,y1,y2;
    do{cout<<"Enter 2 valid dates";
    cin>>d1>>m1>>y1>>d2>>m2>>y2;
    //dont forget 2 brakets
    }while((!isValid(d1,m1,y1)&&!isValid(d2,m2,y2)));
    
    DATE dd1(d1,m1,y1),dd2(d2,m2,y2);
    cout<<dd1<<dd2;
    DATE d3(0,0,0);
    cout<<"days "<<dd2-dd1<<endl;
    d3=dd1+(dd2-dd1);
    cout<<d3;
    

}