#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,m;
        cin>>n>>m;

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=i; j++)
            {
                if(j==i)
                {
                    cout<<m;
                }
                else
                {
                    cout<<m<<" ";
                }
            }
            cout<<endl;
        }

        for(int i=n-1; i>=1; i--)
        {
            for(int j=1; j<=i; j++)
            {
                if(j==i)
                {
                    cout<<m;
                }
                else
                {
                    cout<<m<<" ";
                }
            }
            cout<<endl;
        }

        cout<<endl;
    }

    return 0;
}