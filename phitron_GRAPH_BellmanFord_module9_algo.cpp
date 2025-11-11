// #include<bits/stdc++.h>
// using namespace std;

// class Edge
// {
//     public:
//     int a,b,c;

//     Edge(int a, int b, int c)
//     {
//         this->a = a;
//         this->b = b;
//         this->c = c;
//     }
// };

// int n, e;
// vector<Edge> adj_list;
// vector<int> cost;
// bool cycle;


// void bellman_ford(int source)
// {
//     cost[source]=0;
//     for(int i=0; i<n-1; i++)
//     {
//         for(Edge ed: adj_list)
//         {
//             int a = ed.a;
//             int b = ed.b;
//             int c = ed.c;
//             if(cost[a]!=INT_MAX && cost[a]+c<cost[b])
//             {
//                 cost[b]=cost[a]+c;
//             }
//         }
//     }
    
//     for(Edge ed: adj_list)
//     {
//         int a = ed.a;
//         int b = ed.b;
//         int c = ed.c;
//         if(cost[a]!=INT_MAX && cost[a]+c<cost[b])
//         {
//             cycle = true;
//         }
//     }



// }

// int main()
// {
    
//     cin>>n>>e;
//     while(e--)
//     {
//         int a,b,c;
//         cin>>a>>b>>c;
//         adj_list.push_back(Edge(a,b,c));
//         adj_list.push_back(Edge(b,a,c)); //For Undirected

        
//     }
//     for(int i=0; i<n; i++)
//     {
//         cost.push_back(INT_MAX);
//     }
//     cycle=false;
    

//     int source;
//     cout<<"Enter Source: ";
//     cin>>source;

//     bellman_ford(source);
//     if(!cycle)
//     {
//         for(int i=0; i<n; i++)
//         {
//             cout<<i<<" -> "<<cost[i]<<endl;
//         }
//     }
//     else
//     {
//         cout<<"Negative Cycle Detected."<<endl;
//     }

   
    
    
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

class Edge
{
    public:
    int a,b,c;

    Edge(int a, int b, int c)
    {
        this->a = a;
        this->b= b;
        this->c = c;
    }
};

int n, e;
vector<Edge> edge_list;
int cost[105];
int parent[105];
bool cycle;


void bellman_ford(int source)
{
    cost[source] = 0;

    for(int i=0; i<n-1; i++)
    {
        for(Edge edge: edge_list)
        {
            int a = edge.a;
            int b = edge.b;
            int c = edge.c;
            if(cost[a]!=INT_MAX && cost[a]+c < cost[b])
            {
                cost[b] = cost[a] + c;
                parent[b] = a;
            }
        }
    }

    for(Edge edge: edge_list)
    {
        int a = edge.a;
        int b = edge.b;
        int c = edge.c;
        if(cost[a]!=INT_MAX && cost[a]+c < cost[b])
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
        int a, b, c;
        cin>>a>>b>>c;
        edge_list.push_back(Edge(a, b, c));
        edge_list.push_back(Edge(b, a, c));     
    }
    for(int i=0; i<n; i++)
    {
        cost[i] = INT_MAX;
        parent[i] = -1;
    }
    cycle = false;

    int source;
    cout<<"Enter source: ";
    cin>>source;
    
    bellman_ford(source);

    if(!cycle)
    {
        cout<<endl;
        for(int i=0; i<n; i++)
        {
            cout<<source<<" to "<<i<<" : "<<endl;

            cout<<"Cost = "<<cost[i]<<endl;

            vector<int> path;
            int des = i;
            while(des!=-1)
            {
                path.push_back(des);
                des = parent[des];
            }
            cout<<"Path = "<<path.back();
            path.pop_back();
            while(!path.empty())
            {
                cout<<" -> "<<path.back();
                path.pop_back();
            }
            cout<<endl<<endl;
            
        }
    }
    else
    {
        cout<<"Negative cycle detected."<<endl;
    }
    
    
    return 0;
}