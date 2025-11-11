#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

int ans;

pair<int,int> solve(int i, vector<int> arr[], vector<char>&clr)
{
    if(arr[i].size()==0)
    {
        if(clr[i]=='W') return {1, 0};
        else return {0, 1};
    }

    int w=0, b=0;
    for(int j: arr[i])
    {
        pair<int,int> p = solve(j, arr, clr);
        w+=p.first;
        b+=p.second;
    }

    if(clr[i]=='W') w++;
    else b++;
    if(w==b) ans++;
    return {w,b};
}

void saim()
{
    int n;
    cin>>n;
    vector<int> arr[n+1];
    for(int i=2; i<=n; i++)
    {
        int pr;
        cin>>pr;
        arr[pr].push_back(i);
    }
    string s;
    cin>>s;
    vector<char>clr(n+1);
    for(int i=1; i<=n; i++)
    {
        clr[i] = s[i-1];
    }
   
    ans=0;
    solve(1, arr, clr);
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