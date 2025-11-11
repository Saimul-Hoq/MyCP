#include<iostream>
using namespace std;
int main()
{
    int n, i=0, j=0, k=0;
    cout<<"Enter the size of the the array: ";
    cin>>n;
    int arr[n];
    
    cout<<"Enter the elements: ";

    while(i<n)
    {
        cin>>arr[i];
        i++;
    }
    i=0;

    cout<<"Deccending values are: ";

    while(k<n)
    {
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

        cout<<arr[i]<<" ";
            
            i=0;
            j=0;
            
    }
    return 0;

}