#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,k;
    cin>>n>>k;
    multiset<int>ms;
    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        ms.insert(val);
    }
    int count=0;
    while(!ms.empty())
    {
        count++;
        int a  = *ms.begin();
        ms.erase(ms.begin());
        if(ms.empty())
        {
            break;
        }
        auto b = ms.lower_bound(k-a);
        if(b!=ms.end() && *b==(k-a))
        {
            ms.erase(b);
        }
        else if(b!=ms.begin())
        {
            b--;
            ms.erase(b);
        }
    }

    cout<<count<<endl;

    
    
    return 0;
}