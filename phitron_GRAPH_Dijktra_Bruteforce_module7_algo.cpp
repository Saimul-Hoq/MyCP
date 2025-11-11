#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int> > adjList[105];
int cost[105];
int parent[105];

void dijkstra(int source)
{
    queue<pair<int,int> > q;
    q.push(make_pair(source,0));
    cost[source]=0;

    while(!q.empty())
    {
        int par_node = q.front().first;
        int par_cost = q.front().second;
        q.pop();

        for(pair<int, int> p : adjList[par_node])
        {
            int child_node = p.first;
            int child_cost = p.second;
            int total_cost = par_cost+child_cost;
            if(total_cost<cost[child_node])
            {
                cost[child_node]=total_cost;
                q.push(make_pair(child_node, cost[child_node]));
                parent[child_node]=par_node;
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
        int a, b, c;
        cin>>a>>b>>c;
        adjList[a].push_back(make_pair(b, c));
        adjList[b].push_back(make_pair(a, c));
    }

    for(int i=0; i<n; i++)
    {
        cost[i]=INT_MAX; 
    }
    memset(parent, -1, sizeof(parent));

    int source;
    cout<<"Enter Source: ";
    cin>>source;

    dijkstra(source);

    

    for(int i=0; i<n; i++)
    {
        cout<<"Node: "<<i<<", cost= "<<cost[i]<<"; Path: ";

        vector<int> path;
        int des = i;
        while(des!=-1)
        {
            path.push_back(des);
            des = parent[des];
        }
        cout<<path.back();
        path.pop_back();
        while(!path.empty())
        {
            cout<<" -> "<<path.back();
            path.pop_back();
        }
        cout<<endl;
    }

    
    return 0;
}