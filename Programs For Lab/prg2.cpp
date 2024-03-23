#include<iostream>
using namespace std;
class STUDENT{
    //privatising to avoid unwanted data usage
    private: 
        string USN;//if not using namespace put std::
        string Name;
        float Marks1,Marks2,Marks3;
    public:
        void read_data(){
            cout<<"Enter Student USN :)\n";
            cin>>USN;
            cout<<"Enter Student Name :)\n";
            cin>>Name;
            cout<<"Enter Marks for Test 1 :)\n";
            cin>>Marks1;
            cout<<"Enter Marks for Test 2 :)\n";
            cin>>Marks2;
            cout<<"Enter Marks for Test 3 :)\n";
            cin>>Marks3;
        }
        void print_data(){
            cout<<"Student USN :)"<<USN<<endl;
            cout<<"Student Name :)"<<Name<<endl;
            cout<<"Student Marks 1 :)"<<Marks1<<endl;
            cout<<"Student Marks 2 :)"<<Marks2<<endl;
            cout<<"Student Marks 3 :)"<<Marks3<<endl;
            cout<<"Avg of 2 best subject is :)"<<Find_Avg()<<endl;
        }
        float Find_Avg()//use capital letter for start of word and 
        //underscore to keep the program consistent
        {
            float avg, low=Marks3;
            if(Marks1<low) low=Marks1;
            if(Marks2<Marks3) low=Marks2;
            avg=(Marks1+Marks2+Marks3-low)/2;
            return avg;
        }
};
int main(){
    int N;//in program put N=10
    cout<<"Enter numeber of students";
    cin>>N;
    STUDENT a[N];
    for(int i=0;i<N;i++){
        cout<<"Enter the values for Students "<<i<<endl;
        a[i].read_data();//dont forget brackets
    }
    for(int i=0;i<N;i++){
        cout<<"The value of each Student is "<<N<<endl;
        a[i].print_data();
    }
}