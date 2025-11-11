#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

const int m = 1e9+7;

int power(int a, int b)
{
    int ans = 1;
    
    while(b>0)
    {
        if((b&1))
        {
            ans = (1LL * ans%m * a%m)%m;
        }

        a = (1LL * a%m * a%m)%m;
        b = (b>>1);
    }

    return ans;
}


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
        cout<<power(a,b)<<endl;
    }

    
    
    return 0;
}