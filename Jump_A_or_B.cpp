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
        int n,m,a,b;
        cin>>n>>m>>a>>b;
        int x;
        if((abs(m-b*n)%abs(a-b))!=0)
        {
            cout<<"No"<<endl;
        }
        else
        {
            x = (m-b*n)/(a-b);
            if(x>=0 && x<=n)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
    }

    
    
    return 0;
}