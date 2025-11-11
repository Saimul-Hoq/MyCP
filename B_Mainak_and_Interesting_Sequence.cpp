#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if(m<n || (n%2==0 && m%2==1))
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
            if(n%2==1)
            {
                for(int i=1; i<=(n-1); i++)
                {
                    cout<<1<<" ";
                }
                cout<<m-n+1<<endl;
            }
            else
            {
                for(int i=1; i<=(n-2); i++)
                {
                    cout<<1<<" ";
                }
                int p = (m-n+2)/2;
                cout<<p<<" "<<p<<endl;
            }
        }
    }
    
    
    return 0;
}