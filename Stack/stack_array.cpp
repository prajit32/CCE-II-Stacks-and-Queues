#include<iostream>
using namespace std;

const int MAX = 5;
class stack
{
    private:
    int a[MAX];
    int top;

    public:
    stack()
    {
        top=-1;
    }
    
    void push(int x)
    {
        top=top+1;
        a[top]=x;
    }

    int pop()
    {
        int x = a[top];
        top=top-1;
        return(x);
    }

    int full()
    {
        if(top==MAX-1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int empty()
    {
        if(top==-1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    void display()
    {
        for (int i=top;i>=0;i--)
        {
            cout<<a[i]<<endl;
        }
        

    }
    int peek()
    {
        return a[top];
    }
};

int main()
{
    stack s;
    cout<<"Old Stack"<<endl;
    if(!s.full())s.push(10);
    if(!s.full())s.push(20);
    if(!s.full())s.push(30);
    if(!s.full())s.push(40);
    if(!s.full())s.push(50);
    s.display();
    cout<<"New Stack (After Popping and Pushing)"<<endl;
    if(!s.empty())s.pop();
    if(!s.full())s.push(60);
    if(!s.full())s.push(70);
    s.display();
    cout<<"Top Element of Stack is: "<<s.peek()<<endl;
}

/*
PS C:\Users\Student> cd "d:\Prajit_Karpe\" ; if ($?) { g++ stack_using_array.cpp -o stack_using_array } ; if ($?) { .\stack_using_array }
Old Stack
50
40
30
20
10
New Stack (After Popping and Pushing)
60
40
30
20
10
Top Element of Stack is: 60
PS D:\Prajit_Karpe> 
*/
