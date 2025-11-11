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
        int n,m;
        cin>>n>>m;
        int p=-1, prev=0, ans=0;
        while(n--)
        {
            int a,b;
            cin>>a>>b;
            if(b==0)
            {
                b=-1;
            }
            int f = (a-prev)-1;
            ans+=f;
            if(f!=0 && f%2==1)
            {
                p*=(-1);
            }
            if(p!=b)
            {
                ans++;
                p=b;
            }
            prev = a;
        }

        ans+=(m-prev);
        cout<<ans<<endl;
    }
    
    
    return 0;
}