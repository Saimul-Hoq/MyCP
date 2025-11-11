#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin>>n>>q;
    vector<long long>v(n+1);
    v[0]=0;
    int num;
    for(int i=1; i<=n; i++)
    {
        cin>>num;
        v[i]=v[i-1]+num;
    }

    int l, r;
    for(int i=0; i<q; i++)
    {
        cin>>l>>r;
        cout<<v[r]-v[l-1]<<endl;
    }

    return 0;
}