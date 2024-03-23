#include<iostream>
using namespace std;
class LIST{
    private: 
    class Node{
        public:
        Node *Next;
        int data;
    };
    Node *First;
    public:
    LIST(){
        First=NULL;
    }
    void Insert_F(int a){
        Node *t=new Node;
        t->data=a;
        t->Next=First;
        First=t;
    }
    int Delete_F(){
        if (First == nullptr) {
        // Handle case where the list is empty
        return -1; // Return a sentinel value to indicate an error
    }
        int r;
        Node *t=First;
        First=First->Next;
        r=t->data;
        delete t;
        return r;
    }
    void display(){
        Node *t;
        t=First;
        cout<<"List is :";
        while(t)
        {
            cout<<t->data<<" ";
            t=t->Next;
        }
        cout<<endl;
    }
};
int main(){
    LIST L;
    L.Insert_F(10);
    L.Insert_F(1);
    L.Insert_F(2);
    L.Insert_F(3);
    cout<<L.Delete_F()<<endl;
    L.display();
}