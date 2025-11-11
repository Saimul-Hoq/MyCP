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
        int n;
        cin>>n;
        int dev = n/3;
        int rem = n%3;
        int ans;
        if(rem==1)
        {
            dev--;
        }
        ans = dev*5 + (n-(dev*3))*2;
        cout<<ans<<endl;
        
    }

    
    
    return 0;
}