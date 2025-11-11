#include<bits/stdc++.h>
using namespace std;

class Edge
{
    public:
    int a,b,c;

    Edge(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

int n, e;
vector<Edge> adj_list;
long long cost[1005];
bool cycle;


void bellman_ford(int source)
{
    cost[source]=0;
    for(int i=1; i<=n-1; i++)
    {
        for(Edge ed: adj_list)
        {
            int a = ed.a;
            int b = ed.b;
            int c = ed.c;
            if(cost[a]!=LLONG_MAX && cost[a]+c<cost[b])
            {
                cost[b]=cost[a]+c;
            }
        }
    }
    
    for(Edge ed: adj_list)
    {
        int a = ed.a;
        int b = ed.b;
        int c = ed.c;
        if(cost[a]!=LLONG_MAX && cost[a]+c<cost[b])
        {
            cycle = true;
        }
    }



}

int main()
{
    
    cin>>n>>e;
    while(e--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        adj_list.push_back(Edge(a,b,c));
        //adj_list.push_back(Edge(b,a,c)); //For Undirected

        
    }
    for(int i=1; i<=n; i++)
    {
        cost[i] = LLONG_MAX;
    }
    cycle=false;
    

    int source;
    cin>>source;

    bellman_ford(source);

    int t;
    cin>>t;
    int d[t+1];
    for(int i=1; i<=t; i++)
    {
        cin>>d[i];

    }

    if(cycle)
    {
        cout<<"Negative Cycle Detected"<<endl;
    }
    else
    {
        for(int i=1; i<=t; i++)
        {
            int des = d[i];
            if(cost[des]==LLONG_MAX)
            {
                cout<<"Not Possible"<<endl;
            }
            else
            {
                cout<<cost[des]<<endl;
            }
        }
    }


    

    

   
    
    
    return 0;
}