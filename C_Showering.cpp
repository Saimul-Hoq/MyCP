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
        int n,s,m;
        cin>>n>>s>>m;
        vector<pair<int,int>>arr;
        for(int i=0; i<n; i++)
        {
            int a,b;
            cin>>a>>b;
            arr.push_back({a,b});
        }
        bool check=false;
        if(arr[0].first>=s)
        {
            check=true;
        }
        for(int i=1; i<n && !check; i++)
        {
            if((arr[i].first-arr[i-1].second)>=s)
            {
                check=true;
            }
        }
        if(!check && m-arr[n-1].second>=s)
        {
            check=true;
        }

        if(check)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    
    
    return 0;
}