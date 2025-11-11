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
        ll k,x;
        cin>>k>>x;
        ll n = (1LL<<k);
        ll y = 2*n - x;
        int count=0;
        vector<int>steps;
        while(x!=n)
        {
            if(n>x)
            {
                y-=x;
                x*=2;
                count++;
                steps.push_back(1);
            }
            else
            {
                x-=y;
                y*=2;
                count++;
                steps.push_back(2);
            }
        }
        cout<<count<<endl;
        for(int i=steps.size()-1; i>=0; i--)
        {
            cout<<steps[i]<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}