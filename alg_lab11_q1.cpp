#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Graph {
public:
    int V; 
    vector<vector<int> > adj; 
    
    
    Graph(int V) {
        this->V = V;
        adj.resize(V);
    }
    
    
    void addEdge(int u, int v) {
        adj[u].push_back(v);
    }
    
    
    bool dfs(int v, vector<bool>& visited, vector<bool>& inStack, stack<int>& result) {
        visited[v] = true;
        inStack[v] = true;
        
        
        for (int neighbor : adj[v]) {
            if (!visited[neighbor] && dfs(neighbor, visited, inStack, result)) {
                return true; 
            } else if (inStack[neighbor]) {
                return true; 
            }
        }
        
        inStack[v] = false; 
        result.push(v); 
        return false;
    }

    
    bool topologicalSortFromNode(int startNode) {
        vector<bool> visited(V, false);
        vector<bool> inStack(V, false);
        stack<int> result;
        
        
        if (dfs(startNode, visited, inStack, result)) {
            cout << "The graph contains a cycle. It is not a DAG." << endl;
            return false; 
        }
        
        
        for (int i = 0; i < V; ++i) {
            if (!visited[i]) {
                if (dfs(i, visited, inStack, result)) {
                    cout << "The graph contains a cycle. It is not a DAG." << endl;
                    return false; 
                }
            }
        }
        
        
        cout << "The graph is a DAG." << endl;
        cout << "Topological Sort starting from node " << startNode << ": ";
        while (!result.empty()) {
            cout << result.top() << " ";
            result.pop();
        }
        cout << endl;
        return true;
    }
};

int main() {
    Graph g(6);
    g.addEdge(5, 2);
    g.addEdge(5, 0);
    g.addEdge(4, 0);
    g.addEdge(4, 1);
    g.addEdge(2, 3);
    g.addEdge(3, 1);
    
    int startNode = 0; 
    g.topologicalSortFromNode(startNode);
    
    return 0;
}
