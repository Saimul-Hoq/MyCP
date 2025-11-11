#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int size=10;

struct Stack
{
    int top;
    int data[10];

    bool isEmpty()
    {
        if(top==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isFull()
    {
        if(top==10)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool push(int element)
    {
        if(isFull())
        {
            cout<<"Stack is Full.";
            return false;
        }
        else 
        {
            data[top]=element;
            top++;
            return true;
        }
    }

    int pop()
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty.\n";
            return -1;
        }
        else 
        {
            top--;
            return data[top];
        }
    }

    int peek()
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty.\n";
            return -1;
        }
        else
        {
            return data[top-1];
        }
    }

    void show()
    {
        for(int i=top-1; i>=0; i--)
        {
            cout<<data[i]<<" ";
        }
        cout<<endl;
    }
};



int main()
{
    Stack s1;

    s1.top=0;
    s1.peek();
    s1.push(10);
    cout<<s1.peek()<<endl;
    s1.push(20);
    s1.push(30);
    s1.push(40);
    cout<<s1.peek()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.peek()<<endl;
    s1.show();
    s1.push(100);
    s1.show();



    return 0;
}

