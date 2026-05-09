#include <iostream>
#include <vector>
using namespace std;

// Function to return the adjacency list for each vertex.
vector<vector<int>> printGraph(int V, vector<pair<int, int>> edges) {
    // Initialize the adjacency list with V empty lists
    vector<vector<int>> adjList(V);

    // Populate the adjacency list with edges
    for (const auto& edge : edges) {
        int u = edge.first;
        int v = edge.second;
        adjList[u].push_back(v);
        adjList[v].push_back(u); // If the graph is undirected
    }

    return adjList;
}


int main() {
    int V = 5; // Number of vertices
    vector<pair<int, int>> edges = {{0, 1}, {0, 4}, {1, 2}, {1, 3}, {2, 3}, {3, 4}};

    vector<vector<int>> adjList = printGraph(V, edges);

    // Print the adjacency list
    for (int i = 0; i < V; ++i) {
        cout << "Vertex " << i << ":";
        for (int neighbor : adjList[i]) {
            cout << " " << neighbor;
        }
        cout << endl;
    }

    return 0;
}
