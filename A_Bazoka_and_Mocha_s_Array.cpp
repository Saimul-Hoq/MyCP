#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int indx=-1;
        for(int i=1; i<n; i++)
        {
            if(arr[i]<arr[i-1])
            {
                indx=i;
                break;
            }

        }
        if(indx==-1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            bool check=true;

            if(arr[n-1]>arr[0])
            {
                check=false;
            }

            for(int i=indx+1; i<n && check; i++)
            {
                if(arr[i-1]>arr[i])
                {
                    check=false;
                    break;
                }
            }

            for(int i=1; i<indx && check; i++)
            {
                if(arr[i-1]>arr[i])
                {
                    check=false;
                    break;
                }
            }

            if(check)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
    }

    
    
    return 0;
}