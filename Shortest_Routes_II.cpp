#include<bits/stdc++.h>
using namespace std;

int n,e,q;
long long adj_mat[5005][5005];
bool cycle;

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
    
    cin>>n>>e>>q;
    
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
        long long a,b,c;
        cin>>a>>b>>c;
        if(adj_mat[a][b]>c)
        {
            adj_mat[a][b]=c;
            adj_mat[b][a]=c; //Undirected
        }
        
    }

    floyd_warshall();


    while(q--)
    {
        int i,j;
        cin>>i>>j;
        if(adj_mat[i][j]==LLONG_MAX)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<adj_mat[i][j]<<endl;
        }
    }
    
    
    
    return 0;
}