#include<iostream>
using namespace std;

void binarysearch(int arr[], int size, int key)
{
    int id=0, fd=size-1, mid = id + (fd-id)/2;

    while(id<=fd)
    {
        if(arr[mid]==key)
        {
            cout<<"Found"<<endl;
            break;
        }
        else if(key>arr[mid])
        {
            id=mid+1;
        }
        else
        {
            fd=mid-1;
        }

        mid = id + (fd-id)/2;
    }

    if(id>fd)
    {
        cout<<"Not Found"<<endl;
    }
}

int main()
{
    int size;
    cout<<"Enter Size: ";
    cin>>size;

    int arr[size];
    cout<<"Enter Elements: "<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    //sorting:
    for(int i=0; i<size-1; i++)
    {
        int minIndex = i;
        for(int j=i+1; j<size; j++)
        {
            if(arr[minIndex]>arr[j])
            {
                minIndex=j;
            }
        }
        if(minIndex!=i)
        {
            swap(arr[minIndex], arr[i]);
        }
    }

    int key; 
    cout<<"Enter Key: ";
    cin>>key;

    binarysearch(arr, size, key);

    return 0;

}