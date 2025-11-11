#include<iostream>
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
    cout<<"Enter 1 for Linear Search:\nEnter 2 for Binary Search: \nChoice: ";
    cin>>choice;
    if(choice == 1)
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
        cout<<"Enter Key: ";
        cin>>key;
        cout<<"Applying Linear Search: "<<endl;
        if(linear_search(arr, size, key))
        {
            cout<<"Found"<<endl;
        }
        else
        {
            cout<<"Not Found"<<endl;
        }

    }
    else if(choice == 2)
    {
        
        
        int sort_choice;
        cout<<"Sorting Options: "<<endl;
        cout<<"Enter 1 for Insertion Sort.\nEnter 2 for Quick Sort\nEnter 3 for Merge Sort."<<endl;
        cout<<"Sorting Choice: ";
        cin>>sort_choice;

        if(sort_choice>3 || sort_choice<1)
        {
            cout<<"Wrong Option"<<endl;
            
        }
        else if(sort_choice == 1)
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

            cout<<"Applying Inertion Sort:"<<endl;
            insertionSort(arr, size);
            cout<<"Sorted Array: "<<endl;
            for(int i=0; i<size; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;

            int key;
            cout<<"Enter Key for Binary Search: ";
            cin>>key;
            cout<<"Applying Binary Search: "<<endl;
            if(binary_search(arr, size, key))
            {
                cout<<"Found"<<endl;
            }
            else
            {
                cout<<"Not Found"<<endl;
            }
        }
        else if(sort_choice == 2)
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

            cout<<"Applying Quick Sort: "<<endl;
            quick_sort(arr, 0, size-1);
            cout<<"Sorted Array: "<<endl;
            for(int i=0; i<size; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;

            int key;
            cout<<"Enter Key for Binary Search: ";
            cin>>key;
            cout<<"Applying Binary Search: "<<endl;
            if(binary_search(arr, size, key))
            {
                cout<<"Found"<<endl;
            }
            else
            {
                cout<<"Not Found"<<endl;
            }

        }
        else if(sort_choice == 3)
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

            cout<<"Applying Merge Sort: "<<endl;
            merge_sort(arr, 0, size-1);
            cout<<"Sorted Array: "<<endl;
            for(int i=0; i<size; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;

            int key;
            cout<<"Enter Key for Binary Search: ";
            cin>>key;
            cout<<"Applying Binary Search: "<<endl;
            if(binary_search(arr, size, key))
            {
                cout<<"Found"<<endl;
            }
            else
            {
                cout<<"Not Found"<<endl;
            }

        }

        
        
    }
    
    
    return 0;
}