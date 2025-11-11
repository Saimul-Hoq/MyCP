#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

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
        vector<int>arr;
        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            arr.push_back(val);
        }
        sort(arr.begin(), arr.end());

        int ans = n;
        for(int i=0; i<n; i++)
        {
            int temp = arr[i] + (n-i-1);
            ans = min(ans, temp);
        }
        cout<<ans<<endl;
    }

    
    
    return 0;
}