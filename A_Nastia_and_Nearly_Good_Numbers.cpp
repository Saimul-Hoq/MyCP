#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        
        if(b==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        ll lcm = 2*a*b;
        cout<<"YES"<<endl;
        cout<<a<<" "<<lcm<<" "<<a+lcm<<endl;
        
    }

    
    
    return 0;
}