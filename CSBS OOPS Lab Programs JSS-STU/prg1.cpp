#include<iostream>
using namespace std;
class EMPLOYEE{
    //privatising to avoid unwanted data usage
    private: 
        int Employee_number;
        string Employee_name;
        float Basic, DA, IT, Net_Sal;
    public:
        void read_data(){
            cout<<"Enter Employee Number :)\n";
            cin>>Employee_number;
            cout<<"Enter Employee Name :)\n";
            cin>>Employee_name;
            cout<<"Enter Basic Salary :)\n";
            cin>>Basic;
            DA=(0.52)*Basic;
            IT=(0.3)*(Basic+DA);
        }
        void print_data(){
            cout<<"Employee Number :)"<<Employee_number<<endl;
            cout<<"Employee Name :)"<<Employee_name<<endl;
            cout<<"Basic Salary :)"<<Basic<<endl;
            cout<<"Daily Allowance :)"<<DA<<endl;
            cout<<"Income Tax :)"<<IT<<endl;
            //execute the netsalary function before printing
            //otherwise jargon
            cout<<"Net Salary :)"<<Net_Salary()<<endl;
        }
        float Net_Salary()
        {
            Net_Sal=Basic+DA;
            return Net_Sal;
        }
};
int main(){
    int N;
    cout<<"Enter the numeber of employees";
    cin>>N;
    EMPLOYEE a[N];
    for(int i=0;i<N;i++){
        cout<<"Enter the values for employee "<<i<<endl;
        a[i].read_data();//dont forget brackets
    }

    for(int i=0;i<N;i++){
        cout<<"The value of each employee is "<<N<<endl;
        a[i].print_data();
    }
}