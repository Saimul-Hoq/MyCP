#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

//_______________________(1 + 0.01)^365 = 38____________________________

//_______________________(1 - 0.01)^365 = 0.02__________________________

void saim()
{
    ll n,m;
    cin>>n>>m;
    if(m<n || m>((n*(n+1)/2)))
    {
        cout<<-1<<endl;
        return;
    }

    if(m<2*n)
    {
        cout<<m-n+1<<endl;
        for(int i=2; i<=n; i++)
        {
            cout<<1<<" "<<i<<endl;
        }
        return;
    }

    if(m>=2*n)
    {
        cout<<n<<endl;
        cout<<n<<" "<<1<<endl;
        m-=(2*n-1);
        for(int i=n-1; i>=2; i--)
        {
            if(m>=(i-1))
            {
                cout<<n<<" "<<i<<endl;
                m-=(i-1);
            }
            else
            {
                cout<<1<<" "<<i<<endl;
            }
        }
        return;
    }
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        saim();
    }

    
    
    return 0;
}