#include<bits/stdc++.h>
using namespace std;

int parent[100005];
int group_size[100005];
int max_size;

int dsu_find(int node)
{
    if(parent[node]==-1)
    {
        return node;
    }

    int leader = dsu_find(parent[node]);
    parent[node] = leader;
    return leader;
}

void dsu_union(int node1, int node2)
{
    int leader1 = dsu_find(node1);
    int leader2 = dsu_find(node2);

    if(group_size[leader1] > group_size[leader2])
    {
        parent[leader2] = leader1;
        group_size[leader1] += group_size[leader2];
        if(group_size[leader1] > max_size)
        {
            max_size = group_size[leader1];
        }
    }
    else
    {
        parent[leader1] = leader2;
        group_size[leader2] += group_size[leader1];
        if(group_size[leader2] > max_size)
        {
            max_size = group_size[leader2];
        }
    }
}

int main()
{
    memset(parent, -1, sizeof(parent));
    max_size = 1;
    

    int n, m, c;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        group_size[i] = 1;
    }
    c = n;
    while(m--)
    {
        int a, b;
        cin>>a>>b;


        int leader_a = dsu_find(a);
        int leader_b = dsu_find(b);
        if(leader_a != leader_b)
        {
            dsu_union(a, b);
            c--;
        }

        cout<<c<<" "<<max_size<<endl;
   
    }








    
    
    return 0;
}