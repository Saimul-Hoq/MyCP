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
        int n,k;
        cin>>n>>k;
        int h[n], a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>h[i];
        }
        int ans = 0, l=0, r=0;
        while(r<n)
        {
            if(r!=n-1 && h[r]%h[r+1]==0)
            {
                r++;
                
            }
            else
            {
                
                long long sum = 0;
                int ll=l, rr=l;
                while(rr<=r)
                {
                    sum+=a[rr];

                    if(sum<=k)
                    {
                        ans = max(ans, rr-ll+1);
                    }
                    while(sum>k && ll<=rr)
                    {
                        sum-=a[ll];
                        ll++;
                    }
                    rr++;
                }
                r++;
                l=r;
            }
           
           
        }

        cout<<ans<<endl;
    }

    
    
    return 0;
}