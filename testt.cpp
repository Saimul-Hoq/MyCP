#include<iostream>
#include<climits>
using namespace std;
int main()
{

int n, i=0, j=0, k=0;
    cout<<"Enter the size: ";
    cin>>n;
    int arr[n], carr[n];
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    while(k<n)
    {
        while(j<n)
        {
            if(arr[i]>arr[j])
            {
                i=j;
                j++;
            }
            else
            {
                j++;
            }
        }
        carr[k]=arr[i];
        arr[i]=INT_MAX;
        k++;
    }
}