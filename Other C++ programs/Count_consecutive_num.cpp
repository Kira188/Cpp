#include<iostream>
using namespace std;
int main(){
    int rdvlu, nxtvlu, cnt;
    if (cin>>rdvlu){
        cnt=1;
        while (cin>>nxtvlu){
            if(rdvlu==nxtvlu){
                ++cnt;
            }   
            else{
                cout<<rdvlu<<" has count "<<cnt<<endl;
                rdvlu=nxtvlu;
                cnt=1;
            }
        }
        
        cout<<rdvlu<<" has count "<<cnt<<endl;
    }
    
        
    
    
    
}