#include<bits/stdc++.h>
using namespace std;

vector<int> adjList[1005];
bool visit[1005];

void dfs(int source)
{
    visit[source]=true;
    cout<<source<<" ";

    for(int i: adjList[source])
    {
        if(!visit[i])
        {
            dfs(i);
        }
    }
}

int main()
{
    int n, e;
    cin>>n>>e;
    while(e--)
    {
        int a, b;
        cin>>a>>b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    memset(visit, false, sizeof(visit));
    int component=0;
    cout<<"Output:"<<endl;
    for(int i=0; i<n; i++)
    {
        if(!visit[i])
        {
            dfs(i);
            cout<<endl;
            component++;
        }
    }

    cout<<"Component = "<<component<<endl;
    
    
    return 0;
}