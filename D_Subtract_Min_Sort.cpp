#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void saim()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=1; i<n; i++)
    {
        int m = min(arr[i-1], arr[i]);
        arr[i-1]-=m;
        arr[i]-=m;
    }
    bool check=true;
    for(int i=1; i<n; i++)
    {
        if(arr[i-1]>arr[i])
        {
            check=false;
            break;
        }
    }
    if(check) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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