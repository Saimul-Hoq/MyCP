#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int m = (n*(n-1))/2;
        map<int,int>mp;
        for(int i=0; i<m; i++)
        {
            int val;
            cin>>val;
            mp[val]++;
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
        for(auto p: mp)
        {
            pq.push(p);
        }
        vector<int>v;
        int p = n-1;
        while(!pq.empty())
        {
            auto [val, freq] = pq.top();
            pq.pop();

            v.push_back(val);
            freq-=p;
            p--;
            if(freq>0)
            {
                pq.push({val, freq});
            }
        }
        v.push_back(1000000000);
        for(int val: v)
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}