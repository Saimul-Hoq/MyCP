#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <unordered_map>
using namespace std;

class Graph {
private:
    int vertices; // Number of vertices
    vector<list<int>> adjList; // Adjacency list

public:
    // Constructor
    Graph(int vertices) : vertices(vertices) {
        adjList.resize(vertices);
    }

    // Add edge to the graph
    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u); // Since the graph is undirected
    }

    // BFS to find the path from start to destination
    vector<int> bfs(int start, int destination) {
        vector<bool> visited(vertices, false);
        unordered_map<int, int> parent; // To store the parent of each node
        queue<int> q;

        // Initialize BFS
        visited[start] = true;
        q.push(start);

        while (!q.empty()) {
            int current = q.front();
            q.pop();

            // If the destination is found, reconstruct the path
            if (current == destination) {
                vector<int> path;
                for (int node = destination; node != -1; node = parent[node]) {
                    path.push_back(node);
                }
                reverse(path.begin(), path.end());
                return path;
            }

            // Explore neighbors
            for (int neighbor : adjList[current]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    parent[neighbor] = current;
                    q.push(neighbor);
                }
            }
        }

        // If no path found, return an empty vector
        return {};
    }
};

int main() {
    int vertices, edges;

    cout << "Enter the number of vertices: ";
    cin >> vertices;

    Graph graph(vertices);

    cout << "Enter the number of edges: ";
    cin >> edges;

    cout << "Enter the edges (u v):\n";
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        graph.addEdge(u, v);
    }

    int start, destination;
    cout << "Enter the starting node: ";
    cin >> start;
    cout << "Enter the destination node: ";
    cin >> destination;

    vector<int> path = graph.bfs(start, destination);

    if (!path.empty()) {
        cout << "Path from " << start << " to " << destination << ": ";
        for (int node : path) {
            cout << node << " ";
        }
        cout << endl;
    } else {
        cout << "No path found from " << start << " to " << destination << "." << endl;
    }

    return 0;
}
