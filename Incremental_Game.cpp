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
        int a,b,k;
        cin>>a>>b>>k;
        if(k>=a && k>=b)
        {
            cout<<"Alice"<<endl;
        }
        else
        {
            if(a>b)
            {
                a-=k;
            }
            else
            {
                b-=k;
            }
            if(a>k || b>k)
            {
                cout<<"Bob"<<endl;
            }
            else
            {
                cout<<"Alice"<<endl;
            }
        }
    }

    
    
    return 0;
}