#include<bits/stdc++.h>
using namespace std;

vector<int> adjList[105];
bool visit[105];
int parent[105];
bool cycle;

// void dfs(int source)
// {
//     visit[source]=true;

//     for(int i: adjList[source])
//     {
//         if(visit[i] && parent[source]!=i)
//         {
//             cycle = true;
//         }
//         if(!visit[i])
//         {
//             parent[i]=source;
//             dfs(i);
//         }
//     }
// }

void dfs(int source)
{
    visit[source] = true;

    for(int i: adjList[source])
    {
        if(visit[i] && parent[source]!=i)
        {
            cycle = true;
        }
        if(!visit[i])
        {
            parent[i] = source;
            dfs(i);
        }
    }
}


void bfs(int source)
{
    queue<int>q;
    q.push(source);
    visit[source]=true;

    while(!q.empty())
    {
        int par = q.front();
        q.pop();

        for(int i: adjList[par])
        {
            if(!visit[i])
            {
                q.push(i);
                visit[i]=true;
                parent[i]=par;
            }
            else if(visit[i] && parent[par]!=i)
            {
                cycle=true;
            }
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
    memset(parent, -1, sizeof(parent));
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



