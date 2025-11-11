#include <iostream>
using namespace std;

struct Edge
{
    int src, dest, weight;
};

void bellmanFord(Edge edges[], int numEdges, int numVertices, int source, int destination)
{
    int dist[numVertices];
    int parent[numVertices];

    for (int i = 0; i < numVertices; i++)
    {
        dist[i] = INT_MAX;
        parent[i] = -1;
    }
    dist[source] = 0;

    for (int i = 1; i < numVertices; i++)
    {
        for (int j = 0; j < numEdges; j++)
        {
            int u = edges[j].src;
            int v = edges[j].dest;
            int weight = edges[j].weight;

            if (dist[u] != INT_MAX && dist[u] + weight < dist[v])
            {
                dist[v] = dist[u] + weight;
                parent[v] = u;
            }
        }
    }

    for (int j = 0; j < numEdges; j++)
    {
        int u = edges[j].src;
        int v = edges[j].dest;
        int weight = edges[j].weight;

        if (dist[u] != INT_MAX && dist[u] + weight < dist[v])
        {
            cout << "Graph contains a negative weight cycle." << endl;
            return;
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

    const int numVertices = 5;
    const int numEdges = 8;

    Edge edges[numEdges] = {
        {0, 1, 6},
        {0, 3, 7},
        {1, 2, 5},
        {1, 3, 8},
        {1, 4, -4},
        {2, 1, -2},
        {3, 2, -3},
        {3, 4, 9}};

    int source = 0;
    int destination = 4;

    bellmanFord(edges, numEdges, numVertices, source, destination);

    return 0;
}

