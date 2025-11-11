#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int i=0, j=0, k=0, n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n], carr[n];
    cout<<"Enter the elements: ";
    
    
    while(i<n)
    {
        cin>>arr[i];
        i++;
    }
    i=0;
    cout<<"Descending values: ";
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
        carr[k]=arr[i];
        arr[i]=INT_MIN;
        j=0;
        i=0;
        k++;
     }
     cout<<endl;

     cout<<"Ascending values: ";
     while(k>=0)

     {
        cout<<carr[k]<<" ";
        k--;
     }
     return 0;

}