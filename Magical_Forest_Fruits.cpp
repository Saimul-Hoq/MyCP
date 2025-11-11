#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin>>n>>q;
    long long arr[n+1];
    arr[0]=0;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    for(int i=2; i<=n; i++)
    {
        arr[i] = arr[i] + arr[i-1];
    }
    while(q--)
    {
        int a, b;
        cin>>a>>b;
        cout<<arr[b]-arr[a-1]<<endl;
    }
    
    
    return 0;
}