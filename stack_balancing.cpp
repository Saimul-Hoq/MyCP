#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

//int size=10;

struct Stack
{
    int top;
    char *data;

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
            //cout<<"Stack is Full.";
            return false;
        }
        else 
        {
            data[top]=element;
            top++;
            return true;
        }
    }

    char pop()
    {
        if(isEmpty())
        {
            //cout<<"Stack is Empty.\n";
            return -1;
        }
        else 
        {
            top--;
            return data[top];
        }
    }

    char peek()
    {
        if(isEmpty())
        {
            //cout<<"Stack is Empty.\n";
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

bool isBalanced(Stack *s1, string str)
{
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]=='(')
        {
            s1->push(str[i]);
        }
        else if(str[i]=='{')
        {
            s1->push('{');
        }
        else if(str[i]=='[')
        {
            s1->push('[');
        }
        else if(str[i]==')')
        {
            if(s1->peek()!='(')
            {
                return false;
            }
            else
            {
                s1->pop();
            }
        }
        else if(str[i]=='}')
        {
            if(s1->peek()!='{')
            {
                return false;
            }
            else
            {
                s1->pop();
            }
        }
        else if(str[i]==']')
        {
            if(s1->peek()!='[')
            {
                return false;
            }
            else
            {
                s1->pop();
            }
        }
    }
    if(s1->isEmpty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    string str;
    cin>>str;
    int size=str.length();

    Stack s1;
    s1.top=0;
    s1.data = (char *)malloc(sizeof(char)*size);
   
    if(isBalanced(&s1, str))
    {
        cout<<"Balanced"<<endl;
    }
    else
    {
        cout<<"NOT Balanced"<<endl;
    }
    

    
    return 0;
}

