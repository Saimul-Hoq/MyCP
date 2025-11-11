#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

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
        if(x<=(y+1))
        {
            x--;
            cout<<y/x<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }

    
    
    return 0;
}