#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void saim()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    map<int,vector<int>>mp;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        mp[arr[i]].push_back(i+1);
    }

    if(mp.size()==1)
    {
        cout<<"NO"<<endl;
        return;
    }

    int v=-1;
    vector<int>f(5005);
    for(auto [val, freq]: mp)
    {
        if(freq.size()<f.size())
        {
            v=val;
            f=freq;
        }
    }
    cout<<"YES"<<endl;
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=v)
        {
            cout<<f.back()<<" "<<i+1<<endl;
        }
    }
    f.pop_back();
    for(int i=0; !f.empty(); i++)
    {
        if(arr[i]!=v)
        {
            cout<<i+1<<" "<<f.back()<<endl;
            f.pop_back();
        }
    }

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