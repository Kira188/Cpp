#include<iostream>
using namespace std;

class DLIST {
private:
    class Node {
    public:
        Node* Next;
        Node* Previous;
        int data;
    };
    Node* first;
public:
    DLIST() {
        first = NULL;
    }

    int length(Node* p) {
        int count = 0;
        while (p) {
            p = p->Next;
            count++;
        }
        return count;
    }

    void insert_n(int val, int pos) {
        if (pos < 0 || pos > length(first)) {
            cout << "Not a valid Position" << endl;
            return;
        }
        Node* t = new Node;
        t->data = val;
        if (pos == 0) {
            t->Next = first;
            if (first) first->Previous = t; // Check if first is not NULL before accessing Previous
            t->Previous = NULL;
            first = t;
        }
        else {
            Node* s = first;
            for (int i = 0; i < pos - 1; i++) {
                s = s->Next;
            }
            t->Next = s->Next;
            if (s->Next) s->Next->Previous = t;
            s->Next = t;
            t->Previous = s;
        }
    }

    void display() {
        Node* t = first; // Start from first
        cout << "Linked List is: [ ";
        while (t != NULL) { // Check if t is not NULL
            cout << t->data << " ";
            t = t->Next;
        }
        cout << "]" << endl;
    }
};

int main() {
    DLIST d;
    d.insert_n(23, 0);
    d.insert_n(24, 1);
    d.insert_n(25, 0);
    d.display();
    return 0;
}
