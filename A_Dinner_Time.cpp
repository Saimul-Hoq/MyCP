#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,p,q;
        cin>>n>>m>>p>>q;
        if(n%p!=0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            int x = n/p;
            x*=q;
            if(x==m)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }

        }
    }
    
    
    return 0;
}