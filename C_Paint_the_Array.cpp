#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

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
        ll arr[n];
        
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        ll gcd1=arr[0], gcd2=arr[1];
        for(int i=0; i<n; i+=2)
        {
            gcd1 = __gcd(gcd1, arr[i]);
        }
        for(int i=1; i<n; i+=2)
        {
            gcd2 = __gcd(gcd2, arr[i]);
        }

        if(gcd1==gcd2)
        {
            cout<<0<<endl;
        }
        else
        {
            ll d = gcd1;
            int a,b;
            bool check1 = true;
            for(int i=1; i<n; i++)
            {
                if(arr[i-1]%d==0)
                {
                    a=1;
                }
                else
                {
                    a=0;
                }
                if(arr[i]%d==0)
                {
                    b=1;
                }
                else
                {
                    b=0;
                }
                if(a==b)
                {
                    check1=false;
                    break;
                }
            }
            
            d = gcd2;
            bool check2=true;
            for(int i=1; i<n; i++)
            {
                if(arr[i-1]%d==0)
                {
                    a=1;
                }
                else
                {
                    a=0;
                }
                if(arr[i]%d==0)
                {
                    b=1;
                }
                else
                {
                    b=0;
                }
                if(a==b)
                {
                    check2=false;
                    break;
                }
            }

            if(check1)
            {
                cout<<gcd1<<endl;
            }
            else if(check2)
            {
                cout<<gcd2<<endl;
            }
            else
            {
                cout<<0<<endl;
            }

        }
    }

    
    
    return 0;
}