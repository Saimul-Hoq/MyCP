#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n, greater<int>());
    long long sum=0;
    long long taken=INT_MAX;
    for(int i=0; i<n; i++)
    {
        long long current = arr[i];
        if(taken>current)
        {
            taken = current;
        }
        else
        {
            taken--;
        }
        sum+=taken;
        
        if(taken<=0)
        {
            break;
        }
    }

    cout<<sum<<endl;
    
    return 0;
}