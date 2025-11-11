#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

int n;
int arr[505][505];
int flag[505][505];
int cnt;

bool valid(int r, int c)
{
    if(r>=1 && r<=n && c>=1 && c<=n) return true;
    return false;
}

void solve(int r, int c, int val)
{
    if(cnt==val) return;
    arr[r][c] = val;
    flag[r][c] = true;
    cnt++;
    if(cnt==val) return;
    

    if(valid(r, c-1) && !flag[r][c-1]) solve(r, c-1, val);
    if(valid(r+1, c) && !flag[r+1][c]) solve(r+1, c, val);


}


void saim()
{

    cin>>n;
    for(int r=1, c=1; r<=n && c<=n; r++, c++)
    {
        cnt=0;
        int val;
        cin>>val;
        solve(r, c, val);
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    saim();
    
    
    return 0;
}