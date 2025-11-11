#include<iostream>
using namespace std;
#define endl "\n"


int size=200000;


struct MyStack
{
    int stack[200000];
    int top=0;



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

    int peek()
    {
        if(isEmpty())
        {
            return 1000000001;
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
    MyStack pint[1000000001], nint[1000000001], s[27];

    int parr[200000], narr[200000], sarr[200000];

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int arr[n], num, p=0, na=0;

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            
            if(arr[i]>=0)
            {
                pint[arr[i]].push(i);
                if(pint[arr[i]].top==2)
                {
                    parr[p]=arr[i];
                    p++;
                }
            }
            else
            {
                num=-arr[i];
                nint[num].push(i);
                if(nint[num].top==2)
                {
                    narr[na]=num;
                    na++;
                }
            }
        }

        pint[3].show();

    }

    return 0;
    
}