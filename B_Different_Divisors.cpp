#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int sz = 2e5;
set<int>primes;
void sieve()
{
    vector<bool>isPrime(sz+1, true);
    for(int i=2; i*i<=sz; i++)
    {
        if(isPrime[i])
        {
            for(int j=i*i; j<=sz; j+=i)
            {
                isPrime[j]=false;
            }
        }
    }

    for(int i=2; i<=sz; i++)
    {
        if(isPrime[i])
        {
            primes.insert(i);
        }
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
        int d;
        cin>>d;
        int a=d+1, b=a+d;
        a=*primes.lower_bound(a);
        b=*primes.lower_bound(b);
        while((b-a)<d)
        {
            b++;
            b=*primes.lower_bound(b);
        }
        ll ans = a*b;
        cout<<ans<<endl;
    }

    
    
    return 0;
}