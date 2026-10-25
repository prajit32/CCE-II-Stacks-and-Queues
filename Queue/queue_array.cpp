#include <iostream>
using namespace std;

const int MAX=5;

class queue
{
private:
    int a[MAX];
    int front;
    int rear;

public:
    queue()
    {
        front=-1;
        rear=-1;
    }

    int empty(void)
    {
        if (front==-1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int full(void)
    {
        if(rear==MAX-1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    void enqueue(int x)
    {
        if (full())
        {
            cout << "Queue is full"<<endl;
            return;
        }
        if (front==-1 && rear==-1)
        {
            front++;
            rear++;
        }
        else
        {
            rear++;
        }
        a[rear] = x;
    }

    int dequeue(void)
    {
        if (empty())
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        int x=a[front];
        if (front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front++;
        }
        return x;
    }

    int peek(void)
    {
        if (empty())
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return a[front];
    }

    void display(void)
    {
        if (empty())
        {
            cout<<"Queue is empty"<<endl;
            return;
        }
        cout<<"Queue elements:"<<endl;
        for (int i=front;i<=rear;i++)
        {
            cout<< a[i]<<endl;
        }
    }
};

int main()
{
    int x;
    queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.display();
    if (!q.empty())
    {
        x = q.dequeue();
        cout<<"Removed: "<<x<<endl;
    }
    q.display();
    x = q.peek();
    cout<<"Front element is: "<<x<<endl;
    return 0;
}

/*
PS D:\Prajit_Karpe> cd "d:\Prajit_Karpe\" ; if ($?) { g++ Queue_array.cpp -o Queue_array } ; if ($?) { .\Queue_array }
Queue elements:
10
20
30
40
50
Removed: 10
Queue elements:
20
30
40
50
Front element is: 20

PS D:\Prajit_Karpe>
*/
