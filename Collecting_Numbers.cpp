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
    for(int i=1; i<=n; i++)
    {
        int val;
        cin>>val;
        arr[val]=i;
    }
    int count=1; 
    for(int i=2; i<=n; i++)
    {
        if(arr[i]<arr[i-1])
        {
            count++;
        }
    }

    cout<<count<<endl;

    
    
    return 0;
}