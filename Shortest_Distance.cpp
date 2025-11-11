#include<bits/stdc++.h>
using namespace std;

int n,e;
long long adj_mat[105][105];


void floyd_warshall()
{
    for(int k=1; k<=n; k++)
    {
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(adj_mat[i][k]!=LLONG_MAX && adj_mat[k][j]!=LLONG_MAX && (adj_mat[i][k]+adj_mat[k][j] < adj_mat[i][j]))
                {
                    adj_mat[i][j] = adj_mat[i][k] + adj_mat[k][j];
                }
            }
        }
    }
}

int main()
{
    
    cin>>n>>e;
    
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i==j)
            {
                adj_mat[i][j]=0;
            }
            else
            {
                adj_mat[i][j]=LLONG_MAX;
            }
        }
    }
    

    while(e--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(adj_mat[a][b] > c)
        {
            adj_mat[a][b] = c;
        }
        //adj_mat[b][a]=c; //Undirected
    }

    floyd_warshall();

    int q;
    cin>>q;
    while(q--)
    {
        int x, y;
        cin>>x>>y;
        if(adj_mat[x][y]==LLONG_MAX)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<adj_mat[x][y]<<endl;
        }
    }

    
    
    
    
    return 0;
}