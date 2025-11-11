#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void saim()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    k--;
    int ans=0, cnt=1;
    int i=0;
    for(; i<n; i++)
    {
        if(s[i]=='1')
        {
            ans++;
            break;
        }
    }
    i++;
    for(; i<n; i++)
    {
        if(s[i]=='0') cnt++;
        else
        {
            if(k<cnt)
            {
                ans++;
            }
            cnt=1;
        }
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