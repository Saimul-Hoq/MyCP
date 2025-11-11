#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int n;
vector<int>arr;


bool solve(int k)
{
    int l = 0, r=n-1;
    while(l<=r)
    {
        int m=(l + r)/2;
        
        if(arr[m]==k)
        {
            return true;
        }
        else if(arr[m]<k)
        {
            l = m+1;
        }
        else
        {
            r = m-1;
        }

    }

    return false;

}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int q;
    cin>>n>>q;

    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        arr.push_back(val);
    }

    while(q--)
    {
        int k;
        cin>>k;
        if(solve(k))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    

    
    
    return 0;
}