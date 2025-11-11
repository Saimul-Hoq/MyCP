#include<bits/stdc++.h>
using namespace std;

vector<int> adjList[105];
bool visit[105];
bool path_visit[105];
bool cycle;


void dfs(int source)
{
    visit[source]=true;
    path_visit[source]=true;

    for(int i: adjList[source])
    {
        if(visit[i] && path_visit[i])
        {
            cycle=true;
        }
        if(!visit[i])
        {
            dfs(i);
        }
    }

    path_visit[source]=false;
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
        //adjList[b].push_back(a);
    }
    memset(visit, false, sizeof(visit));
    memset(path_visit, false, sizeof(path_visit));
    cycle=false;

    for(int i=0; i<n; i++)
    {
        if(!visit[i])
        {
            dfs(i);
        }
    }

    if(cycle)
    {
        cout<<"Cycle Detected."<<endl;
    }
    else
    {
        cout<<"No Cycle."<<endl;
    }
  
    return 0;
}