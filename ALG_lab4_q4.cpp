#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int *arr, size;
    cout<<"Enter Size: ";
    cin>>size;
    arr = (int *)malloc(sizeof(int)*size);
    cout<<"Enter Elements: "<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Initial Array: ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //Value inserting process into middle position: 
    int middle = size/2;
    size++;
    arr = (int *)realloc(arr, sizeof(int)*size);
    for(int  j=size-1; j>=middle; j--)
    {
        arr[j]=arr[j-1];
    }
    cout<<"Enter Middle Element: ";
    cin>>arr[middle];

    cout<<"Array after inserting value into first position: ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    

    //Value inserting process into first position: 
    size++;
    arr = (int *)realloc(arr, sizeof(int)*size);
    for(int  j=size-1; j>0; j--)
    {
        arr[j]=arr[j-1];
    }
    cout<<"Enter first Element: ";
    cin>>arr[0];

    cout<<"Array after inserting value into first position: ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    
}