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
        int n,m,k;
        cin>>n>>m>>k;
        vector<vector<char>>s(n+1, vector<char>(m+1));
        vector<vector<int>>arr(n+1, vector<int>(m+1));
        int sum=0;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                cin>>s[i][j];
                if(s[i][j]=='g')
                {
                    arr[i][j] = 1;
                    sum++;
                }
            }
        }
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                arr[i][j] = arr[i][j] + arr[i][j-1] + arr[i-1][j] - arr[i-1][j-1];
            }
        }
        int mn=INT_MAX;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                if(s[i][j]=='.')
                {
                    int mxr = min(n, i+k-1);
                    int mxc = min(m, j+k-1);

                    int mnr = max(1, i-k+1);
                    int mnc = max(1, j-k+1);

                    int gold = arr[mxr][mxc] - arr[mnr-1][mxc] - arr[mxr][mnc-1] + arr[mnr-1][mnc-1];
                    mn=min(mn, gold);
                }
            }
        }
        int ans = sum-mn;
        cout<<ans<<endl;
    }

    
    
    return 0;
}