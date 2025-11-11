#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

int n,m;
int cat[100005];
vector<int> arr[100005];
bool vst[100005];

ll solve(int i, int cnt)
{
    vst[i] = true;
    if(cat[i]==1) cnt++;
    else cnt=0;

    if(cnt>m) return 0;

    ll val=0, c=0;
    for(int j: arr[i])
    {
        if(!vst[j])
        {
            int p = solve(j, cnt);
            val+=p;
            c++;
        }
    }

    if(c==0)
    {
        return 1;
    }
    else 
    {
        return val;
    }

    
}

void saim()
{
    
    cin>>n>>m;
    
    for(int i=1; i<=n; i++)
    {
        cin>>cat[i];
    }
    
    for(int i=1; i<n; i++)
    {
        int a,b;
        cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    memset(vst, false, sizeof(vst));

    cout<<solve(1, 0)<<endl;
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    saim();

    
    
    return 0;
}