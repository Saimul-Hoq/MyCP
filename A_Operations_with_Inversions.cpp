#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void saim()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    multiset<int>ms;
    ms.insert(arr[n-1]);
    int cnt=0;
    for(int i=n-2; i>=0; i--)
    {
        vector<int>dlt;
        for(int val: ms)
        {
            if(val<arr[i])
            {
                cnt++;
                dlt.push_back(val);
            }
        }
        for(int val: dlt)
        {
            ms.erase(val);
        }
        ms.insert(arr[i]);
    }
    cout<<cnt<<endl;
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