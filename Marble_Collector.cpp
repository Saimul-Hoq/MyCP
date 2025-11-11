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
        int n,m;
        cin>>n>>m;
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            mp[val]=1;
        }
        int count=0;
        for(int i=1; i<=m; i++)
        {
            if(mp[i]==0)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }

    
    
    return 0;
}