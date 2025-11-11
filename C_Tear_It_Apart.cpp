#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void saim()
{
    string s;
    cin>>s;
    int n = s.size();
    
    set<int>st;
    for(int i=0; i<n; i++)
    {
        st.insert(s[i]);
    }
    int ans = INT_MAX;
    for(auto ch: st)
    {
        
        int count=0,cnt=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]!=ch)
            {
                cnt++;
            }
            if(s[i]==ch || i==n-1)
            {
                count = max(count,cnt);
                cnt=0;
            }
        }

        if(count==0)
        {
            cout<<0<<endl;
            return;
        }
        int temp = log2(count);
        temp++;
        ans = min(ans, temp);
        
    }

    cout<<ans<<endl;
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        saim();
    }

    
    
    return 0;
}