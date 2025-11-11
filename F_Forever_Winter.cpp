#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         



void saim()
{
    int n,m;
    cin>>n>>m;
    vector<int> adjList[n+1];
    vector<bool>visit(n+1, false);
    
    for(int i=1; i<=m; i++)
    {
        int u,v;
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    int count=0;
    for(int i=1; i<=n; i++)
    {
        if(adjList[i].size()==1)
        {
            count++;
            visit[i] = true;
            visit[adjList[i].back()] = true;
        }
    }
    int src;
    for(int i=1; i<=n; i++)
    {
        if(visit[i]==false) 
        {
            src=i;
            break;
        }
    }

    int x = adjList[src].size();
    int y = count/x;

    cout<<x<<" "<<y<<endl;
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