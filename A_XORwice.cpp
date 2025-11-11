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
        int a,b;
        cin>>a>>b;
        int x=0;
        int msb = max(__lg(a), __lg(b));
        for(int k=0; k<=msb; k++)
        {
            if(((a>>k)&1)==1 && ((b>>k)&1)==1)
            {
                x = ((1<<k)|x);
            }
        }

        cout<<(a^x)+(b^x)<<endl;
        
    }

    
    
    return 0;
}