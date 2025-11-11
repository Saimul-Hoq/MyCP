#include<iostream>
using namespace std;
int main()
{
    int n, count=1, k=0;
    cin>>n;
    char * arr = new char[n];
    int * carr = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr;
    }
    int i=0;
    while(i<n)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
            else
            {
                carr[k]=count;
                k++;
                i=j;
            }
            count=1;
        }
    }
    int p=0;
    for(int j=0; j<k; j++)
    {
        if(carr[p]<carr[j])
        {
            p=j;
        }
    }

    cout<<carr[p];
    delete [] arr;
    delete [] carr;
    return 0;
}