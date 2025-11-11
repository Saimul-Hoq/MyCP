#include <iostream>
using namespace std;


bool dfs(int graph[10][10], int visited[], int current, int destination, char path[], int& pathIndex) {
    path[pathIndex++] = 'A' + current; 
    visited[current] = 1; 

    if (current == destination) {
        return true; 
    }

    for (int i = 0; i < 10; i++) {
        if (graph[current][i] == 1 && !visited[i]) { 
            if (dfs(graph, visited, i, destination, path, pathIndex)) {
                return true; 
            }
        }
    }

    path[--pathIndex] = '\0'; 
    return false;
}

int main() {
    
    int graph[10][10] = {
        // A  B  C  D  E  F  G  H  I  J
        {0, 1, 1, 0, 0, 0, 0, 0, 0, 0}, // A
        {1, 0, 0, 1, 0, 0, 0, 0, 0, 0}, // B
        {1, 0, 0, 1, 1, 0, 0, 0, 0, 0}, // C
        {0, 1, 1, 0, 0, 1, 0, 0, 0, 0}, // D
        {0, 0, 1, 0, 0, 0, 1, 0, 0, 0}, // E
        {0, 0, 0, 1, 0, 0, 1, 1, 0, 0}, // F
        {0, 0, 0, 0, 1, 1, 0, 0, 0, 1}, // G
        {0, 0, 0, 0, 0, 1, 0, 0, 1, 0}, // H
        {0, 0, 0, 0, 0, 0, 0, 1, 0, 1}, // I
        {0, 0, 0, 0, 0, 0, 1, 0, 1, 0}  // J
    };

    int visited[10] = {0}; 
    char path[10]; 
    int pathIndex = 0; 

    int source = 0; // Start node 'A' (index 0)
    int destination = 9; // End node 'J' (index 9)

    if (dfs(graph, visited, source, destination, path, pathIndex)) {
        cout << "Path from A to J: ";
        for (int i = 0; i < pathIndex; i++) {
            cout << path[i] << " ";
        }
        cout << endl;
    } else {
        cout << "No path found from A to J." << endl;
    }

    return 0;
}
