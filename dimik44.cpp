#include<iostream>
using namespace std;
#define endl "\n"


unsigned long long fact(int n)
{
    unsigned long long factor=1;
    for(int i=1; i<=n; i++)
    {
        factor = factor*i;
    }

    return factor;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i;
        cin>>i;

        for(int n=0; n<=i; n++)
        {
            for(int r=0; r<=n; r++)
            {
                int nr=(n-r);
                unsigned long long result = fact(n)/(fact(r)*fact(nr));
                if(r!=0)
                {
                    cout<<" ";
                }
                cout<<result;
            }

            cout<<endl;
        }
        cout<<endl;
    }

    return 0;
}