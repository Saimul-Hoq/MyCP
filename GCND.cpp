#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void saim()
{
    int n;
    cin>>n;
    set<int, greater<>>s;
    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        s.insert(val);
    }
    auto it = s.begin();
    int mx = *it;
    mx--;
    if(s.size()>=3) cout<<mx<<endl;
    else
    {
        if(s.find(mx)==s.end()) cout<<mx<<endl;
        else cout<<mx-1<<endl;
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

    
    
    return  0;
}