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
        int n,x;
        cin>>n>>x;
        vector<int>ans(n+1, -1);
        set<int>trk;
        for(int i=1; i<=n; i++)
        {
            trk.insert(i);
        }
        for(int i=1; i<=n; i++)
        {
            bool check=true;
            int val=0;
            for(int k=0; k<32; k++)
            {
                if(((x>>k)&1)==0 && ((i>>k)&1)==1)
                {
                    check=false;
                }
                if(i==x)
                {
                    val = i;
                }
                else if(((x>>k)&1)==1 && ((i>>k)&1)==0)
                {
                    val+=(1<<k);
                }
            }
            
            if(check && val<=n)
            {
                ans[i] = val;
                trk.erase(val);
            }
        }

        for(int i=1; i<=n; i++)
        {
            if(ans[i]==-1)
            {
                ans[i] = *trk.begin();
                trk.erase(trk.begin());
            }
        }

        for(int i=1; i<=n; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

    
    
    return 0;
}