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
        long long n,k,x;
        cin>>n>>k>>x;

        if(k>30)
        {
            cout<<"No"<<endl;
        }
        else
        {
            k--;
            unsigned long long p = 1;
            while(k--)
            {
                p*=2;
            }
        
            if(x>=p)
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