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
        int n,k;
        cin>>n>>k;
        vector<int>arr;
        arr.push_back(0);
        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            arr.push_back(val);
        }
        arr.push_back(k);
        sort(arr.begin(), arr.end());
        int mx=-1;
        for(int i=1; i<=n+1; i++)
        {
            int val = arr[i] - arr[i-1];
            if(arr[i]==k)
            {
                val*=2;
            }
            mx=max(mx, val);
        }
        cout<<mx<<endl;

    }

    
    
    return 0;
}