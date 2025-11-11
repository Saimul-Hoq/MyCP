#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int n;

bool isPossible(int k, vector<int>&ac, vector<int>&bc)
{
    int a = ac[k];
    k = n-k+1;
    int b = bc[k];
    
    return a>b;
}

int solve(vector<int>&ac, vector<int>&bc)
{
    int l=1, r=n, ans=0;
    while(l<=r)
    {
        int mid = l + (r-l)/2;
        if(isPossible(mid, ac, bc))
        {
            ans = mid;
            l = mid+1;
        }
        else
        {
            r=mid-1;
        }
    }

    return ans;
}


int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        
        cin>>n;
        vector<int>a(n+1), b(n+1);
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        for(int i=1; i<=n; i++)
        {
            cin>>b[i];
        }
        // vector<int>mn(n+2);
        // mn[1] = a[1];
        // for(int i=2; i<=n; i++)
        // {
        //     mn[i] = min(a[i], mn[i-1]);
        // }
        vector<int>mx(n+2);
        mx[n] = a[n];
        for(int i=n-1; i>=1; i--)
        {
            mx[i] = max(a[i], mx[i+1]);
        }
        vector<int>ac(n+1);
        set<int>s;
        s.insert(a[1]);
        ac[1] = mx[1];
        for(int i=2; i<n; i++)
        {
            s.insert(a[i]);
            auto imn = s.begin();
            int mn = *imn;
            imn++;
            int mn2 = *imn;
            if(mn<mx[i+1])
            {
                ac[i] = min(mn2, mx[i+1]);
            }
            else
            {
                ac[i] = mn;
            }
        }
        s.insert(a[n]);
        ac[n] = *s.begin();
        vector<int>bc(n+1);
        bc[1] = b[1];
        for(int i=2; i<=n; i++)
        {
            bc[i] = min(b[i], bc[i-1]);
        }

        cout<<solve(ac, bc)<<endl;
        
    }

    
    
    return 0;
}