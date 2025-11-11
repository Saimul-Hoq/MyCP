#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void saim()
{
    int n;
    cin>>n;
    bool echeck=false, ocheck=false;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];

        if(arr[i]%2==1) ocheck = true;
        else echeck = true;
    }

    if(echeck && ocheck)
    {
        sort(arr, arr+n);
    }
    for(int val: arr)
    {
        cout<<val<<" ";
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