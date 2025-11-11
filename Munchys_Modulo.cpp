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
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        sort(v.rbegin(), v.rend());

        int ans = v[1];
        for(int i=1; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                int temp = v[0] % (v[i]+v[j]);
                ans = max(ans, temp);
            }
        }

        cout<<ans<<endl;
        
        

    }
    
    
    return 0;
}