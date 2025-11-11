#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

long long turn_on_kth_bit(long long n, int k)
{
    return ((1LL<<k)|n);
}

long long turn_off_kth_bit(long long n, int k)
{
    return ((~(1LL<<k))&n);
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        long long b,c,d;
        cin>>b>>c>>d;
        long long a = b;
        int k=__lg(d);
        for(; k>=0; k--)
        {
            if(((d>>k)&1)==1)
            {
                a = turn_on_kth_bit(a, k);
            }
            if(((d>>k)&1)==1 && ((c>>k)&1)==1)
            {
                a = turn_off_kth_bit(a, k);
            }
        }

        long long ans = (a|b) - (a&c);
        if(ans==d)
        {
            cout<<a<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
        

    }

    
    
    return 0;
}