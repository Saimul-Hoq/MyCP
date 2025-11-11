#include<iostream>
using namespace std;
int main()
{
    int p=1, missing;
    long long n;
    cin>>n;
    int * arr = new int[n];
    for(int i=0; i<(n-1); i++)
    {
        cin>>arr[i];
    }
    int i=0;
    while(i<(n-1))
    {
        for(int j=i+1; j<(n-1); j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
        i++;
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=p)
        {
            missing=arr[i]-1;
            break;
            
        }
        else
        {
            p++;
        }
    }
    cout<<missing;



    delete [] arr;
    return 0;

}