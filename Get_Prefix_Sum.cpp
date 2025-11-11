#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<long long>v(n);
    cin>>v[0];
    int num;
    for(int i=1; i<n; i++)
    {
        cin>>num;
        v[i]=v[i-1]+num;
    }

    cout<<v[n-1];
    for(int i=n-2; i>=0; i--)
    {
        cout<<" "<<v[i];
    }
    cout<<endl;

    return 0;
}