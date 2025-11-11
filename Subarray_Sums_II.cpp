#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    map<long long,int>mp;
    long long sum=0;
    mp[0]=1;
    long long ans = 0;
    for(int i=0; i<n; i++)
    {
        int val = arr[i];
        sum+=val;
        long long temp = sum - k;
        ans+=mp[temp];
        mp[sum]++;

    }

    cout<<ans<<endl;


    
    
    return 0;
}