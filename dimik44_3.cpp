#include<iostream>
using namespace std;
#define endl "\n"


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n; 
        cin>>n;

        unsigned long long arr[n+1], temp=1;

        cout<<1<<endl;
        cout<<1<<" "<<1<<endl;

        arr[0]=1;
        arr[1]=1;

        int i;
        for(int d=2; d<=n; d++)
        {
            //Making Array:
            for(i=1; i<=d-1; i++)
            {
                arr[i]=temp+arr[i];
                temp=arr[i]-temp;
            }
            arr[i]=1;

            //Printing Array:
            cout<<1;
            for(int i=1; i<=d; i++)
            {
                cout<<" "<<arr[i];
            }
            cout<<endl;

        }
        
        cout<<endl;


    }

    return 0;
}

