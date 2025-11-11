#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int const sz = 1e6;
vector<bool>isPrime(sz+1, true);

void sieve()
{
    isPrime[1] = false;
    for(int i=2; i*i<=sz; i++)
    {
        if(isPrime[i])
        {
            for(int j=i*i; j<=sz; j+=i)
            {
                isPrime[j] = false;
            }
        }
    }
}


int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    vector<ll>arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sieve();
    for(int i=0; i<n; i++)
    {
        ll val = arr[i];
        ll root = sqrt(val);
        if(root*root != val)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(isPrime[root])
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }

    
    
    return 0;
}