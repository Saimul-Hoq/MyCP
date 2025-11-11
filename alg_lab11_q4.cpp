#include <iostream>

#include <vector>

using namespace std;
 
void dfs(int vertex, int adjMatrix[][100], bool visited[], vector<pair<int, int> >& spanningTree, int vertices) {

    visited[vertex] = true;
 
    for (int i = 0; i < vertices; ++i) {

        if (adjMatrix[vertex][i] == 1 && !visited[i]) {

            spanningTree.push_back(make_pair(vertex, i));

            dfs(i, adjMatrix, visited, spanningTree, vertices);

        }

    }

}
 
void extractSpanningTree(int vertices, int adjMatrix[][100]) {

    bool visited[100] = {false};

    vector<pair<int, int> > spanningTree;
 
    dfs(0, adjMatrix, visited, spanningTree, vertices);
 
    cout << "Edges in the Spanning Tree:\n";

    for (auto edge : spanningTree) {

        cout << edge.first << " - " << edge.second << endl;

    }

}
 
int main() {

    const int vertices = 5; 

    const int edges = 6;  
 
    int adjMatrix[100][100] = {0};
 
    int edgeList[edges][2] = {

        {0, 1},

        {0, 2},

        {1, 3},

        {1, 4},

        {2, 3},

        {3, 4},

    };
 
    for (int i = 0; i < edges; i++) {

        int u = edgeList[i][0];

        int v = edgeList[i][1];

        adjMatrix[u][v] = 1;

        adjMatrix[v][u] = 1;

    }
 
    extractSpanningTree(vertices, adjMatrix);
 
    return 0;

}

 