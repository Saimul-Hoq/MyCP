#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void saim()
{
    int n;
    cin>>n;
    multimap<ll, pair<ll,ll>>mp;
    vector<ll>arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    if(n==2)
    {
        cout<<max(arr[0], arr[1])<<endl;
        return;
    }
    for(int i=1; i<n-1; i++)
    {
        mp.insert({arr[i], {arr[i-1], arr[i+1]}});
    }
    mp.insert({arr[0], {arr[n-1], arr[1]}});
    mp.insert({arr[n-1], {arr[n-2], arr[0]}});
    
    ll cost = 0;
    while(mp.size()>2)
    {
        auto [a,b] = *mp.begin();
        mp.erase(mp.begin());
        ll lft = b.first;
        ll rgt = b.second;
        cost+=min(b.first, b.second);
        
        
        auto it = mp.find(lft);
        auto [c,d] = *it;
        mp.erase(it);
        mp.insert({lft, {rgt, d.second}});

        auto it2 = mp.find(rgt);
        auto [e,f] = *it2;
        mp.erase(it2);
        mp.insert({rgt, {lft, f.second}});

       
       
        
        
       
    }
    ll temp=0;
    for(auto [a,b]: mp)
    {
        temp = max(temp, a);
    }
    cost+=temp;

    cout<<cost<<endl;
    

}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    int t;
    cin>>t;
    while(t--)
    {
        saim();
    }
    
    
    return 0;
}