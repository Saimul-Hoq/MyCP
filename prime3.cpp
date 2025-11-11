#include<iostream>
using namespace std;

void primefunc(int n)
{
    int i=2, count=0;

    if(n>1)
    {
        for(int i=2; i<n; i++)
        {
            if(n%i==0)
            {
                count=1;
            }
        }
        if(count==0)
        {
            cout<<n<<" is a Prime number.";
        }
        else
        {
            cout<<n<<" is not a Prime number.";
        }


    }
    else
    {
        cout<<n<<" is not a Prime number.";
    }
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    primefunc(n);


    
    return 0;
    
}