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
        ll l,r;
        cin>>l>>r;
        ll x = l;
        ll y = 2*x;
        if(y>r)
        {
            cout<<-1<<" "<<-1<<endl;
        }
        else
        {
            cout<<x<<" "<<y<<endl;
        }
    }


    
    
    return 0;
}