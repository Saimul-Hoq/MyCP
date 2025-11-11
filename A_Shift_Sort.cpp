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
        string s;
        cin>>s;
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
            {
                cnt++;
            }
        }
        int ans=0;
        for(int i=0; i<cnt; i++)
        {
            if(s[i]=='1')
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }

    
    
    return 0;
}