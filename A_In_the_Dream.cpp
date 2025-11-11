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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        bool check=true;
        int p = max(a,b);
        int q = min(a,b);
        int k = ceil((1.0*p)/2)-1;
        if(q<k)
        {
            check=false;
        }
        a = c-a;
        b = d-b;
        p = max(a,b);
        q = min(a,b);
        k = ceil((1.0*p)/2)-1;
        if(q<k)
        {
            check=false;
        }

        if(check)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    
    
    return 0;
}