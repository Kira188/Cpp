#include<iostream>
using namespace std;
void fun(int &a,int &b){
    int temp;
    int c;
    temp=a;
    a=b;
    c=temp;
    b=temp;
} 
int main(){
    int a=10,b=20,c=30;
    cout<<a<<" "<<b<<" "<<c<<endl;
    fun(a,b);
    cout<<a<<" "<<b<<" "<<c<<endl;
}