#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int n;
vector<int>arr;
ll dif;

void solve(int i, ll sum1, ll sum2)
{
    if(i==n)
    {
        ll k = abs(sum1-sum2);
        dif=min(dif, k);
        return;
    }
    
    solve(i+1, sum1-arr[i], sum2+arr[i]);
    solve(i+1, sum1, sum2);

}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    cin>>n;
    ll sum=0;
    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        arr.push_back(val);
        sum+=val;
    }
    dif = LLONG_MAX;

    solve(0, sum, 0);

    cout<<dif<<endl;
    
    
    return 0;
}