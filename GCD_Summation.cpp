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
        int n,k;
        cin>>n>>k;
        if(k<(n-1))
        {
            cout<<-1<<endl;
        }
        else if(k==(n-1))
        {
            for(int i=1; i<=n; i++)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else if(n==2)
        {
            cout<<k<<" "<<2*k<<endl;
        }
        else
        {
            k-=(n-2);

            int p = 1e9;
            for(int i=0; i<n-3; i++)
            {
                cout<<p<<" ";
                p--;
            }
            cout<<1<<" "<<k<<" "<<2*k<<endl;
            
        }



    }




    
    
    return 0;
}