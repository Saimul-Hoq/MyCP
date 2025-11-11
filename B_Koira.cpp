#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll num=pow(160, 6) - 160 * (1LL<<36);
    cout<<num<<endl;
    int count=0;
    for(int k=0; k<=64; k++)
    {
        if(((num>>k)&1)==1)
        {
            count++;
        }
    }
    cout<<count<<endl;

    
    
    return 0;
}