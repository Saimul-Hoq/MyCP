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
        int n, k;
        cin>>n>>k;
        string p,q;
        cin>>p>>q;
        int l=0, r=0, i=0;
        int ans=INT_MAX, sum=0;
        while(r<n)
        {
            int a = p[r] - '0';
            int b = q[i] - '0';
            int c = abs(a-b);
            sum = sum + min(c, 10-c);
            if(r-l+1 == k)
            {
                ans = min(ans, sum);
                sum=0;
                i=-1;
                l++;
                r=l-1;
            }
            r++;
            i++;
        }

        cout<<ans<<endl;
    }

    
    
    return 0;
}