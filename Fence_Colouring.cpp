#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

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
        vector<int>v(n+1, 0);
        int mxe=0, mxc=1;
        for(int i=1; i<=n; i++)
        {
            int val;
            cin>>val;
            v[val]++;
        }
        for(int i=1; i<=n; i++)
        {
            if(mxc<v[i])
            {
                mxe = i;
                mxc = v[i];
            }
        }

        int ans = n;
        if(mxc==1)
        {
           ans = n-1;
        }
        else
        {
            if(mxe==1)
            {
                ans = n - mxc;
            }
            else
            {
                ans = 1 + (n-mxc);
            }
        }

        cout<<ans<<endl;
    }


    
    
    return 0;
}