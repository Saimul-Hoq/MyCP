#include <iostream>
using namespace std;

// Constants for graph size
const int MAX_NODES = 10;

// Variables to track discovery and finishing times
int discovery[MAX_NODES], finish[MAX_NODES], timeTracker;

// Function to classify edges during DFS
void dfsClassifyEdges(int graph[MAX_NODES][MAX_NODES], int visited[], int current, int parent, int n) {
    discovery[current] = ++timeTracker; // Record discovery time
    visited[current] = 1; // Mark the current node as visited

    for (int i = 0; i < n; i++) {
        if (graph[current][i]) { // If there's an edge
            if (!visited[i]) { // Tree edge
                cout << "Tree Edge: (" << (char)('A' + current) << ", " << (char)('A' + i) << ")\n";
                dfsClassifyEdges(graph, visited, i, current, n);
            } else if (i != parent && discovery[i] < discovery[current]) { // Back edge
                cout << "Back Edge: (" << (char)('A' + current) << ", " << (char)('A' + i) << ")\n";
            } else if (finish[i] == 0) { // Forward edge
                cout << "Forward Edge: (" << (char)('A' + current) << ", " << (char)('A' + i) << ")\n";
            } else { // Cross edge
                cout << "Cross Edge: (" << (char)('A' + current) << ", " << (char)('A' + i) << ")\n";
            }
        }
    }

    finish[current] = ++timeTracker; // Record finish time
}

int main() {
    // Example adjacency matrix for the graph
    int graph[MAX_NODES][MAX_NODES] = {
        // A  B  C  D  E
        {0, 1, 1, 0, 0}, // A
        {1, 0, 1, 1, 0}, // B
        {1, 1, 0, 0, 1}, // C
        {0, 1, 0, 0, 1}, // D
        {0, 0, 1, 1, 0}  // E
    };

    int n = 5; // Number of nodes in the graph
    int visited[MAX_NODES] = {0}; // Visited array to keep track of visited nodes

    // Initialize discovery and finish time arrays
    for (int i = 0; i < n; i++) {
        discovery[i] = finish[i] = 0;
    }

    timeTracker = 0; // Initialize the global timer

    // Perform DFS and classify edges
    cout << "Classified Edges:\n";
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            dfsClassifyEdges(graph, visited, i, -1, n);
        }
    }

    return 0;
}
