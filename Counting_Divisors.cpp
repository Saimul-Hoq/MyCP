#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int sz = 1e6;
    vector<int>divisors(sz+1, 1);
    for(int i=2; i<=sz; i++)
    {
        for(int j=i; j<=sz; j+=i)
        {
            divisors[j]++;
        }
    }

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<divisors[n]<<endl;
    }

    
    
    return 0;
}