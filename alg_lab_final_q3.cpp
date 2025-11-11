#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;


void addEdge(vector<vector<int> >& graph, int u, int v) {
    graph[u].push_back(v);
}


vector<int> computeIndegree(const vector<vector<int> >& graph) {
    int n = graph.size();
    vector<int> indegree(n, 0);

    for (int u = 0; u < n; u++) {
        for (int v : graph[u]) {
            indegree[v]++;
        }
    }
    return indegree;
}


void topologicalSort(const vector<vector<int> >& graph) {
    int n = graph.size();
    vector<int> indegree = computeIndegree(graph);
    queue<int> q;

    
    for (int i = 0; i < n; i++) {
        if (indegree[i] == 0) {
            q.push(i);
        }
    }

    vector<int> topoOrder;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        topoOrder.push_back(u);

        
        for (int v : graph[u]) {
            indegree[v]--;
            if (indegree[v] == 0) {
                q.push(v);
            }
        }
    }

    
    if (topoOrder.size() != n) {
        cout << "The graph is not a DAG (contains cycles), so topological sort is not possible." << endl;
        return;
    }

   
    cout << "Topological Order: ";
    for (int v : topoOrder) {
        cout << v << " ";
    }
    cout << endl;
}


void dfs1(int u, vector<vector<int> >& graph, vector<bool>& visited, stack<int>& st) {
    visited[u] = true;

    for (int v : graph[u]) {
        if (!visited[v]) {
            dfs1(v, graph, visited, st);
        }
    }

    st.push(u);
}


vector<vector<int> > reverseGraph(const vector<vector<int> >& graph) {
    int n = graph.size();
    vector<vector<int> > reversedGraph(n);

    for (int u = 0; u < n; u++) {
        for (int v : graph[u]) {
            reversedGraph[v].push_back(u);
        }
    }

    return reversedGraph;
}


void dfs2(int u, vector<vector<int> >& graph, vector<bool>& visited, vector<int>& component) {
    visited[u] = true;
    component.push_back(u);

    for (int v : graph[u]) {
        if (!visited[v]) {
            dfs2(v, graph, visited, component);
        }
    }
}


void findSCCs(vector<vector<int> >& graph) {
    int n = graph.size();
    stack<int> st;
    vector<bool> visited(n, false);


    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            dfs1(i, graph, visited, st);
        }
    }


    vector<vector<int> > reversedGraph = reverseGraph(graph);


    fill(visited.begin(), visited.end(), false);
    vector<vector<int> > sccs;

    while (!st.empty()) {
        int u = st.top();
        st.pop();

        if (!visited[u]) {
            vector<int> component;
            dfs2(u, reversedGraph, visited, component);
            sccs.push_back(component);
        }
    }


    cout << "Strongly Connected Components:" << endl;
    for (const auto& component : sccs) {
        for (int v : component) {
            cout << v << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 6; 
    vector<vector<int> > graph(n);


    addEdge(graph, 0, 1);
    addEdge(graph, 1, 2);
    addEdge(graph, 2, 0);
    addEdge(graph, 1, 3);
    addEdge(graph, 3, 4);
    addEdge(graph, 4, 5);


    cout << "Performing Topological Sort..." << endl;
    topologicalSort(graph);


    cout << "\nFinding Strongly Connected Components..." << endl;
    findSCCs(graph);

    return 0;
}
