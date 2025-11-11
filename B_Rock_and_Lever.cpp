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
        int n;
        cin>>n;
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            mp[__lg(val)]++;
        }
        long long sum=0;
        for(auto [k, f]: mp)
        {
            sum+=((f*1LL*(f-1)/2));
        }

        cout<<sum<<endl;
    }

    
    
    return 0;
}