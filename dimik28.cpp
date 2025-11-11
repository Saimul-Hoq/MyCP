#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, check1=0, check2=0;
        cin>>n;
        int arr[n];


        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        for(int i=0, j=1; j<n; i++, j++)
        {
            if(arr[i]>arr[j])
            {
                check1=1;
                break;
            }
        }

        for(int i=0, j=1; j<n; i++, j++)
        {
            if(arr[i]<arr[j])
            {
                check2=1;
                break;
            }
        }

        if(check1==1 && check2==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}