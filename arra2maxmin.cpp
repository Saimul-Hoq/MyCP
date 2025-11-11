#include<iostream>
using namespace std;
int main()
{
    int i=0, j=0, n;

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

    while(j<n)
    {
        if(arr[i]<arr[j])
        {
            i=j;
            j++;
        }

        else
        {
            j++;
        }
    }

    cout<<"Maximum number is "<<arr[i]<<endl;

    i=0;
    j=0;

    while(j<n)
    {
        if(arr[i]>arr[j])
        {
            i=j;
            j++;
        }

        else
        {
            j++;
        }
    }
    cout<<"Minimum number is "<<arr[i]<<endl;

    return 0;
}