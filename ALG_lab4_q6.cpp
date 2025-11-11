#include<iostream>
using namespace std;

int main()
{
    int size1;
    cout<<"Enter size of 1st array:";
    cin>>size1;

    int arr1[size1];

    cout<<"Enter elements of first array: "<<endl;

    for(int i=0; i<size1; i++)
    {
        cin>>arr1[i];
    }

    int size2;
    cout<<"Enter size of 2nd array:";
    cin>>size2;

    int arr2[size2];

    cout<<"Enter elements of second array: "<<endl;

    for(int i=0; i<size2; i++)
    {
        cin>>arr2[i];
    }

    int size3 = size1 + size2 + 1;
    int arr3[size3];

    for(int i=0; i<size1; i++)
    {
        arr3[i]=arr1[i];
    }

    for(int i=size1, j=0; i<size3; i++, j++)
    {
        arr3[i]=arr2[j];
    }

    cout<<"Combined Array: ";
    for(int i=0; i<size3-1; i++)
    {
        cout<<arr3[i]<<" ";
    }
    cout<<endl;

    cout<<"Enter last element: ";
    cin>>arr3[size3-1];

    cout<<"Combined Array after inserting last element: ";
    for(int i=0; i<size3; i++)
    {
        cout<<arr3[i]<<" ";
    }
    cout<<endl;

    int largest=arr3[0], smallest=arr3[0];
    for(int i=1; i<size3; i++)
    {
        if(arr3[i]>largest)
        {
            largest=arr3[i];
        }
        if(arr3[i]<smallest)
        {
            smallest=arr3[i];
        }
    }

    cout<<"Largest Element = "<<largest<<endl;
    cout<<"Smallest Element = "<<smallest<<endl;

    for(int i=0; i<size3-1; i++)
    {
        for(int j=i+1; j<size3; j++)
        {
            if(arr3[i]>arr3[j])
            {
                swap(arr3[i], arr3[j]);
            }
        }
    }

    cout<<"Sorted Array: ";

    for(int i=0; i<size3; i++)
    {
        cout<<arr3[i]<<" ";
    }
    cout<<endl;

    return 0;
    

}