#include<iostream>
#include<stdlib.h>
using namespace std;


void insertionSort(int arr[], int soa)
{
    int j;
    for(int i = 1; i<soa ; i++)
    {
        int key = arr[i];
        for( j = i-1; j>=0 ; j--)
        {
            if(arr[j] > key)
            {
                arr[j+1] = arr[j];
            }
            else 
            {
                break;
            }
        }
        arr[j+1]=key;
        
    }
}



int main()
{
    int size;
    cout<<"Enter size:";
    cin>>size;

    int arr[size];

    cout<<"Enter elements: "<<endl;

    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    insertionSort(arr, size);



    cout<<"Sorted Array: "<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}