#include<iostream>
#define SIZE 20
using namespace std;
template<class T>
class QUEUE{
    private:
    int front,rear;
    T queue[SIZE];
    public:
    QUEUE(){
        front=0;
        rear=0;
    }
    void enqueue(T x){
        if(front==SIZE-1){
            cout<<"Queue is full"<<endl;
            return;
        }
        queue[front]=x;
        front++;
    }
    T dequeue(){
        if(rear>=front){
            cout<<"No i/p left"<<endl;
            T a;
            return a;
        } 
        T x=queue[rear];
        rear++;
        return x;
    }
    void display(){
        cout<<"Displaying Queue Elements: [ ";
        for(int i=rear;i<front;i++)
        {
            cout<<queue[i]<<" ";
        }
        cout<<"]"<<endl;
    }
};
int main()
{
    QUEUE<double> q;
    q.enqueue(12);
    q.enqueue(13);
    q.enqueue(14);
    q.enqueue(15);
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    q.display();
}