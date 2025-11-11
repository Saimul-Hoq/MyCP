#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>des(n);
    for(int i=0; i<n; i++)
    {
        cin>>des[i];
    }
    multiset<int>ms;
    for(int i=0; i<m; i++)
    {
        int val;
        cin>>val;
        ms.insert(val);
    }
    sort(des.begin(), des.end());
    int count=0;
    for(int i=0; i<n; i++)
    {
        int val = max(0, (des[i]-k));
        auto a = ms.lower_bound(val);
        if(a!=ms.end() && (*a>=val && *a<=(des[i]+k)))
        {
            ms.erase(a);
            count++;
        }

    }

    cout<<count<<endl;

    
    
    return 0;
}