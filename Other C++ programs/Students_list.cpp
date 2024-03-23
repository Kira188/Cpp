#include<iostream>
using namespace std;
class stu{
    private:
    int roll;
    string name;
    float m1,m2,m3;
    stu(int r,string n,float a,float b,float c){
        roll=r;
        name=n;
        m1=a;
        m2=b;
        m3=c;
    }
    float total_marks(){
        return m1+m2+m3;
        
    }
};