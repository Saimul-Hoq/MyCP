#include<bits/stdc++.h>
using namespace std;


void bfs(int source, vector<int> adjList[])
{
    int n = adjList->size();

    bool visit[n];
    memset(visit, false, sizeof(visit));
    queue<int> q;

    q.push(source);
    visit[source]=true;

    while(!q.empty())
    {
        int temp = q.front();
        q.pop();

        cout<<temp<<" ";

        for(int i: adjList[temp])
        {
            if(!visit[i])
            {
                q.push(i);
                visit[i]=true;
            }
        }
    }
    cout<<endl;

}

int main()
{
    int n, e;
    cin>>n>>e;
    vector<int> adjList[n];
    int a, b;
    for(int i=0; i<e; i++)
    {
        cin>>a>>b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    int source;
    cout<<"Enter Source Node: ";
    cin>>source;

    bfs(source, adjList);


    
    
    return 0;
}