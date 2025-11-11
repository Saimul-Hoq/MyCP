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
        int n;
        cin>>n;
        vector<int>arr;
        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            arr.push_back(val);
        }
        for(int i=0; i<n; i++)
        {
            cout<<n-(arr[i]-1)<<" ";
        }
        cout<<endl;
    }

    
    
    return 0;
}