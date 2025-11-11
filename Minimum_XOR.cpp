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
        vector<int>arr(n);
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        vector<int>v;
        int xr=0;
        for(int i=0; i<n; i++)
        {
            xr = xr^arr[i];
        }
        v.push_back(xr);
        for(int i=0; i<n; i++)
        {
            int temp = xr^arr[i];
            v.push_back(temp);
        }

        cout<<*min_element(v.begin(), v.end())<<endl;
    }

    
    
    return 0;
}