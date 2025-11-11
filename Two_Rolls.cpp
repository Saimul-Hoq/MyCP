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
        int x,y;
        cin>>x>>y;
        int a = 2*y;
        int b = 2*(y+5);
        a = x+a;
        b = x+b;
        if(50>=a && 50<=b)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }

    
    
    return 0;
}