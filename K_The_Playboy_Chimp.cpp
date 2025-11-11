#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int smaller(int k, int n, vector<int>&arr)
{
    int l=0, r=n-1, ans=-1;
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(arr[mid]<k)
        {
            ans = arr[mid];
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
       
    }

    return ans;
}

int larger(int k, int n, vector<int>&arr)
{
    int l=0, r=n-1, ans=-1;
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(arr[mid]>k)
        {
            ans = arr[mid];
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
       
    }

    return ans;
}


int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int q;
    cin>>q;
    while(q--)
    {
        int k;
        cin>>k;
        int l = smaller(k,n,arr);
        int r = larger(k,n,arr);
        if(l!=-1)
        {
            cout<<l<<" ";
        }
        else
        {
            cout<<"X ";
        }
        if(r!=-1)
        {
            cout<<r<<endl;
        }
        else
        {
            cout<<"X"<<endl;
        }
    }

    
    
    return 0;
}