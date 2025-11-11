#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int n;
vector<int>arr;


int left_index(int key)
{
    int ans = -1;
    int l=0, r=n-1;
    while(l<=r)
    {
        int mid = (l+r)/2;

        if(arr[mid]>=key)
        {
            ans = mid;
            r = mid - 1;
            
        }
        else if(arr[mid]<key)
        {
            l = mid + 1;
        }
        
    }

    return ans;
}


int right_index(int key)
{
    int ans = -1;
    int l=0, r=n-1;
    while(l<=r)
    {
        int mid = (l+r)/2;

        if(arr[mid]<=key)
        {
            ans = mid;
            l = mid+1;
            
        }
        else if(arr[mid]>key)
        {
            r = mid - 1;
        }
        
    }

    return ans;
}


int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    cin>>n;
    
    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        arr.push_back(val);
    }

    int k;
    cin>>k;
    sort(arr.begin(), arr.end());
    while(k--)
    {
        int l,r;
        cin>>l>>r;
        int i = left_index(l);
        int j = right_index(r);
        if((i==-1 || j==-1) || (j<i))
        {
            cout<<0<<" ";
        }
        else
        {
            cout<<j-i+1<<" ";
        }


    }
    cout<<endl;


    
    
    return 0;
}