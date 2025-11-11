#include<bits/stdc++.h>
using namespace std;

bool binary_search(int arr[], int l, int r, int item)
{
    if(l>r)
    {
        return false;
    }
    int mid = (l+r)/2;
    if(arr[mid]==item)
    {
        return true;
    }

    if(item<arr[mid])
    {
        return binary_search(arr, l, mid-1, item);
    }
    else
    {
        return binary_search(arr, mid+1, r, item);
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int item;
    cout<<"Enter searched value: "<<endl;
    cin>>item;

    if(binary_search(arr, 0, n-1, item))
    {
        cout<<"Found"<<endl;
    }
    else
    {
        cout<<"Not Found"<<endl;
    }
    
    
    return 0;
}