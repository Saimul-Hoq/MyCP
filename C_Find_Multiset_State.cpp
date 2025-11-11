#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        multiset<int>ms;
        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            ms.insert(val);
        }
        while(k--)
        {
            auto ia = ms.begin();
            int a = *ia;
            ms.erase(ia);

            auto ib = ms.end();
            ib--;
            int b = *ib;
            ms.erase(ib);

            ms.insert(a+b);
        }

        for(int val: ms)
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}