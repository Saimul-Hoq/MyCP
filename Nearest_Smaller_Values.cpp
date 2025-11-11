#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    int arr[n+1];
    arr[0] = 0;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    cout<<0<<" ";
    for(int i=2; i<=n; i++)
    {
        int cur = arr[i];
        int prev = arr[v.back()];
        while(prev>=cur && v.back()!=0)
        {
            v.pop_back();
            prev = arr[v.back()];
        }
        cout<<v.back()<<" ";
        v.push_back(i);
    }  
    cout<<endl; 
    
    return 0;
}