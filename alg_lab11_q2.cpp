#include <iostream>
#include <vector>
#include <stack>
#include <set>
#include <utility>
using namespace std;

class Graph {
private:
    int V; // Number of vertices
    vector<vector<int> > adj; // Adjacency list

public:
    Graph(int vertices) {
        V = vertices;
        adj.resize(V);
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
    }

    // Step 1: DFS for Strongly Connected Components (Kosaraju's Algorithm)
    void DFS(int v, vector<bool>& visited, stack<int>& finishedStack) {
        visited[v] = true;

        for (int neighbor : adj[v]) {
            if (!visited[neighbor])
                DFS(neighbor, visited, finishedStack);
        }

        finishedStack.push(v);
    }

    // Reverse the graph
    void reverseGraph(Graph& reversed) {
        for (int u = 0; u < V; u++) {
            for (int v : adj[u]) {
                reversed.addEdge(v, u);
            }
        }
    }

    // Find SCCs using Kosaraju's algorithm
    void findSCCs() {
        stack<int> finishedStack;
        vector<bool> visited(V, false);

        // Step 1: Perform DFS and fill the stack
        for (int i = 0; i < V; i++) {
            if (!visited[i])
                DFS(i, visited, finishedStack);
        }

        // Step 2: Reverse the graph
        Graph reversedGraph(V);
        reverseGraph(reversedGraph);

        // Step 3: Perform DFS on reversed graph in the order of the finished stack
        fill(visited.begin(), visited.end(), false);
        cout << "Strongly Connected Components:" << endl;

        while (!finishedStack.empty()) {
            int v = finishedStack.top();
            finishedStack.pop();

            if (!visited[v]) {
                vector<int> scc;
                reversedGraph.DFSUtil(v, visited, scc);
                for (int node : scc) {
                    cout << node << " ";
                }
                cout << endl;
            }
        }
    }

    // Utility function for DFS
    void DFSUtil(int v, vector<bool>& visited, vector<int>& component) {
        visited[v] = true;
        component.push_back(v);

        for (int neighbor : adj[v]) {
            if (!visited[neighbor])
                DFSUtil(neighbor, visited, component);
        }
    }

    // Step 2: Weakly Connected Components
    void findWCCs() {
        vector<bool> visited(V, false);
        set<pair<int, int> > undirectedEdges;

        // Treat the graph as undirected
        for (int u = 0; u < V; u++) {
            for (int v : adj[u]) {
                if (undirectedEdges.find(make_pair(v, u)) == undirectedEdges.end() &&
                    undirectedEdges.find(make_pair(u, v)) == undirectedEdges.end()) {
                    undirectedEdges.insert(make_pair(u, v));
                }
            }
        }

        cout << "Weakly Connected Components:" << endl;

        // Perform DFS to find WCCs
        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                vector<int> wcc;
                DFSUtilWCC(i, visited, undirectedEdges, wcc);
                for (int node : wcc) {
                    cout << node << " ";
                }
                cout << endl;
            }
        }
    }

    // Utility function for DFS in undirected graph
    void DFSUtilWCC(int v, vector<bool>& visited, const set<pair<int, int> >& undirectedEdges, vector<int>& component) {
        visited[v] = true;
        component.push_back(v);

        for (const auto& edge : undirectedEdges) {
            if (edge.first == v && !visited[edge.second]) {
                DFSUtilWCC(edge.second, visited, undirectedEdges, component);
            }
            if (edge.second == v && !visited[edge.first]) {
                DFSUtilWCC(edge.first, visited, undirectedEdges, component);
            }
        }
    }
};


int main() {
    int V = 5; // Number of vertices
    Graph g(V);

    // Adding edges to the directed graph
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(3, 4);

    // Finding Strongly Connected Components
    g.findSCCs();

    // Finding Weakly Connected Components
    g.findWCCs();

    return 0;
}
