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
        multiset<int>s;
        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            s.insert(val);
        }
        int ans=INT_MIN;
        while(!s.empty())
        {
            int a = *s.begin();
            s.erase(s.begin());
            auto ib = s.lower_bound(a);
            int b = *ib;
            s.erase(ib);
            ans = max(ans, abs(a-b));
        }
        cout<<ans<<endl;
    }

    
    
    return 0;
}