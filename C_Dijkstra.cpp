#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int> >  adj_list[100005];
long long cost[100005];
int parent[100005];

void dijkstra(int source)
{
    cost[source]=0;
    priority_queue<pair<long long,int>, vector<pair<long long,int> >, greater<pair<long long,int> > >q;
    q.push(make_pair(0, source));

    while(!q.empty())
    {
        int par_node = q.top().second;
        long long par_cost = q.top().first;
        q.pop();

        for(pair<int,int> p: adj_list[par_node])
        {
            int child_node = p.first;
            long long child_cost = p.second;
            long long total_cost = par_cost + child_cost;
            if(total_cost<cost[child_node])
            {
                cost[child_node]=total_cost;
                q.push(make_pair(cost[child_node], child_node));
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
        int a,b,c;
        cin>>a>>b>>c;
        adj_list[a].push_back(make_pair(b, c));
        adj_list[b].push_back(make_pair(a,c));
    }
    for(int i=1; i<=n; i++)
    {
        cost[i] = LLONG_MAX;
        //parent.push_back(-1);
    }
    memset(parent, -1, sizeof(parent));

    dijkstra(1);

    if(parent[n]!=-1)
    {
        vector<int> v;
        int des = n;
        while(des!=-1)
        {
            v.push_back(des);
            des = parent[des];
        }
        while(!v.empty())
        {
            cout<<v.back()<<" ";
            v.pop_back();
        }
        cout<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }

    
    
    return 0;
}

