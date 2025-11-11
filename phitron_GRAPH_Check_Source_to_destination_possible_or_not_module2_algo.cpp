#include<bits/stdc++.h>
using namespace std;


bool check_destination(int source, int destination, vector<int> adjMat[], bool visit[])
{
    queue<int>q;
    q.push(source);
    visit[source]=true;

    while(!q.empty())
    {
        int temp = q.front();
        q.pop();

        for(int i: adjMat[temp])
        {
            if(!visit[i])
            {
                q.push(i);
                visit[i]=true;
            }
        }
    }

    return visit[destination];
}

int main()
{
    int n, e;
    cin>>n>>e;
    int a, b;
    vector<int> adjMat[n];
    for(int i=0; i<e; i++)
    {
        cin>>a>>b;
        adjMat[a].push_back(b);
        adjMat[b].push_back(a);
    }
    bool visit[n];
    memset(visit, false, sizeof(visit));

    int source, destination;
    cout<<"Enter source and destination: ";
    cin>>source>>destination;
    

    if(check_destination(source, destination, adjMat, visit))
    {
        cout<<"Possible"<<endl;
    }
    else
    {
        cout<<"Not Possible"<<endl;
    }
    
    
    return 0;
}