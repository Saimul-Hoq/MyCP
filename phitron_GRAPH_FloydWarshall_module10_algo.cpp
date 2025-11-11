// #include<bits/stdc++.h>
// using namespace std;

// int n,e;
// int adj_mat[105][105];
// bool cycle;

// void floyd_warshall()
// {
//     for(int k=0; k<n; k++)
//     {
//         for(int i=0; i<n; i++)
//         {
//             for(int j=0; j<n; j++)
//             {
//                 if(adj_mat[i][k]!=INT_MAX && adj_mat[k][j]!=INT_MAX && (adj_mat[i][k]+adj_mat[k][j] < adj_mat[i][j]))
//                 {
//                     adj_mat[i][j] = adj_mat[i][k] + adj_mat[k][j];
//                 }
//                 if(i==j && adj_mat[i][j]!=0)
//                 {
//                     cycle = true;
//                 }
//             }
//         }
//     }
// }

// int main()
// {
    
//     cin>>n>>e;
    
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<n; j++)
//         {
//             if(i==j)
//             {
//                 adj_mat[i][j]=0;
//             }
//             else
//             {
//                 adj_mat[i][j]=INT_MAX;
//             }
//         }
//     }
//     cycle = false;

//     while(e--)
//     {
//         int a,b,c;
//         cin>>a>>b>>c;
//         adj_mat[a][b]=c;
//         //adj_mat[b][a]=c; //Undirected
//     }

//     floyd_warshall();

//     cout<<"Output: "<<endl;
//     if(cycle)
//     {
//         cout<<"Negative cycle detected."<<endl;
//     }
//     else
//     {
//         for(int i=0; i<n; i++)
//         {
//             for(int j=0; j<n; j++)
//             {
//                 if(adj_mat[i][j]==INT_MAX)
//                 {
//                     cout<<"~ ";
//                 }
//                 else
//                 {
//                     cout<<adj_mat[i][j]<<" ";
//                 }
//             }
//             cout<<endl;
//         }
//         cout<<endl;
//     }
    
    
    
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int n, e;
int adj_mat[105][105];
bool cycle;

void floyd_warshall()
{
    for(int k=0; k<n; k++)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if((adj_mat[i][k]!=INT_MAX && adj_mat[k][j]!=INT_MAX) && (adj_mat[i][k]+adj_mat[k][j] < adj_mat[i][j]))
                {
                    adj_mat[i][j] = adj_mat[i][k] + adj_mat[k][j];
                }
                if(i==j && adj_mat[i][j]!=0)
                {
                    cycle = true;
                }
            }
        }
    }
}

int main()
{
    cin>>n>>e;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
            {
                adj_mat[i][j] = 0;
            }
            else
            {
                adj_mat[i][j] = INT_MAX;
            }
        }
    }
    cycle = false;

    while(e--)
    {
        int a, b, c;
        cin>>a>>b>>c;
        adj_mat[a][b] = c;
        adj_mat[b][a] = c;
    }

    floyd_warshall();

    cout<<"Output: "<<endl;
    if(cycle)
    {
        cout<<"Negative cycle detected."<<endl;
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(adj_mat[i][j]==INT_MAX)
                {
                    cout<<"~ ";
                }
                else
                {
                    cout<<adj_mat[i][j]<<" ";
                }
            }
            cout<<endl;
        }
        cout<<endl;
    }
        

    
    
    return 0;
}