#include<iostream>
using namespace std;
#define endl "\n"

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, arr[50], carr[50], mx=0, p;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        for(int i=0; i<n-1; i++)
        {
            int  max=i;
            for(int j=i+1; j<n; j++)
            {
                if(arr[max]<arr[j])
                {
                    max=j;
                }
            }
            swap(arr[i], arr[max]);
        }

        
        int i=0, j, k=0, count=1;
        for(j=1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
            else
            {
                carr[k]=count;
                k++;
                count=1;
                i=j;
            }
            
        }
        carr[k]=count;

        i=0;
        for(; i<=k; i++)
        {
            if(carr[i]%2==1)
            {
                cout<<"YES"<<endl;
                break;
            }
        }
        if(i==k+1)
        {
            cout<<"NO"<<endl;
        }

        
       

        


    }

    return 0;
}