#include<iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{
    int p=1;
    for(int k=0; k<size-1; k++)
    {
        for(int i=0, j=i+1; j<size-k; i++, j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i], arr[j]);
                
            }
            
        }
        cout<<"Phase "<<p<<" : ";
                
            for(int i=0; i<size; i++)
            {
                cout<<arr[i]<<" ";
            }
            p++;
            cout<<endl;
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


    bubbleSort(arr, size);



    cout<<"Sorted Array: "<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}