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
        int n,m,k;
        cin>>n>>m>>k;
        int oc = ceil((k*1.0)/n);
        int free = m-oc;
        int ans = ceil((oc*1.0)/(free+1));
        cout<<ans<<endl;
    }

    
    
    return 0;
}