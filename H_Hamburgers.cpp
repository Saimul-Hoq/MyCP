#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

string str;
ll b, s, c, nb, ns, nc, pb, ps, pc, r;

bool isPossible(ll k)
{
    ll brd=b*k, ssg=s*k, chs=c*k;

    ll need = max(0*1LL, brd-nb);
    ll cost = need*pb;
    if(cost>r)
    {
        return false;
    }
    
    need = max(0*1LL, ssg-ns);
    cost += need*ps;
    if(cost>r)
    {
        return false;
    }

    need = max(0*1LL, chs-nc);
    cost += need*pc;
    if(cost>r)
    {
        return false;
    }

    return true;
}

ll solve(ll l, ll r)
{
    ll ans;
    while(l<=r)
    {
        ll mid = l+(r-l)/2;
        if(isPossible(mid))
        {
            ans = mid;
            l = mid+1;
        }
        else
        {
            r = mid-1;
        }
    }

    return ans;
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    cin>>str;
    cin>>nb>>ns>>nc>>pb>>ps>>pc;
    cin>>r;
    b=0;
    s=0;
    c=0;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]=='B')
        {
            b++;
        }
        else if(str[i]=='S')
        {
            s++;
        }
        else
        {
            c++;
        }
    }

    ll l=0, r=1e12+100;
    cout<<solve(l,r)<<endl;
    
    
    return 0;
}