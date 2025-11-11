#include<iostream>
#include<stdlib.h>
using namespace std;

void merge(int arr[], int left, int mid, int right);

void merge_sort(int arr[], int left, int right)
{
    if(left>=right)
    {
        return;
    }

    int mid = left + (right-left)/2;

    merge_sort(arr, left, mid);
    merge_sort(arr, mid+1, right);
    merge(arr, left, mid, right);
}

void merge(int arr[], int left, int mid, int right)
{
    int i;
    int index_arr, index_l, index_r;
    int size_l, size_r;
    size_l = mid-left+1;
    size_r = right - mid;
    int L[size_l], R[size_r];

    for(i=0; i<size_l; i++)
    {
        L[i]=arr[left+i];
    }
    for(i=0; i<size_r; i++)
    {
        R[i]=arr[mid+1+i];
    }

    index_l=0;
    index_r=0;

    for(index_arr=left; index_l<size_l && index_r<size_r; index_arr++)
    {
        if(L[index_l]<R[index_r])
        {
            arr[index_arr]=L[index_l];
            index_l++;
        }
        else
        {
            arr[index_arr]=R[index_r];
            index_r++;
        }

    }

    while(index_l<size_l)
    {
        arr[index_arr]=L[index_l];
        index_l++;
        index_arr++;
    }

    while(index_r<size_r)
    {
        arr[index_arr]=R[index_r];
        index_r++;
        index_arr++;
    }
}

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

bool binary_search(int arr[], int size, int key)
{
    int l=0, r=size-1;
    int mid = l + (r-l)/2;

    while(l<=r)
    {
        if(arr[mid]==key)
        {
            return true;
        }
        else if(arr[mid]<key)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }

        mid = l + (r-l)/2;
    }

    return false;
}

int main()
{
   
    int choice;
    cout<<"For:\nLinear Searching (Choose = 1)\nBinary Searching(Choose = 2)\n";
    cout<<"Choice = ";
    cin>>choice;

    if(choice==1)
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

    }
    else if(choice==2)
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

        merge_sort(arr, 0, size-1);
        cout<<"Sorted Array: "<<endl;
        for(int i=0; i<size; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;

        if(binary_search(arr, size, key))
        {
            cout<<"Found"<<endl;
        }
        else
        {
            cout<<"Not Found"<<endl;
        }

    }
    else
    {
        cout<<"Wrong Input."<<endl;
    }

    
    

    return 0;
}