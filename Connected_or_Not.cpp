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

    //Directed Graph
    for(int i=0; i<e; i++)
    {
        cin>>a>>b;
        mat[a][b]=1;
    }

    int q;
    cin>>q;
    while(q--)
    {
        cin>>a>>b;
        if(mat[a][b]==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }


    
    
    
    return 0;
}