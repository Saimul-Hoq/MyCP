#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int arr[100];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        for(int i=0; i<n; i+=2)
        {
            cout<<arr[i];
            if(i!=(n-2) && i!=(n-1))
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}