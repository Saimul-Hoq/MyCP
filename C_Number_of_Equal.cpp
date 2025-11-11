#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int n,m;
    cin>>n>>m;
    map<int,int>a;
    map<int,int>b;
    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        a[val]++;
    }
    for(int i=0; i<m; i++)
    {
        
        int val;
        cin>>val;
        b[val]++;
    }
    long long sum = 0;
    for(auto [val, freq]: a)
    {
        if(b.count(val))
        {
            sum = sum + (long long)freq*b[val];
        }
    }
    cout<<sum<<endl;

    
    
    
    return 0;
}