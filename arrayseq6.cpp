#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n, i=0, j=0, k=0;
    cout<<"Enter the size of the the array: ";
    cin>>n;
    int arr[n];
    
    cout<<"Enter the elements: ";

    while(i<n)
    {
        cin>>arr[i];
        i++;
    }
    i=0;

    int carr[n];
    int p=(n-1);

    cout<<"Deccending values are: ";

    while(k<n)
    {
        while(j<n)
        {
            if(arr[i]<arr[j])
            {
                i=j;
                j++;
            }
            else
            {
                j++;
            }
            
        }
        cout<<arr[i]<<" ";
        carr[p] = arr[i];
        arr[i]=INT_MIN;
        i=0;
        j=0;
        k++;
        p--;
    }
    cout<<endl;

    
    cout<<"Accending values are: ";
    while(p<n)
    {
        cout<<carr[p]<<" ";
        p++;
    }

    return 0;
}

       