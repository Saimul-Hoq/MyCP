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
        int n;
        cin>>n;
        int ans = (~0);
        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            ans = ans&val;
        }
        cout<<ans<<endl;
    }

    
    
    return 0;
}