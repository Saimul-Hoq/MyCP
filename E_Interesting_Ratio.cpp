#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int sz = 1e7;
vector<int>prime(sz+1, 1);

void sieve()
{
    prime[0]=0;
    prime[1]=0;
    for(int i=2; i*i<=sz; i++)
    {
        if(prime[i]==1)
        {
            for(int j=i*i; j<=sz; j+=i)
            {
                prime[j]=0;
            }
        }
    }
    for(int i=2; i<=sz; i++)
    {
        prime[i] = prime[i] + prime[i-1];
    }

}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    sieve();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll ans=0;
        for(int i=1; i<=n; i++)
        {
            ans+=(prime[n/i]);
        }
        cout<<ans<<endl;
    }

    
    
    return 0;
}