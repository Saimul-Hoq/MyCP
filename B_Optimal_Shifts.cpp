#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void saim()
{
    int n;
    cin>>n;
    int idx=-1;
    string arr;
    cin>>arr;
    for(int i=1; i<=n; i++)
    {
        if(idx==-1 && arr[i-1]=='1') idx=i;
    }
    int ans=0, p=idx;
    for(int i=idx+1; i<=n; i++)
    {
        if(arr[i-1]=='0')
        {
            int k = i-p;
            ans = max(ans, k);
        }
        else
        {
            p = i;
        }
    }
    for(int i=1; i<idx; i++)
    {
        int k=(n-p)+i;
        ans = max(ans, k);
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