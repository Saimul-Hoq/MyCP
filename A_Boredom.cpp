#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    int n;
    cin>>n;
    map<int,int>mp;
    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        mp[val]++;
    }
    priority_queue<pair<long long,int>>pq;
    for(auto [val, freq]: mp)
    {
        long long p = (long long)val*(long long)freq;
        pq.push({p,val});
    }
    long long ans = 0;
    while(!pq.empty())
    {
        auto [mult, key] =  pq.top();
        pq.pop();

        if(mp.count(key))
        {
            ans+=mult;
            mp.erase(key);
            if(mp.count(key+1))
            {
                mp.erase(key+1);
            }
            if(mp.count(key-1))
            {
                mp.erase(key-1);
            }
        }

    }
    cout<<ans<<endl;
    
    
    return 0;
}