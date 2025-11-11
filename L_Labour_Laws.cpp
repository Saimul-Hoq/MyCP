#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void saim()
{
    int t;
    cin>>t;
    
    if(t<=390) cout<<0<<endl;
    else if(t<=585) cout<<30<<endl;
    else if(t<=645) cout<<45<<endl;
    else cout<<t-600<<endl;
    
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    saim();

    
    
    return 0;
}