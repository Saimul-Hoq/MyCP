#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

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
        vector<int>odds;
        ll esum=0;
        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            if(val%2==0)
            {
                esum+=val;
            }
            else
            {
                odds.push_back(val);
            }
        }
        ll ans=0;
        if(odds.size()==0)
        {
            cout<<0<<endl;
        }
        else
        {
            ans+=esum;
            sort(odds.rbegin(), odds.rend());
            int sz = odds.size();
            int j = (sz+1)/2;
            for(int i=0; i<j; i++)
            {
                ans+=odds[i];
            }
            cout<<ans<<endl;
        }
    }

    
    
    return 0;
}