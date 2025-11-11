#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

ll n,k,x;
ll arr[200005];

bool isPossible(ll mid)
{
    ll count=0;
    for(int i=1; i<n; i++)
    {
        count += max(0LL, ((arr[i]-arr[i-1])-2*mid+1));
    }
    count += max(0LL, (x - (arr[n-1]+mid) + 1));
    count += max(0LL, (arr[0]-mid+1));

    if(count>=k) return true;
    return false;
}

ll solve()
{
    ll l=0, r=1e9+5, ans=0;
    while(l<=r)
    {
        ll mid = l + (r-l)/2;
        if(isPossible(mid))
        {
            ans = mid;
            l = mid+1;
        }
        else
        {
            r = mid-1;
        }
    }

    return ans;
}

void saim()
{
    cin>>n>>k>>x;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);

    ll dis = solve();

    if(dis==0)
    {
        for(int i=0; i<k; i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    vector<int>ans;
    for(int i=1; i<n; i++)
    {
        if((arr[i]-arr[i-1])>=2*dis)
        {
            int p = (arr[i]-arr[i-1]) - 2*dis + 1;
            int strt = (arr[i]+arr[i-1])/2;
            ans.push_back(strt);
            
            int lft = (p-1)/2, pt=strt-1;
            for(int m=1; m<=lft; m++)
            {
                ans.push_back(pt);
                pt--;
            }
            int rgt = p - 1 - lft;
            pt = strt+1;
            for(int m=1; m<=rgt; m++)
            {
                ans.push_back(pt);
                pt++;
            }
        }
    }

    
    for(int i=0; 1; i++)
    {
        if(arr[0]-i>=dis)
        {
            ans.push_back(i);
        }
        else
        {
            break;
        }
    }
    for(int i=x; 1; i--)
    {
        if(i-arr[n-1]>=dis)
        {
            ans.push_back(i);
        }
        else
        {
            break;
        }
    }
    
    int kk=0;
    //sort(ans.begin(), ans.end());
    for(int val: ans)
    {
        cout<<val<<" ";
        kk++;
        if(kk==k) break;
    }
    cout<<endl;

}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    int t;
    cin>>t;
    while(t--)
    {
        saim();
    }
    
    
    return 0;
}