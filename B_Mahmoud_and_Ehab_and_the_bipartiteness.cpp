#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

int n;
vector<int> arr[100005];
bool vst[100005];
ll val1, val2;

void solve(int i, int sign)
{
    vst[i] = true;
    if(sign==1) val1++;
    else val2++;

    for(int val: arr[i])
    {
        if(!vst[val])
        {
            solve(val, sign*(-1));
        }
    }
}

void saim()
{
    cin>>n;
    for(int i=1; i<n; i++)
    {
        int a,b;
        cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    val1=0;
    val2=0;
    memset(vst, false, sizeof(vst));
    solve(1, 1);
    cout<<val1*val2 - (n-1)<<endl;
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    saim();

    
    
    return 0;
}