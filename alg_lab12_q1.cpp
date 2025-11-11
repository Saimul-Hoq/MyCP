#include <iostream>
using namespace std;

const int MAX_NODES = 5;

int findMinDistance(int dist[], bool visited[], int n)
{
    int min = INT_MAX, minIndex = -1;

    for (int i = 0; i < n; i++)
    {
        if (!visited[i] && dist[i] < min)
        {
            min = dist[i];
            minIndex = i;
        }
    }
    return minIndex;
}

void dijkstra(int graph[MAX_NODES][MAX_NODES], int n, int source, int destination)
{
    int dist[MAX_NODES];
    bool visited[MAX_NODES];
    int parent[MAX_NODES];

    for (int i = 0; i < n; i++)
    {
        dist[i] = INT_MAX;
        visited[i] = false;
        parent[i] = -1;
    }

    dist[source] = 0;

    for (int count = 0; count < n - 1; count++)
    {
        int u = findMinDistance(dist, visited, n);
        if (u == -1)
            break;

        visited[u] = true;

        for (int v = 0; v < n; v++)
        {
            if (!visited[v] && graph[u][v] != 0 && dist[u] != INT_MAX &&
                dist[u] + graph[u][v] < dist[v])
            {
                dist[v] = dist[u] + graph[u][v];
                parent[v] = u;
            }
        }
    }

    if (dist[destination] == INT_MAX)
    {
        cout << "No path exists from " << source << " to " << destination << endl;
        return;
    }

    cout << "Shortest path distance from " << source << " to " << destination << " is: " << dist[destination] << endl;

    cout << "Path: ";
    int current = destination;
    while (current != -1)
    {
        cout << current;
        current = parent[current];
        if (current != -1)
            cout << " <- ";
    }
    cout << endl;
}

int main()
{

    int graph[MAX_NODES][MAX_NODES] = {
        {0, 10, 0, 30, 100},
        {10, 0, 50, 0, 0},
        {0, 50, 0, 20, 10},
        {30, 0, 20, 0, 60},
        {100, 0, 10, 60, 0}};

    int source = 0;
    int destination = 4;

    dijkstra(graph, MAX_NODES, source, destination);

    return 0;
}

