#include<iostream>
using namespace std;
int main()
{
    int n, find, count=0;
    cout<<"Enter the number of elements you want to give input: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Frequency of: ";
    cin>>find;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==find)
        {
            count++;
        }
    }
    cout<<"Frequency of "<<find<<" is= "<<count<<endl;
    return 0;
}