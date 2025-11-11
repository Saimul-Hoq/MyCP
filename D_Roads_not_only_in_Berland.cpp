#include<bits/stdc++.h>
using namespace std;

int parent[1005];
int group_size[1005];

int dsu_find(int node)
{
    if(parent[node] == -1)
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
    }
    else
    {
        parent[leader1] = leader2;
        group_size[leader2] += group_size[leader1];
    }
}

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        parent[i] = -1;
        group_size[i] = 1;
    }

    int count=0;
    vector<pair<int,int> > remove;
    vector<pair<int,int> > create;

    for(int i=1; i<=n-1; i++)
    {
        int a, b;
        cin>>a>>b;

        int leader_a = dsu_find(a);
        int leader_b = dsu_find(b);
        if(leader_a == leader_b)
        {
            count++;
            remove.push_back(make_pair(a, b));
        }
        else
        {
            dsu_union(a, b);
        }
    }

    for(int i=2; i<=n; i++)
    {
        int leader1 = dsu_find(1);
        int leaderi = dsu_find(i);
        if(leader1 != leaderi)
        {
            create.push_back(make_pair(1, i));
            dsu_union(1, i);
        }
    }

    cout<<count<<endl;
    for(int i=0; i<count; i++)
    {
        cout<<remove[i].first<<" "<<remove[i].second<<" "<<create[i].first<<" "<<create[i].second<<endl;
        
    }


    
    
    return 0;
}