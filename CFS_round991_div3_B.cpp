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
        long long arr[n], sum=0, m, dif=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }

        if(sum%n!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            m=sum/n;
            for(int i=1; i<n-1; i++)
            {
                if(arr[i-1]>m)
                {
                    dif=arr[i-1]-m;
                    arr[i-1]=m;
                    arr[i+1]+=dif;
                    dif=0;
                }
                else if(arr[i-1]<m)
                {
                    dif=m-arr[i-1];
                    arr[i-1]=m;
                    arr[i+1]-=dif;
                    dif=0;
                }
            }
            if(arr[n-1]==m && arr[n-2]==m)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}