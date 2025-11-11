#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void saim()
{
    int n,x,k;
    cin>>n>>x>>k;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr.rbegin(), arr.rend());
    for(int i=0; i<k; i++)
    {
        arr[i]=0;
        x+=100;
    }
    int ans=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>x) ans++;

    }
    cout<<ans+1<<endl;
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