#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

ll n;

void slide(vector<ll>&arr)
{
    ll temp = arr[n];
    for(int i=n; i>=2; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[1] = temp;
}

ll get(ll a, ll b)
{
    return abs(a-b);
}

ll get(ll a, ll b, ll c)
{
    vector<ll>v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(), v.end());

    return (v[1]-v[0]) + (v[2]-v[1]);

}

ll solve(vector<ll>&arr)
{
    vector<ll>dp(n+1, INT_MAX);
    dp[0]=0;
    dp[2]=get(arr[1], arr[2]);

    for(int i=3; i<=n; i++)
    {
        ll a = get(arr[i], arr[i-1]) + dp[i-2];
        ll b = get(arr[i], arr[i-1], arr[i-2]) + dp[i-3];
        dp[i] = min(a, b);
    }

    return dp[n];
}

void saim()
{
    cin>>n;
    vector<ll>arr(n+1);
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }

    ll a = solve(arr);

    slide(arr);
    ll b = solve(arr);

    slide(arr);
    ll c = solve(arr);

    cout<<min({a, b, c})<<endl;


}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        saim();
    }

    
    
    return 0;
}