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
        if(n==1)
        {
            cout<<-1<<endl;
        }
        else if(n%2==0)
        {
            for(int i=1; i<=n; i+=2)
            {
                cout<<3<<" "<<-3;
                if(i!=n-1)
                {
                    cout<<" ";
                }
            }
            cout<<endl;
        }
        else
        {
            for(int i=1; i<=n-3; i+=2)
            {
                cout<<3<<" "<<-3<<" ";               
            }
            cout<<1<<" "<<2<<" "<<-3<<endl;
        }
    }

    
    
    return 0;
}