#include<bits/stdc++.h>
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

        int arr[21];
        for(int i=0; i<21; i++)
        {
            arr[i]=0;
        }

        int num, sum=0;

        for(int i=0; i<n; i++)
        {
            cin>>num;
            arr[num]++;
        }

        for(int i=1; i<=20; i++)
        {
            if(arr[i]%2==0)
            {
                sum=sum+arr[i]/2;
            }
            else
            {
                arr[i]--;
                sum=sum+arr[i]/2;
                
            }
        }

        cout<<sum<<endl;
    }

    return 0;
}