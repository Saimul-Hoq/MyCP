#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2==0)
        {
            for(int i=1; i<=n-2; i++)
            {
                cout<<"3";
            }
            cout<<"66"<<endl;
        }
        else if(n%2==1 && n>3)
        {
            for(int i=1; i<=n-5; i++)
            {
                cout<<"3";
            }
            cout<<"36366"<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    
    
    return 0;
}