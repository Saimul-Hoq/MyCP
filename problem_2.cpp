#include<iostream>
using namespace std;

class MyStack
{
    int stack[10];
    int size=10;
    int top=0;

public:

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
        if(top==size)
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
        if(isFull()==true)
        {
            return false;
        }   
        else
        {
            stack[top]=element;
            top++;
            return true;
        }
    }

    bool pop()
    {
        if(isEmpty()==true)
        {
            return false;
        }
        else
        {
            top--;
            return true;
        }
    }

    int getTopElemenmt()
    {
        if(isEmpty()==true)
        {
            return -99999;
        }
        else
        {
            return stack[top-1];
        }
    }

    void show()
    {
        for(int i=top-1; i>=0; i--)
        {
            cout<<stack[i]<<" ";
        }
        cout<<endl;
    }

};

int main()
{
    MyStack ms1, ms2;
    ms1.push(10);
    ms1.push(20);
    ms1.push(30);
    ms2.push(40);
    ms2.push(50);
    ms2.push(60);
    ms1.pop();
    ms2.pop();
    ms1.show();
    ms2.show();

    return 0;
}