#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

bool check_kth_bit(int n, int k)
{
    return ((n>>k)&1);
}

int turn_on_kth_bit(int n, int k)
{
    return ((1<<k)|n);
}


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
        int x,y;
        int hn = __lg(n);
        x = (1<<hn);
        y=n-x;
        cout<<min(x,y)<<" "<<max(x,y)<<endl;
    }
    
    
    return 0;
}