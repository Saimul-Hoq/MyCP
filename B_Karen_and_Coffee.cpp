#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,k,q;
    cin>>n>>k>>q;
    vector<int>arr(200005, 0);
    while(n--)
    {
        int l,r;
        cin>>l>>r;
        arr[l]++;
        arr[r+1]--;
    }
    int sum=0;
    for(int i=1; i<arr.size(); i++)
    {
        sum = sum+arr[i];
        if(sum>=k)
        {
            arr[i] = 1;
        }
        else
        {
            arr[i] = 0;
        }
        arr[i] = arr[i] + arr[i-1];
    }
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<arr[r]-arr[l-1]<<endl;
    }

    
    
    return 0;
}