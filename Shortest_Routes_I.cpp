#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

vector<pair<int,int> > adj_list[105];
ll cost[105];
int parent[105];

void dijkstra(int source)
{
    cost[source] = 0;
    priority_queue<pair<int,int> , vector<pair<int,int> >, greater<pair<int,int> > > q;
    q.push(make_pair(0, source));

    while(!q.empty())
    {
        int par_node = q.top().second;
        int par_cost = q.top().first;
        q.pop();

        for(pair<int,int> p: adj_list[par_node])
        {
            int child_node = p.first;
            int child_cost = p.second;
            int total_cost = par_cost + child_cost;
            if(total_cost < cost[child_node])
            {
                cost[child_node] = total_cost;
                q.push(make_pair(cost[child_node], child_node));
                parent[child_node] = par_node;
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
        adj_list[a].push_back(make_pair(b,c));
       // adj_list[b].push_back(make_pair(a,c));

    }
    for(int i=0; i<n; i++)
    {
        cost[i] = INT_MAX;
        parent[i] = -1;
    }

    

    dijkstra(1);
    for(int i=1;i<=n; i++)
    {
        cout<<cost[i]<<" ";
    }
    cout<<endl;

    
    
    return 0;
}