#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

class Assist
{
    public:
    int a;
    int b;
    int c;
};

int m,n;
vector<Assist>arr;

bool isPossible(int t)
{
    ll res=0;
    for(auto s: arr)
    {
        ll ans = 0;
        int a = s.a, b=s.b, c=s.c;
        ll d = (1LL*t)/(1LL*a*b+c);
        ans+=(d*b);
        int p = t -d*(a*b + c);
        
        int q = p/a;
        ans+=min(b,q);
        res+=ans;
        if(res>=m)
        {
            return true;
        }
    }

    return false;
}

int solve(int l, int r)
{
    int ans;
    while(l<=r)
    {
        int mid = l + (r-l)/2;
        if(isPossible(mid))
        {
            ans = mid;
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }
    return ans;
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>m>>n;
    
    for(int i=0; i<n; i++)
    {
        Assist ast;
        cin>>ast.a;
        cin>>ast.b;
        cin>>ast.c;
        arr.push_back(ast);
    }
    
    int l=0, r=1e8;
    int t = solve(l,r);
   
    cout<<t<<endl;
    
    for(auto s: arr)
    {
        int ans=0;
        int a = s.a, b=s.b, c=s.c;
        ll d = (1LL*t)/(a*b+c);
        ans+=(d*b);
        
        int p = t - d*(a*b + c);
        
        int q = p/a;
        ans+=min(b, q);
        ans = min(ans, m);
        m-=ans;

       
        cout<<ans<<" ";
    }
    cout<<endl;
    
    return 0;
}