#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int n, m;
string s,t;
vector<int>arr;

bool isPossible(int k)
{
    vector<bool>carr(n, false);
    for(int i=0; i<k; i++)
    {
        carr[arr[i]-1]=true;
    }
    int d=0, c=0;
    
    for(int i=0; i<n; i++)
    {
        if((s[i]==t[c]) && !carr[i])
        {
            c++;
            if(c==m)
            {
                return true;
            }
        }
    }
    return false;
}

int solve(int l, int r)
{
    int ans;
    while(l<=r)
    {
        int mid = (r+l)/2;
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

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>s>>t;
    n = s.size();
    m = t.size();
    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        arr.push_back(val);
    }
    
    int l = 0, r=n;
    cout<<solve(l,r)<<endl;

    
    
    return 0;
}