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
        int n,s;
        cin>>n>>s;
        int count=0;
        for(int i=0; i<n; i++)
        {
            int dx, dy, x, y;
            cin>>dx>>dy>>x>>y;
            if((x+y)==s && dx!=dy) count++;
            else if(x==y && dx==dy) count++;
        }
        cout<<count<<endl;
    }

    
    
    return 0;
}