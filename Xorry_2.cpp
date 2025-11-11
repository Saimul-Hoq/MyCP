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
        int p=__lg(n);
        if((1<<p) == n)
        {
            cout<<1<<endl;
        }
        else
        {
            int q = ((~(1<<p))&n);
            int s = __lg(q);
            int cnt=0;
            for(int k=0; k<s; k++)
            {
                if(((n>>k)&1)==0)
                {
                    cnt++;
                }
            }

            long long ans = (1LL<<cnt);
            cout<<ans<<endl;
        }
    }

    
    
    return 0;
}