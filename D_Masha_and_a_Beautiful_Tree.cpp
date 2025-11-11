#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

int solve(int l, int r, vector<int>&arr)
{
    if((r-l+1)==2)
    {
        int p = arr[l] - arr[r];
        if(abs(p)!=1) return -1; 
        if(p==1)
        {
            sort(arr.begin()+l, arr.begin()+r+1);
            return 1;
        }
        else return 0;
    }

    int mid = l + (r-l)/2;

    int a = solve(l, mid, arr);
    int b = solve(mid+1, r, arr);

    if(a==-1 || b==-1) return -1;

    int p = arr[mid] - arr[mid+1];

    if(p>0)
    {
        sort(arr.begin()+l, arr.begin()+r+1);
        if(abs(arr[mid]-arr[mid+1])!=1) return -1;
        return a+b+1;
    }
    else
    {
        if(abs(arr[mid]-arr[mid+1])!=1) return -1;
        return a+b;
    }

   
}

void saim()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    if(n==1)
    {
        cout<<0<<endl;
        return;
    }
    cout<<solve(0, n-1, arr)<<endl;
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