#include<iostream>
using namespace std;
int main()
{
    int n, i=0, key;
    cout<<"Enter the size: ";
    cin>>n;

    int arr[n], carr[n];

    cout<<"Enter the elements: ";
    while(i<n)
    {
        cin>>arr[i];
        i++;
    }
    i=0;
    for(int p=0; p<n; p++)
    {
        carr[p]=arr[i];
        i++;
    }
    i=0;

    while(i<n)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
        i++;
    }
    cout<<"Ascending order is: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter the key element: ";
    cin>>key;

    int s=0, e=(n-1), mid=(s+e)/2, cnt=0;

    while(s<=e)
    {
        if(arr[mid]==key)
        {
            for(int p=0; p<n; p++)
            {
                if(arr[mid]==carr[p])
                {
                    cout<<"Index is: "<<p;
                    cnt++;
                    break;
                    
                }
            }
            break;
            
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    if(cnt==0)
    {
        cout<<"This number doesn't exist in the list."<<endl;
    }
    return 0;
}