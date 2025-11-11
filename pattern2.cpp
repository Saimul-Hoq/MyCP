#include<iostream>
using namespace std;



void pattern13_2(int n)
{
    int p=1, k=n-1;
    while(n--)
    {
        for(int i=1; i<=k; i++)
        {
            cout<<" ";
        }
        k--;
        
        for(int i=1; i<=p; i++)
        {
            cout<<i;
        }
        p+=2;        
        cout<<endl;
    }


    k+=2;
    p-=4;

    while(p>0)
    {
        for(int i=1; i<=k; i++)
        {
            cout<<" ";
        }
        k++;
        for(int i=1; i<=p; i++)
        {
            cout<<i;
        }
        p-=2;
        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    
    pattern13_2(n);

    return 0;
}
