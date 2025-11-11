#include<iostream>
#include<stdlib.h>
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

//Question-1:
/*int main()
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
}*/

//Question-2:
/*int main()
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

    merge_sort(arr, 0, size-1);


    int key;
    cout<<"Enter Key :";
    cin>>key;
    if(binary_search(arr, size, key))
    {
        cout<<"Found"<<endl;
    }
    else
    {
        cout<<"Not Found"<<endl;
    }

    return 0;

}*/

//Question-3:
/*int main()
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
}*/

//Question-4:
/*int main()
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
}*/

//Question-5:

/*int rectangle()
{
    int a, b;
    cout<<"Enter the length of 2 sides: ";
    cin>>a>>b;

    return a*b;

}

int square()
{
    int a;
    cout<<"Enter the length of the square: ";
    cin>>a;

    return a*a;
}

int trapezoid()
{
    int a, b, h;
    cout<<"Enter,\nLength of two parallel sides: ";
    cin>>a>>b;
    cout<<"Height: ";
    cin>>h;

    return 0.5*(a+b)*h;
}

int rhombus()
{
    int d1, d2;
    cout<<"Enter the length of two diagonal: ";
    cin>>d1>>d2;

    return (d1*d2)/2;
}

int parallelogram()
{
    int b, h;
    cout<<"Enter base and height: ";
    cin>>b>>h;

    return b*h;
}

int main()
{
    int choice;
    cout<<"Choose any option:"<<endl;
    cout<<"Rectangle, choose 1"<<endl;
    cout<<"Square, choose 2"<<endl;
    cout<<"Rhombus, choose 3"<<endl;
    cout<<"Parallelogram, choose 4"<<endl;
    cout<<"Trapezoid, choose 5"<<endl;

    cout<<"Enter Choice : ";
    cin>>choice;

    if(choice==1)
    {
        int area = rectangle();
        cout<<"Area = "<<area<<endl;
        
    }
    else if(choice==2)
    {
        int area = square();
        cout<<"Area = "<<area<<endl;
    }
    else if(choice==3)
    {
        int area = rhombus();
        cout<<"Area = "<<area<<endl;
    }
    else if(choice==4)
    {
        int area = parallelogram();
        cout<<"Area = "<<area<<endl;
    }
    else if(choice==5)
    {
        int area = trapezoid();
        cout<<"Area = "<<area<<endl;
    }


    return 0;



}*/

//Question-6:

/*int main()
{
    int year1, year2, check=0;
    cout<<"Enter two years: ";
    cin>>year1>>year2;
    for(int i=year1; i<=year2; i++)
    {
        if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
        {
            cout<<i<<endl;
            check=1;
        }
    }
    if(check==0)
    {
        cout<<"There is no leap year between the two."<<endl;
    }

    return 0;
}*/

//Question=7
/*int main()
{
    int row, col;
    cout<<"Enter row and column: ";
    cin>>row>>col;

    int arr[row][col];

    for(int r=0; r<row; r++)
    {
        for(int c=0; c<col; c++)
        {
            cin>>arr[r][c];
        }
    }
    int sum=0;


    for(int r=0, c=0; r<row; r++, c++)
    {
        sum+=arr[r][c];
    }

    for(int r=0, c=col-1; r<row; r++, c--)
    {
        sum+=arr[r][c];
    }

    cout<<"Sum = "<<sum<<endl;
    cout<<"Average = "<<(double)sum/(row*col)<<endl;

    return 0;

    

}*/

//Question-8
int main()
{
    int size;
    cout<<"Enter Size: ";
    cin>>size;
    int id[size];

    cout<<"Enter Elements: ";
    for(int i=0; i<size; i++)
    {
        cin>>id[i];
    }

    int max=id[0], min=id[0], sum=id[0], count=0, countdup=0;

    for(int i=1; i<size; i++)
    {
        if(max<id[i])
        {
            max=id[i];
        }
        if(min>id[i])
        {
            min=id[i];
        }

        sum+=id[i];
    }

    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(id[i]==id[j] && j<i)
            {
                break;
            }
            else if(id[i]==id[j])
            {
                count++;
            }
            
        }
        if(count>1)
        {
            cout<<id[i]<<" Occured "<<count<<" times."<<endl;


        }

        count=0;
    }

    cout<<"Max = "<<max<<endl;
    cout<<"Min = "<<min<<endl;
    cout<<"Sum = "<<sum<<endl;
    cout<<"Average = "<<(double)sum/size<<endl;


    return 0;


}
