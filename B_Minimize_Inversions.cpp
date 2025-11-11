#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void saim()
{
    int n;
    cin>>n;
    vector<pair<int,pair<int,int>>>arr;
    vector<int>a(n), b(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }
    for(int i=0; i<n; i++)
    {
        int sum = a[i] + b[i];
        pair<int,int>p = {a[i], b[i]};
        arr.push_back({sum, p});
    }

    sort(arr.begin(), arr.end());

    for(int i=0; i<n; i++)
    {
        cout<<arr[i].second.first<<" ";
    }
    cout<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i].second.second<<" ";
    }
    cout<<endl;
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        saim();
    }

    
    
    return 0;
}