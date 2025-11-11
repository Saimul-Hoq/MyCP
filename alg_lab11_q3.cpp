#include <iostream>
#include <vector>
using namespace std;
 
class Graph {
public:
    vector<vector<int> > adjList;
 
    Graph(int nodes) {
        adjList.resize(nodes);
    }
 
    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
 
    void BFS(int start, int destination, int numNodes) {
        vector<bool> visited(numNodes, false);
        vector<int> parent(numNodes, -1);
        vector<int> queue;
        queue.push_back(start);
        visited[start] = true;
 
        int front = 0;
        while (front < queue.size()) {
            int node = queue[front];
            front++;
 
            if (node == destination) {
                vector<int> path;
                while (node != start) {
                    path.push_back(node);
                    node = parent[node];
                }
                path.push_back(start);
 
                cout << "Path found by BFS: ";
                for (int i = path.size() - 1; i >= 0; i--) {
                    cout << path[i] << " ";
                }
                cout << endl;
                return;
            }
 
            for (int neighbor : adjList[node]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    parent[neighbor] = node;
                    queue.push_back(neighbor);
                }
            }
        }
        cout << "No path found by BFS." << endl;
    }
 
    void DFS(int start, int destination, int numNodes) {
        vector<bool> visited(numNodes, false);
        vector<int> stack;
        vector<int> parent(numNodes, -1);
        stack.push_back(start);
        visited[start] = true;
 
        int top = 0;
        while (top < stack.size()) {
            int node = stack[top];
            top++;
 
            if (node == destination) {
                vector<int> path;
                while (node != start) {
                    path.push_back(node);
                    node = parent[node];
                }
                path.push_back(start);
 
                cout << "Path found by DFS: ";
                for (int i = path.size() - 1; i >= 0; i--) {
                    cout << path[i] << " ";
                }
                cout << endl;
                return;
            }
 
            for (int neighbor : adjList[node]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    parent[neighbor] = node;
                    stack.push_back(neighbor);
                }
            }
        }
        cout << "No path found by DFS." << endl;
    }
};
 
int main() {
    int n = 6, e = 7;
    int choice, start, destination;
    int u, v;
 
    vector<pair<int,int> > edges = {
        {0, 1}, {0, 2}, {1, 3}, {1, 4}, {2, 5}, {3, 4}, {4, 5}
    };
 
    cout << "Choose search method (1 for BFS, 2 for DFS): ";
    cin >> choice;
 
    Graph g(n);
 
    for (auto edge : edges) {
        g.addEdge(edge.first, edge.second);
    }
 
    cout << "Graph Details:\n";
    cout << "Number of nodes: " << n << endl;
    cout << "Number of edges: " << e << endl;
    cout << "Edges:\n";
    for (auto edge : edges) {
        cout << edge.first << " - " << edge.second << endl;
    }
 
    cout << "Enter starting node: ";
    cin >> start;
 
    cout << "Enter destination node: ";
    cin >> destination;
 
    if (choice == 1) {
        g.BFS(start, destination, n);
    } else if (choice == 2) {
        g.DFS(start, destination, n);
    } else {
        cout << "Invalid choice!" << endl;
    }
 
    return 0;
}

