#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int edges, vertex;
    cout << "Enter the total number of vertices: ";
    cin >> vertex;
    cout << "Enter the total number of edges: ";
    cin >> edges;

    // Use adjacency list to store graph
    vector<vector<int>> adjList(vertex);

    int u, v;

    for (int i = 0; i < edges; i++) {
        cout << "Enter the connected nodes (u and v): ";
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    // Perform BFS traversal
    queue<int> q;
    vector<bool> visited(vertex, false);

    // Start BFS from node 0
    q.push(0);
    visited[0] = true;

    cout << "BFS traversal: ";

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";

        // Traverse all neighbors of the current node
        for (int i = 0; i < adjList[node].size(); i++) {
            int neighbor = adjList[node][i];
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
    cout << endl;

    return 0;
}
