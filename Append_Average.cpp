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
        unsigned long long sum=0;
        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            sum+=val;
            ms.insert(val);
        }

        int a = *ms.begin();
        auto ib = ms.begin();
        ib++;
        int b = *ib;
        int prev = (a + b + 1)/2;
        ms.insert(prev);
        int cur=-183;
        k--;
        sum+=prev;
        while(k>0)
        {
            a = *ms.begin();
            ib = ms.begin();
            ib++;
            b = *ib;
            cur = (a + b + 1)/2;
            if(cur==prev)
            {
                break;
            }
            else
            {
                prev = cur;
                k--;
                ms.insert(cur);
                sum+=cur;
            }
        }
        if(k>0)
        {
            sum+=(1LL*k*prev);
        }
        

        cout<<sum<<endl;
        
    }

    
    
    return 0;
}