#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        int n, count=0; 
        cin>>n;
        int arr[n], cntarr[n];
        for(int j=0; j<n; j++)
        {
            cin>>arr[j];
        }
        for(int r=0; r<n; r++)
        {
            for(int c=0; c<n; c++)
            {
                if(arr[r]==arr[c])
                {
                    count++;
                }
            }
            cntarr[r]=count;
            count=0;
        }
        int r,c;
        for( r=0; r<n; r++)
        {
            for( c=0; c<n; c++)
            {
                if(cntarr[r]<cntarr[c])
                {
                    swap(cntarr[r],cntarr[c]);
                }
            }
            
        }

        cout<<n-cntarr[r];


    }

}
