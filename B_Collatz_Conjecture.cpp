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
        ll x,y,k;
        cin>>x>>y>>k;
        
        ll p;
        while(k>0 && x>1)
        {
            if(x>=y)
            {
                p = y - (x%y);  
            }
            else
            {
                p = y-x;
            }
            p=min(k, p);
            x+=p;
            while(x%y==0)
            {
                x/=y;
            }
            k-=p;
        }
        cout<<x + k%(y-1)<<endl;
        
        
        
    }


    
    
    return 0;
}