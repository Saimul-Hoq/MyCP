#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin>>n>>e;
    int mat[n][n];
    memset(mat, 0, sizeof(mat));
    for(int i=0; i<n; i++)
    {
        mat[i][i]=1;
    }
    int a, b;

    //Undirected Graph
    // for(int i=0; i<e; i++)
    // {
    //     cin>>a>>b;
    //     mat[a][b]=1;
    //     mat[b][a]=1;
    // }

    //Directed Graph
    for(int i=0; i<e; i++)
    {
        cin>>a>>b;
        mat[a][b]=1;
    }


    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    
    return 0;
}