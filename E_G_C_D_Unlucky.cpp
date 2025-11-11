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
        long long p[n], s[n];
        for(int i=0; i<n; i++)
        {
            cin>>p[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>s[i];
        }

        bool check = true;
        for(int i=0; i<n-1; i++)
        {
            if((p[i]%p[i+1])!=0)
            {
                check=false;
                break;
            }
            
        }
        for(int i=1; i<n & check; i++)
        {
            if((s[i]%s[i-1])!=0)
            {
                check=false;
                break;
            }
        }

        // if(p[n-1]!=s[0])
        // {
        //     check=false;
        // }

        long long ans[n];
        for(int i=0; i<n; i++)
        {
            long long lcm = (p[i]/__gcd(p[i],s[i]))*s[i];
            ans[i] = lcm;
        }

        if(ans[0]!=p[0])
        {
            check=false;
        }
        if(ans[n-1]!=s[n-1])
        {
            check=false;
        }
        for(int i=1; i<n && check; i++)
        {
            if(__gcd(p[i-1], ans[i])!=p[i])
            {
                check=false;
                break;
            }
        }

        for(int i=n-2; i>=0 && check; i--)
        {
            if(__gcd(s[i+1], ans[i])!=s[i])
            {
                check=false;
            }
        }
        
        if(check)
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