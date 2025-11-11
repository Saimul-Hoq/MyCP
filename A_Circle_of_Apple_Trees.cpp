#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void saim()
{
    int n;
    cin>>n;
    set<int>s;
    for(int i=1; i<=n; i++)
    {
        int val;
        cin>>val;
        s.insert(val);
    }
    cout<<s.size()<<endl;
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