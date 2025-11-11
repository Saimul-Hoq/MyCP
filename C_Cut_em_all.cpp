#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

int n;
int ans;
vector<int> arr[100005];
bool vst[100005];

int solve(int i)
{
    vst[i] = true;

    int val=1;
    for(int j: arr[i])
    {
        if(!vst[j])
        {
            int k = solve(j);
            if(k%2==0) ans++;
            val+=k;
        }
    }

    return val;
}

void saim()
{
    ans=0;
    memset(vst, false, sizeof(vst));

    cin>>n;
    for(int i=1; i<n; i++)
    {
        int a,b;
        cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }

    
    if(n%2==1)
    {
        cout<<-1<<endl;
        return;
    }

    solve(1);
    cout<<ans<<endl;
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    saim();
    
    
    return 0;
}