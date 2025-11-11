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
    int test=1;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll>arr(n+1);
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
        }
        ll k,a,b;
        cin>>k>>a>>b;
        vector<ll>carr(n+1);
        carr[0]=0;
        for(int i=1; i<=n; i++)
        {
            carr[i] = arr[i] + carr[i-1];
        }
        map<ll, vector<int> >mp;
        mp[0].push_back(0);
        ll ans=0;
        for(int i=1; i<=n; i++)
        {
            ll val = carr[i]%k;
            if(mp[val].size()>0)
            {
                vector<int>v = mp[val];
                for(int j: v)
                {
                    ll vl = carr[i] - carr[j];
                    if(vl>=a && vl<=b)
                    {
                        ans++;
                    }
                }
            }
            mp[val].push_back(i);
        }
        cout<<"Case "<<test<<": "<<ans<<endl;
        test++;
    }

    
    
    return 0;
}