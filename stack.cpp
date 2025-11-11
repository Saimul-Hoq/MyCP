#include<iostream>
using namespace std;

/*int stack[5], top=0;

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
    if(top==5)
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
    if(isEmpty())
    {
        return false;
    }
    else
    {
        top--;
        return true;
    }
}

int getTopElement()
{
    if(isEmpty())
    {
        return -999999999;
    }
    else
    {
        return stack[top-1];
    }
}

void show()
{
    if(isEmpty())
    {
        cout<<"Cannot show. Stack is Empty.";
    }
    else
    {
        for(int i=top-1; i>=0; i--)
        {
            cout<<stack[i]<<endl;;
        }
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    pop();
    show();
    cout<<isEmpty()<<endl;
    cout<<isFull()<<endl;
    cout<<getTopElement()<<endl;

    return 0;

}*/

//Object Oriented Approach:
class MyStack
{
    int stack[5];

public:

    int top;

    int seeTop()
    {
        return top;
    }
    
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
        if(top==5)
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
        if(isEmpty())
        {
            return false;
        }
        else
        {
            top--;
            return true;
        }
    }

    int getTopElement()
    {
        if(isEmpty())
        {
            return -999999999;
        }
        else
        {
            return stack[top-1];
        }
    }

    void show()
    {
        if(isEmpty())
        {
            cout<<"Cannot show. Stack is Empty.";
        }
        else
        {
            for(int i=top-1; i>=0; i--)
            {
                cout<<stack[i]<<endl;;
            }
        }
    }

};

int main()
{
    MyStack ms1, ms2;
    
    ms1.top=0;
    ms2.top=0;

    cout<<"Top = "<<ms1.seeTop()<<endl;
    ms1.push(10);
    cout<<"Top = "<<ms1.seeTop()<<endl;

    ms1.push(20);
    cout<<"Top = "<<ms1.seeTop()<<endl;

    ms1.pop();
    ms1.show();

    ms2.push(11);
    ms2.push(22);
    ms2.pop();
    ms2.show();
    return 0;
}