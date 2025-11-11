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

        unsigned long long arr[n+1];

        cout<<1<<endl<<1<<" "<<1<<endl;
        arr[0]=1;
        arr[1]=1;

        for(int d=2; d<=n; d++)
        {
            cout<<1<<" ";
            
            for(int i=0, j=i+1; i<=d-2; i++, j++)
            {
                cout<<arr[i]+arr[j]<<" ";
            }

            cout<<1<<endl;



            arr[0]=1;
            unsigned long long temp=1;
            int i, j;

            for(i=0, j=1; i<=d-2; i++,j++)
            {
                
                
                arr[j]=temp+arr[j];
                
                temp = arr[j]-temp;

            }

            arr[j]=1;

            

        }

        cout<<endl;
    }

    return 0;
}