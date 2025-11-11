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
            mp[val]++;
        }

        if(mp.size()==1)
        {
            cout<<"YES"<<endl;
        }
        else if(mp.size()==2 && mp[0]>=1)
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