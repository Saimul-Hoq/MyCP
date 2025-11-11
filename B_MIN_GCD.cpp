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
        long long mi=-1, mv=-1;
        long long arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(mv==-1 || arr[i]<mv)
            {
                mv = arr[i];
                mi = i;

            }
        }

        

        long long gcd = -1;
        for(int i=0; i<n; i++)
        {
            if(i!=mi && arr[i]%mv==0)
            {
                if(gcd==-1)
                {
                    gcd = arr[i];
                }
                else
                {
                    gcd = __gcd(gcd, arr[i]);
                }
                if(gcd==mv || gcd==1)
                {
                    break;
                }
            }
        }

        if(gcd!=mv)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }

    
    
    return 0;
}