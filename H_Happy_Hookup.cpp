#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

int n,m;
vector<int> arr[100005];
bool flag[100005];
vector<int>ans(100005,0);

void dfs(int i)
{
    flag[i]=true;
    ans[i]++;

    for(int j: arr[i])
    {
        if(!flag[j])
        {
            dfs(j);
        }
    }
}

void saim()
{
    cin>>n>>m;
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        arr[a].push_back(b);
    }
    memset(flag, false, sizeof(flag));
    int a,b;
    cin>>a>>b;
    dfs(a);
    memset(flag, false, sizeof(flag));
    dfs(b);
    bool check=false;
    for(int i=1; i<=n; i++)
    {
        if(ans[i]==2)
        {
            cout<<"yes"<<endl;
            cout<<i<<endl;
            check=true;
            break;
        }
    }
    if(!check) cout<<"no";
    

}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    saim();

    
    
    return 0;
}