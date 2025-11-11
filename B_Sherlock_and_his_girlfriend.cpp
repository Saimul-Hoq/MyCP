#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

vector<int>prime(100005, 1);

void seive(int n)
{
    n++;
    for(int i=2; i*i<=n; i++)
    {
        if(prime[i]==1)
        {
            for(int j=i*i; j<=n; j+=i)
            {
                prime[j]=2;
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
    seive(n);

    if(n<=2) cout<<1<<endl;
    else cout<<2<<endl;
    
    
    for(int i=2; i<=(n+1); i++)
    {
        cout<<prime[i]<<" ";
    }
    cout<<endl;

    
    
    return 0;
}