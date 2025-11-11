#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int n,d;
ll c;

bool isPossible(int k, vector<ll>&csum)
{
    ll tc, sc, td, sd;
    int j=min(n, k+1);
    sd = j + max(0, k-n+1);
    sc = csum[j];
    ll dv = c/sc;
    tc = sc*dv;
    td = sd*dv;
    if(tc!=c)
    {
        for(int i=1; i<=n; i++)
        {
            if((tc+csum[i])>=c)
            {
                td+=i;
                break;
            }
        }
    }
    else
    {
        td-=(max(0, k-n+1));
    }
    
    
    return td<=d;

    
}

void solve(vector<ll>&csum)
{
    int l=0, r=2e5, ans=0;
    while(l<=r)
    {
        int mid = l + (r-l)/2;
        if(isPossible(mid, csum))
        {
            ans = mid;
            l = mid+1;
        }
        else
        {
            r = mid-1;
        }
    }

    cout<<ans<<endl;

}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>c>>d;
        vector<int>arr(n);
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(), arr.end(), greater<int>());
        
        
        vector<ll>csum(n+1);
        csum[0]=0;
        for(int i=1; i<=n; i++)
        {
            csum[i] = arr[i-1] + csum[i-1];
            
        }
        


        if((1LL*arr[0]*d) < c)
        {
            cout<<"Impossible"<<endl;
        }
        else
        {
            bool check=false;
            for(int i=1; i<=n; i++)
            {
                if(i<=d && csum[i]>=c)
                {
                    cout<<"Infinity"<<endl;
                    check=true;
                    break;
                }
            }
            if(!check)
            {
                solve(csum);
            }
        }

        
    }


    
    
    return 0;
}