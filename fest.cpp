#include<iostream>
using namespace std;

int main()
{
    int n, arr[3], max;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>arr[j];
        }

        for(int r=0; r<3; r++)
        {
            for(int c=r+1; c<3; c++)
            {
                if(arr[r]<arr[c])
                {
                    swap(arr[r],arr[c]);
                }
            }
        }

        if(arr[0]*arr[0]==arr[1]*arr[1]+arr[2]*arr[2])
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        cout<<endl;

        
    }

    return 0;
}