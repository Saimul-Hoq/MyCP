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

        string s[m];
        for(int i=0; i<m; i++)
        {
            cin>>s[i];
        }
        pair<int,int>p;
        p.first=0;
        p.second=0;
        vector<pair<int,int>>v(n, p);
        for(int k=0; k<m; k++)
        {
            string str = s[k];
            for(int i=0; i<n; i++)
            {
                if(str[i]=='0')
                {
                    v[i].first++;
                }
                else if(str[i]=='1')
                {
                    v[i].second++;
                }
            }
        }
        for(int k=0; k<m; k++)
        {
            string str = s[k];
            for(int i=0; i<n; i++)
            {
                if(str[i]=='?')
                {
                    if(v[i].first > v[i].second)
                    {
                        v[i].second++;
                    }
                    else
                    {
                        v[i].first++;
                    }
                }
            }
        }
        long long ans = 0;
        for(auto pr: v)
        {
            long long a = pr.first;
            long long b = pr.second;
            ans += (a*b);
        }
        cout<<ans<<endl;
       
    }

    
    
    return 0;
}