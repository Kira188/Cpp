#include<iostream>
#include <cmath>
using namespace std;

void isPalindrome(int x) {
        int t=x;
        int sv=0;
        int i=0;
        while(t!=0){
        sv+=t%10*(int)(pow(10,i));
        i++;
        t=t/10;
        }
          /* if(sv==x)
           return sv;
           else return sv;
        */
        cout<<sv;
        
    }
    int main(){
        isPalindrome(921);
    }