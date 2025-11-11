#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll l,r;
    cin>>l>>r;
    cout<<"YES"<<endl;
    for(; (l+1)<=r; l+=2)
    {
        cout<<l<<" "<<l+1<<endl;
    }

    
    
    return 0;
}