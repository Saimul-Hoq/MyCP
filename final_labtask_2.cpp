#include<iostream>
using namespace std;

int selectionSort(int arr[], int size)
{
    int count =0;
    for(int i=0; i<size-1; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i], arr[j]);
                count++;
            }

        }
    }

    return count;
}

void binarysearch(int arr[], int size, int num)
{
    int initial=0, final=size-1;
    int mid=(initial+final)/2, cnt=0;

    while(initial<=final)
    {
        if(arr[mid]==num)
        {
            cout<<"Found"<<endl;
            cout<<"Fount ad index "<<mid<<" in sorted array."<<endl;
            cnt++;
            cout<<"Number of comparison = "<<cnt<<endl;
            break;
        }
        else if(num>arr[mid])
        {
            initial=mid+1;
            cnt++;
        }
        else
        {
            final=mid-1;
            cnt++;
        }

        mid=(initial+final)/2;
    

    }

    if(cnt==0)
    {
        cout<<"NOT Found"<<endl;
    }

    
}

int main()
{
    int size;
    cout<<"Enter how many numbers you want to enter:";
    cin>>size;
    int arr[size], count;

    cout<<"Enter the elements: "<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    count=selectionSort(arr, size);

    
    cout<<"Selection sorted array: ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int num;
    cout<<"Search Number: ";
    cin>>num;

    binarysearch(arr, size, num);

    return 0;


    

}