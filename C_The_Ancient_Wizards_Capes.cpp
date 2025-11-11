#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

int n;

class Wizard
{
    public:
    int lft;
    int rgt;
    char dirct;
};

int solve(vector<int>&arr, char ch)
{
    vector<Wizard>v(n+1);
    v[1].lft = 0;
    v[1].dirct = ch;
    v[1].rgt = arr[1]-1;

    for(int i=2; i<=n; i++)
    {
        v[i].lft = v[i-1].lft;
        if(v[i-1].dirct == 'l') v[i].lft+=1;
        v[i].rgt = arr[i] - v[i].lft - 1;
        if(v[i].rgt == v[i-1].rgt) v[i].dirct = 'l';
        else if(v[i].rgt == (v[i-1].rgt-1)) v[i].dirct = 'r';
        else return 0;
    }
    vector<int>check(n+2);
    check[n] = 0;
    if(v[n].rgt!=0) return 0;
    for(int i=n-1; i>=1; i--)
    {
        check[i] = check[i+1];
        if(v[i+1].dirct == 'r') check[i]++;
        if(check[i]!=v[i].rgt) return 0;
    }

    return 1;
}

void saim()
{
    cin>>n;
    vector<int>arr(n+1);
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    
    int ans = solve(arr, 'l') + solve(arr, 'r');
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