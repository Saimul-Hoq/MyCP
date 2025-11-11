#include<iostream>
using namespace std;

int partition(int arr[], int low, int high)
{
    int i, j, pivote;
    pivote=arr[high];

    for(i=-1, j=0; j<high; j++)
    {
        if(arr[j]<pivote)
        {
            i+=1;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i+1], arr[high]);

    return i+1;
}

void quick_sort(int arr[], int low, int high)
{
    if(low>=high)
    {
        return;
    }

    int p = partition(arr, low, high);

    quick_sort(arr, low, p-1);

    quick_sort(arr, p+1, high);
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

    quick_sort(arr, 0, size-1);

    cout<<"Sorted Array: "<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;

}