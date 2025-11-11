#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    map<int,int>mp;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        mp[a]++;
        mp[b+1]--;
    }
    int sum=0, ans=INT_MIN;
    for(auto [i, j]: mp)
    {
        sum+=j;
        ans=max(ans, sum);
    }
    cout<<ans<<endl;


    
    
    return 0;
}