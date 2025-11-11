#include<bits/stdc++.h>
using namespace std;

vector<int> adjList[1005];
bool visit[1005];

// void dfs(int source)
// {
//     //No base case. 

//     cout<<source<<" ";
//     visit[source]=true;

//     for(int i: adjList[source])
//     {
//         if(!visit[i])
//         {
//             dfs(i);
//         }
//     }
// }

void dfs(int source)
{
    visit[source] = true;

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

    int source;
    cout<<"Enter source: ";
    cin>>source;

    dfs(source);


    
    
    return 0;
}