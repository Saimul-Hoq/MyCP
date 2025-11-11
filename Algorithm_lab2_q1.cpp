#include<iostream>
#include<stdlib.h>
using namespace std;


bool linear_search(int arr[], int size, int key)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]==key)
        {
            return true;
        }
    }

    return false;
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
    

    int key;
    cout<<"Enter Key :";
    cin>>key;
    if(linear_search(arr, size, key))
    {
        cout<<"Found"<<endl;
    }
    else 
    {
        cout<<"Not Found"<<endl;
    }

    return 0;
}