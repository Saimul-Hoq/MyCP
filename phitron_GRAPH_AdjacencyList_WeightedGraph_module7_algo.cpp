#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int> > adjList[105];

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
        cout<<i<<" -> ";
        for(pair<int,int> p: adjList[i])
        {
            cout<<"{ "<<p.first<<", "<<p.second<<" }, ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    
    return 0;
}