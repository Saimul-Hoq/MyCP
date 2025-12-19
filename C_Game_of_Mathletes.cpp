#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void saim()
{
    int n,k;
    cin>>n>>k;
    multiset<int>ms;
    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        ms.insert(val);
    }
    int cnt=0;
    while(!ms.empty())
    {
        int val = *ms.begin();
        ms.erase(ms.begin());
        auto it = ms.find((k-val));
        if(it!=ms.end())
        {
            cnt++;
            ms.erase(it);
        }
    }
    cout<<cnt<<endl;
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