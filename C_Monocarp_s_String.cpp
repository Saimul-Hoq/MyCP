#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void saim()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a=0, b=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='a') a++;
        else b++;
    }
    if(a==b)
    {
        cout<<0<<endl;
        return;
    }

    char ch;
    int extra = abs(a-b);
    if(a>b) ch='a';
    else ch='b';
    vector<int>v(n+1);
    for(int i=0; i<n; i++)
    {
        if(s[i]==ch) v[i+1] = v[i] + 1;
        else v[i+1] = v[i] - 1;
    }

    map<int,int>mp;
    mp[0] = 0;
    int ans=INT_MAX;
    for(int i=1; i<=n; i++)
    {
        int p = v[i]-extra;
        if(mp.find(p)!=mp.end())
        {
            ans = min(ans, i-mp[p]);
        }
        mp[v[i]]=i;
    }
   
    if(ans==n) cout<<-1<<endl;
    else cout<<ans<<endl;
    

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