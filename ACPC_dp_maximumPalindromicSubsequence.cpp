#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

int n;
string s;
int dp[1005][1005];
pair<int,int> nxt[1005][1005];

int solve(int i, int j)
{
    if(i==j) return 1;
    if(i>j) return 0;

    if(dp[i][j]!=-1) return dp[i][j];

    if(s[i]==s[j])
    {
        nxt[i][j] = {i+1, j-1};
        return dp[i][j] = solve(i+1, j-1) + 2;
    } 
    else
    {
        int val1 = solve(i+1, j);
        int val2 = solve(i, j-1);
        if(val1>val2) nxt[i][j] = {i+1, j};
        else nxt[i][j] = {i, j-1};
        return dp[i][j] = max(val1, val2);
    }
}
deque<char> ans;
void print(int i, int j)
{
    if(i==j)
    {
        ans.push_back(s[i]);
        return;
    } 
    if(i>j) return;

    print(nxt[i][j].first, nxt[i][j].second);
    if(s[i]==s[j])
    {
        ans.push_front(s[i]);
        ans.push_back(s[j]);
    }
    
}

void print_withoutNext(int i, int j)
{
    if(i==j)
    {
        ans.push_back(s[i]);
        return;
    }
    if(i>j) return;

    if(s[i]==s[j]) print_withoutNext(i+1, j-1);
    else
    {
        int val1 = dp[i+1][j];
        int val2 = dp[i][j-1];
        if(val1>val2) print_withoutNext(i+1, j);
        else print_withoutNext(i, j-1);
    }

    if(s[i]==s[j])
    {
        ans.push_front(s[i]);
        ans.push_back(s[j]);
    }
}

void saim()
{
    
    cin>>s;
    n=s.size();
    memset(dp, -1, sizeof(dp));
    cout<<solve(0, n-1)<<endl;
    //print(0, n-1);
    print_withoutNext(0, n-1);
    for(char ch: ans)
    {
        cout<<ch<<endl;
    }

    
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    saim();
    
    
    return 0;
}