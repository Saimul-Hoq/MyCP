#include <iostream>
using namespace std;

const int INF = INT_MAX;
void floydWarshall(int graph[][100], int v)
{
    int dist[100][100];


    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            if (i == j)
            {
                dist[i][j] = 0;
            }
            else if (graph[i][j] == 0)
            {
                dist[i][j] = INF;
            }
            else
            {
                dist[i][j] = graph[i][j];
            }
        }
    }

    for (int k = 0; k < v; k++)
    {
        for (int i = 0; i < v; i++)
        {
            for (int j = 0; j < v; j++)
            {
                if (dist[i][k] != INF && dist[k][j] != INF && dist[i][k] + dist[k][j] < dist[i][j])
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }


    cout << "Shortest distances between all pairs of vertices:\n";
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            if (dist[i][j] == INF)
            {
                cout << "INF ";
            }
            else
            {
                cout << dist[i][j] << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int v = 4;
    int graph[100][100] = {
        {0, 3, 0, 7},
        {8, 0, 2, 0},
        {5, 0, 0, 1},
        {2, 0, 0, 0}};

    floydWarshall(graph, v);

    return 0;
}

