#include<iostream>
using namespace std;
#define endl "\n"

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int arr[200], n1, n2, limit, min;

        cin>>n1;
        for(int i=0; i<n1; i++)
        {
            cin>>arr[i];
        }

        cin>>n2;
        limit=n1+n2;
        for(int i=n1; i<limit; i++)
        {
            cin>>arr[i];
        }

        for(int i=0; i<limit-1; i++)
        {
            min=i;
            for(int j=i+1; j<limit; j++)
            {
                if(arr[j]<arr[min])
                {
                    min=j;
                }
            }

            swap(arr[i], arr[min]);
        }

        cout<<arr[0];
        for(int i=1; i<limit; i++)
        {
            cout<<" "<<arr[i];
        }
        cout<<endl;

        
    }

    return 0;
}