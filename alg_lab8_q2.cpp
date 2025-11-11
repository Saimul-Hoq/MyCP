#include <iostream>
#include <list>
#include <vector>
#include <utility> // For std::pair
using namespace std;

class Graph {
private:
    int vertices; // Number of vertices
    bool isDirected;
    bool isWeighted;
    vector<list<pair<int, int>>> adjList; // Adjacency list with pairs (neighbor, weight)

public:
    // Constructor
    Graph(int vertices, bool isDirected = false, bool isWeighted = false)
        : vertices(vertices), isDirected(isDirected), isWeighted(isWeighted) {
        adjList.resize(vertices);
    }

    // Add edge function
    void addEdge(int u, int v, int weight = 1) {
        if (isWeighted) {
            adjList[u].push_back({v, weight});
            if (!isDirected) {
                adjList[v].push_back({u, weight});
            }
        } else {
            adjList[u].push_back({v, 0});
            if (!isDirected) {
                adjList[v].push_back({u, 0});
            }
        }
    }

    // Display graph
    void displayGraph() {
        for (int i = 0; i < vertices; i++) {
            cout << "Vertex " << i << ":";
            for (const auto& neighbor : adjList[i]) {
                if (isWeighted) {
                    cout << " -> (" << neighbor.first << ", weight: " << neighbor.second << ")";
                } else {
                    cout << " -> " << neighbor.first;
                }
            }
            cout << endl;
        }
    }
};

int main() {
    int vertices, choice;
    bool isDirected, isWeighted;

    cout << "Enter the number of vertices in the graph: ";
    cin >> vertices;

    cout << "Choose the type of graph:\n";
    cout << "1. Directed Graph\n2. Undirected Graph\n3. Directed Weighted Graph\n4. Undirected Weighted Graph\n";
    cin >> choice;

    // Set graph type based on user choice
    if (choice == 1) {
        isDirected = true;
        isWeighted = false;
    } else if (choice == 2) {
        isDirected = false;
        isWeighted = false;
    } else if (choice == 3) {
        isDirected = true;
        isWeighted = true;
    } else if (choice == 4) {
        isDirected = false;
        isWeighted = true;
    } else {
        cout << "Invalid choice!";
        return 1;
    }

    Graph graph(vertices, isDirected, isWeighted);

    int edges;
    cout << "Enter the number of edges: ";
    cin >> edges;

    cout << "Enter the edges (u, v) and weight if applicable:\n";
    for (int i = 0; i < edges; i++) {
        int u, v, weight = 1;
        if (isWeighted) {
            cout << "Edge " << i + 1 << " (u v weight): ";
            cin >> u >> v >> weight;
        } else {
            cout << "Edge " << i + 1 << " (u v): ";
            cin >> u >> v;
        }
        graph.addEdge(u, v, weight);
    }

    cout << "\nGraph representation:\n";
    graph.displayGraph();

    return 0;
}
