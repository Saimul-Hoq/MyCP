#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int h, n;
vector<int>a;
vector<int>c;

bool isPossible(ll t)
{
    ll damage=0;
    for(int i=0; i<n; i++)
    {
        ll f = t/c[i];
        damage+=(f*a[i]);
        if(t>(f*c[i]))
        {
            damage+=a[i];
        }
        if(damage>=h)
        {
            return true;
        }
    }
    return false;
}

ll solve(ll l, ll r)
{
    ll ans;
    while(l<=r)
    {
        ll mid = l + (r-l)/2;
        if(isPossible(mid))
        {
            ans = mid;
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }

    return ans;
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        cin>>h>>n;
        a.clear();
        c.clear();
        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            a.push_back(val);
        }
        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            c.push_back(val);
        }

        ll l=1, r=4e10;
        cout<<solve(l,r)<<endl;
    }


    
    
    return 0;
}