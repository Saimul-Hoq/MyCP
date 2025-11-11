#include<bits/stdc++.h>
using namespace std;

vector<int> adj_list[105];
int level[105];
int parent[105];
bool visit[105];

void bfs(int source)
{
    level[source] = 0;
    visit[source] = true;
    queue<int> q;
    q.push(source);

    while(!q.empty())
    {
        int par = q.front();
        q.pop();

        for(int child: adj_list[par])
        {
            if(!visit[child])
            {
                q.push(child);
                visit[child] = true;
                level[child] = level[par] + 1;
                parent[child] = par;
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
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(visit, false, sizeof(visit));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));

    int source, des;
    cout<<"Enter source and destination: ";
    cin>>source>>des;
    bfs(source);

    cout<<"Level of "<<des<<" = "<<level[des]<<endl;
    cout<<"Path: ";
    vector<int>v;
    while(des!=-1)
    {
        v.push_back(des);
        des = parent[des];
    }
    cout<<v.back();
    v.pop_back();
    while(!v.empty())
    {
        cout<<" -> "<<v.back();
        v.pop_back();
    }
    cout<<endl;
    
    
    return 0;
}