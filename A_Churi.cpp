#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    int arr[n], carr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=1; i<n; i++)
    {
        if(arr[i]>arr[i-1])
        {
            carr[i] = 1;
        }
        else
        {
            carr[i] = 2;
        }

    }
    if(carr[1]==1)
    {
        bool check1=false, check2=true;
        for(int i=2; i<n; i++)
        {
            if(carr[i]==2)
            {
                check1=true;
            }
            
        }
        for(int i=2; i<n; i++)
        {
            if(carr[i-1]>carr[i])
            {
                check2=false;
            }
        }
        if(check1 && check2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    else
    {
        bool check1=false, check2=true;
        for(int i=2; i<n; i++)
        {
            if(carr[i]==1)
            {
                check1=true;
            }
            
        }
        for(int i=2; i<n; i++)
        {
            if(carr[i-1]<carr[i])
            {
                check2=false;
            }
        }
        if(check1 && check2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    
    
    return 0;
}