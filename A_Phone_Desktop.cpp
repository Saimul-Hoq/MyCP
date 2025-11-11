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
        int x,y;
        cin>>x>>y;
        int n = ceil(1.0*y/2);
        int extra = 15*n - y*4;
        x-=extra;
        if(x<=0)
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<n+ceil(1.0*x/15)<<endl;
        }
    }

    
    
    return 0;
}