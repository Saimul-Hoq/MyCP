#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


map<ll,ll, greater<ll>>mp;
vector<ll>take;
vector<ll>cost;
vector<ll>deal(20);

ll power(ll p, ll q)
{
    ll ans=1;
    for(int k=0; k<=__lg(q); k++)
    {
        if(((q>>k)&1)==1)
        {
            ans=(ans*p);
        }
        p=(p*p);
    }

    return ans;
}

void saim()
{
    ll n, k;
    cin>>n>>k;
    ll cst=0,dl=0;

    for(int i=0; i<20; i++)
    {
        ll cnt = n/take[i];
        cst += (cost[i]*cnt);
        n-=(take[i]*cnt);
        deal[i] = cnt;
        dl+=cnt;
        
    }
    if(dl>k) 
    {
        cout<<-1<<endl;
        return;
    }
    k-=dl;
    ll x = 19;
    for(int i=0; i<19; i++)
    {
        ll p = k/2;
        ll tr = min(p, deal[i]);
        deal[i] -= tr;
        deal[i+1] += (tr*3);
        ll tmp = power(3, x-1);
        cst-=(tr*tmp);
        x--;
        k = k - (tr*2);
    }
    cout<<cst<<endl;
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    for(ll k=19; k>=0; k--)
    {
        ll a = power(3,k);
        ll p = power(3, k+1);
        ll q = power(3, k-1);
        q = q*k;
        ll b = p + q;
        mp[a] = b;
        take.push_back(a);
        cost.push_back(b);
        
    }

    int t;
    cin>>t;
    while(t--)
    {
        saim();
    }
    
    
    return 0;
}