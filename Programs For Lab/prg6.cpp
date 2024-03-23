#include<iostream>
#define SIZE 100
using namespace std;
class STACK{
    private:
        int top;
        int arr[SIZE];
    public:
        STACK(){
            top=-1;
        }
        bool isFull(){
            return (top==SIZE-1);
        }
        bool isEmpty(){
            return (top==-1);
        }
        
        friend ostream& operator<<(ostream & os,const STACK s1);
        friend STACK operator+(STACK &s1,int a);
        STACK operator-(){
            if(isEmpty()) {
            cout<<"Stack is Empty";
            return *this;
            } 
            cout<<"Popped Element is:"<<arr[top-1]<<endl;
            top--;
            return *this;
        }
};
        
        ostream& operator<<(ostream & os,const STACK s1){
            os<<"The Stack is:";
            for(int i=0;i<s1.top;i++){
                os<<" "<<s1.arr[i];
            }
            os<<endl;
            return os;
        }
        STACK operator+(STACK & s1,int a){
            if(s1.isEmpty()) s1.top++;
            if(s1.isFull()){
            cout<<"Stack is full";
            return s1;
            } 
            s1.arr[s1.top]=a;
            s1.top++;
            return s1;
        }
        

        int main(){
            STACK s1;
            s1=s1+3;
            s1=s1+4;
            s1=s1+5;
            s1=s1+6;
            s1=s1+7;
            s1=-s1;
            cout<<s1;
        }