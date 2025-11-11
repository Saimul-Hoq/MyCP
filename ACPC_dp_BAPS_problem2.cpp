#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


//Given n tasks with starting time, ending time and profit. no tasks can be overlapped. 
//What is the maximum profit?

int n;

class Task
{
    public:
    int l,r,profit;
};

bool cmp(Task a, Task b)
{
    return a.l < b.l;
}


vector<Task>arr(100005);
vector<int>v(100005);
int dp[100005];

int solve(int i)
{
    if(i==n) return 0;

    if(dp[i]!=-1) return dp[i];

    int nxt = upper_bound(v.begin(), v.begin()+n, arr[i].r)-v.begin();
   

    int val1 = arr[i].profit + solve(nxt);
    int val2 = solve(i+1);
    return dp[i] = max(val1, val2);
}

void saim()
{
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        Task t;
        t.l = a;
        t.r = b;
        t.profit = c;
        arr[i] = t;
    }
    sort(arr.begin(), arr.begin()+n, cmp);
    memset(dp, -1, sizeof(dp));
    for(int i=0; i<n; i++)
    {
        v[i] = arr[i].l;
    }

    cout<<solve(0)<<endl;
    

   
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    saim();
    
    
    return 0;
}