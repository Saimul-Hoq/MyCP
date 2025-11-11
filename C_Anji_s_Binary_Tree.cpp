#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

int n;

class Node
{
    public:
    char ch;
    int lft;
    int rgt;
};

int solve(int i, vector<Node>&arr)
{
    if(arr[i].lft==0 && arr[i].rgt==0) return 0;

    int val1 = INT_MAX;
    int val2 = INT_MAX;
    if(arr[i].lft!=0) val1 = solve(arr[i].lft, arr) + (arr[i].ch!='L');
    if(arr[i].rgt!=0) val2 = solve(arr[i].rgt, arr) + (arr[i].ch!='R');

   
    return min(val1, val2);
}

void saim()
{
   
    cin>>n;
    string s;
    cin>>s;
    vector<Node>arr(n+1);
    for(int i=1; i<=n; i++)
    {
        int l,r;
        cin>>l>>r;
        Node nd;
        nd.lft = l;
        nd.rgt = r;
        nd.ch = s[i-1];
        arr[i] = nd;
    }

    cout<<solve(1, arr)<<endl;
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