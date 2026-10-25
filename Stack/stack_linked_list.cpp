#include <iostream>
using namespace std;

class node {
public:
    int data;
    node *next;

    node(int x) {
        data = x;
        next = NULL;
    }
};

class stack {
private:
    node *top;

public:
    stack() {
        top = NULL;
    }

    int empty() {
        if (top == NULL) {
            return 1;
        } else {
            return 0;
        }
    }

    void push(int x) {
        node *p = new node(x);
        p->next = top;
        top = p;
    }

    int pop(void) {
        int x = top->data;
        node *p = top;
        top =top->next;
        delete p;
        return x;
    }

    int peek() {
        return top->data;
    }

    void display() {
        node *q=top;
        while (q!=NULL) {
            cout<<endl<<q->data;
            q=q->next;
        }
    }
};

int main() {
    int x;
    stack s;
    cout<<"Initial list:"<<endl;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.display();
    if (!s.empty()) {
        x = s.pop();
        cout<<endl<<"Removed "<<x<<endl;
    }
    s.display();
    x=s.peek();
    cout<<endl<<"Top Element is:"<<x<<endl;

    return 0;
}

/*
PS D:\Prajit_Karpe> cd "d:\Prajit_Karpe\" ; if ($?) { g++ Stack_link.cpp -o Stack_link } ; if ($?) { .\Stack_link }

Initial list:

60
50
40
30
20
10
Removed 60

50
40
30
20
10
Top Element is:50

PS D:\Prajit_Karpe>
*/
