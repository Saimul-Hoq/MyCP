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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int val1 = a*5 + b;
        int val2 = c*5 + d;
        if(val1<val2)
        {
            cout<<"No"<<endl;
        }
        else
        {
            int p = val1-val2;
            if(p%6==0)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
    }

    
    
    return 0;
}