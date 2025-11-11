#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    int ans=0;
    for(int k=1; k<=n; k++)
    {
        int val = k;
        set<int>s;
        int i=2;
        while(i*i<=val)
        {
            if(val%i==0)
            {
                val/=i;
                s.insert(i);
            }
            else
            {
                i++;
            }
        }
        if(val>1)
        {
            s.insert(val);
        }
        if(s.size()==2)
        {
            ans++;
        }
    }

    cout<<ans<<endl;

    
    
    return 0;
}