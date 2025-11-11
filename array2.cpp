#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the the array: ";
    cin>>n;
    int arr[n];
    
    cout<<"Enter the elements: ";

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";

    }
    return 0;
}