#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    int arr[n];
    int mx = -1;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        mx = max(mx, arr[i]);
    }

    int z=0;
    long long sum=0;
    for(int i=0; i<n; i++)
    {
        int val = mx - arr[i];
        z = __gcd(z, val);
        sum+=val;
    }
    long long y = sum/z;
    cout<<y<<" "<<z<<endl;

    
    
    return 0;
}