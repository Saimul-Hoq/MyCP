#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int freq[32];

void count(int n, int m)
{
    n++;
    for(int k=0; k<=31; k++)
    {
        ll p = (1LL<<k);
        ll part = (n/p);
        ll appear = part/2;
        freq[k]+=(appear*p*m);
        if(part%2==1)
        {
            freq[k]+=((n%p)*m);
        }
    }
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll l = max(n-m, 0LL);
        ll r=(n+m);

        memset(freq, 0, sizeof(freq));

        count(r, 1);
        count(l-1, -1);
        ll ans=0;
        for(int k=0; k<=31; k++)
        {
            if(freq[k]>0)
            {
                ans+=(1LL<<k);
            }
        }
         
        cout<<ans<<endl;
    }

    
    
    return 0;
}