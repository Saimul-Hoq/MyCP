#include<iostream>
using namespace std;


void selectionSort(int arr[], int size)
{
    int minIndex;
    for(int i=0; i<size-1; i++)
    {
        minIndex = i;

        for(int j=i+1; j<size; j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }
}

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

void bubbleSort(int arr[], int size)
{
    for(int k=0; k<size-1; k++)
    {
        for(int i=0, j=i+1; j<size-k; i++, j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}

//Merge Sort:
//------------------X----------------X--------------------X---------------------
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
//------------------X----------------X--------------------X---------------------



//Quick Sort:
//------------------X----------------X--------------------X---------------------
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
//------------------X----------------X--------------------X---------------------

void counting_sort(int arr[], int n)
{
    
    int count[101];
    for(int i=0; i<101; i++)
    {
        count[i]=0;
    }

    for(int i=0; i<n; i++)
    {
        
        count[arr[i]]++;
    }

    cout<<"Counting Sorted Array: ";
    for(int i=0; i<101; i++)
    {
        for(int j=1; j<=count[i]; j++)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;


}



int main()
{

    int size, *arr;

    cout<<"Enter Choice of Sorting: "<<endl;
    cout<<"Selection Sort, Enter 1."<<endl;
    cout<<"Insertion Sort, Enter 2."<<endl;
    cout<<"Bubble Sort, Enter 3."<<endl;
    cout<<"Merge Sort, Enter 4."<<endl;
    cout<<"Quick Sort, Enter 5."<<endl;
    cout<<"Counting Sort, Enter 6."<<endl;



    int choice;
    cout<<"Choice = ";
    cin>>choice;

    if(choice==1)
    {
        cout<<"Enter size:";
        cin>>size;

        arr = (int *)malloc(sizeof(int)*size);

        cout<<"Enter elements: "<<endl;

        for(int i=0; i<size; i++)
        {
            cin>>arr[i];
        }
        selectionSort(arr, size);
        cout<<"Selection Sorted array: ";
    }
    else if(choice==2)
    {
        cout<<"Enter size:";
        cin>>size;

        arr = (int *)malloc(sizeof(int)*size);


        cout<<"Enter elements: "<<endl;

        for(int i=0; i<size; i++)
        {
            cin>>arr[i];
        }
        insertionSort(arr, size);
        cout<<"Insertion Sorted array: ";
    }
    else if(choice==3)
    {
        cout<<"Enter size:";
        cin>>size;

        arr = (int *)malloc(sizeof(int)*size);


        cout<<"Enter elements: "<<endl;

        for(int i=0; i<size; i++)
        {
            cin>>arr[i];
        }
        bubbleSort(arr, size);
        cout<<"Bubble Sorted array: ";
    }
    else if(choice==4)
    {
        cout<<"Enter size:";
        cin>>size;

        arr = (int *)malloc(sizeof(int)*size);


        cout<<"Enter elements: "<<endl;

        for(int i=0; i<size; i++)
        {
            cin>>arr[i];
        }
        merge_sort(arr, 0, size-1);
        cout<<"Merge Sorted array: ";
    }
    else if(choice==5)
    {
        cout<<"Enter size:";
        cin>>size;

        arr = (int *)malloc(sizeof(int)*size);


        cout<<"Enter elements: "<<endl;

        for(int i=0; i<size; i++)
        {
            cin>>arr[i];
        }
        quick_sort(arr, 0, size-1);
        cout<<"Quick Sorted array: ";
    }
    else if(choice == 6)
    {
        cout<<"Enter size:";
        cin>>size;

        arr = (int *)malloc(sizeof(int)*size);


        cout<<"Enter elements: "<<endl;

        for(int i=0; i<size; i++)
        {
            cin>>arr[i];
        }
        counting_sort(arr, size);

    }
    else
    {
        cout<<"Invalid Input"<<endl;
    }
    



    

    if(choice!=6)
    {

        for(int i=0; i<size; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}