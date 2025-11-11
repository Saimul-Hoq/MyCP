#include<iostream>
using namespace std;
int main()
{
    int n, i=0;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];

    cout<<"Enter the elements: ";
    while(i<n)
    {
        cin>>arr[i];
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

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
        
    }
    
    
    return 0;
}