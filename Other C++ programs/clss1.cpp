#include<iostream>
using namespace std;
class rec
{
    public:
    int length;
    int breadth;
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length*breadth);
    }
};
int main()
{
    int are;
    rec a;
    a.length=10;
    a.breadth=10;
    are=a.area();
    cout<<are;
    cout<<"Hello World";
   
}