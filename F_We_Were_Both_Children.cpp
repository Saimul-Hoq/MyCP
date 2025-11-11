#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>fr(n+1);
        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            if(val<=n)
            {
                fr[val]++;
            }
        }
        vector<int>mx(n+1);
        for(int i=1; i<=n; i++)
        {
            for(int j=i; j<=n; j+=i)
            {
                mx[j]+=fr[i];
            }
        }

        cout<<*max_element(mx.begin(), mx.end())<<endl;
    }

    
    
    return 0;
}