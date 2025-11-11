#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

int n,m;
ll ans;
ll sum;
pair<int,int> dirct[] = {{1,0}, {-1, 0}, {0, 1}, {0, -1}};

bool valid(int r, int c)
{
    if(r>=0 && r<n && c>=0 && c<m) return true;
    return false;
}

void dfs(int pi, int pj, vector<vector<int>>&arr, vector<vector<bool>>&flag)
{
    flag[pi][pj] = true;
    sum+=arr[pi][pj];

    for(int i=0; i<4; i++)
    {
        int ci = pi + dirct[i].first;
        int cj = pj + dirct[i].second;
        if(valid(ci, cj) && arr[ci][cj]!=0 && !flag[ci][cj])
        {
            dfs(ci, cj, arr, flag);
        }
    }
   
}

void saim()
{
    cin>>n>>m;
    vector<vector<int>> arr(n, vector<int>(m));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
    vector<vector<bool>> flag(n, vector<bool>(m, false));
    ans=0;
    sum=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(arr[i][j]!=0 && !flag[i][j])
            {
                sum=0;
                dfs(i, j, arr, flag);
                ans = max(ans, sum);
            }
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
        saim();
    }

    
    
    return 0;
}