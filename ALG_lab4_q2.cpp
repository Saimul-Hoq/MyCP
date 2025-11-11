#include<iostream>
using namespace std;




int main()
{
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];

    int count[101];
    for(int i=0; i<=100; i++)
    {
        count[i]=0;
    }
    cout<<"Enter Elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        count[arr[i]]++;
        cout<<"Phase "<<i+1<<" : ";
        for(int k=0; k<=n; k++)
        {
            cout<<count[k]<<" ";
        }
        cout<<endl;
    }

    cout<<"Sorted Array: ";
    for(int i=0; i<101; i++)
    {
        for(int j=1; j<=count[i]; j++)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;

    return 0;
}