#include<iostream>
#include<vector>
#include<queue> // for BFS
using namespace std;

void bfs(const vector<vector<bool>>& adjmatrix, int start, vector<bool>& visited) {
    queue<int> q;
    q.push(start);
    visited[start] = true;

    cout << "BFS Traversal: ";
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";

        // Traverse all adjacent nodes
        for (int i = 0; i < adjmatrix.size(); i++) {
            if (adjmatrix[node][i] && !visited[i]) {
                q.push(i);
                visited[i] = true;
            }
        }
    }
    cout << endl;
}

void dfs(const vector<vector<bool>>& adjmatrix, int node, vector<bool>& visited) {
    // Mark the current node as visited and print it
    visited[node] = true;
    cout << node << " ";

    // Traverse all adjacent nodes
    for (int i = 0; i < adjmatrix.size(); i++) {
        if (adjmatrix[node][i] && !visited[i]) {
            dfs(adjmatrix, i, visited);
        }
    }
}

int main() {
    int vertex, edges;

    cin >> vertex >> edges;

    vector<vector<bool>> adjmatrix(vertex, vector<bool>(vertex, 0));

    int u, v;

    // Input edges
    for (int i = 0; i < edges; i++) {
        cin >> u >> v;
        adjmatrix[u][v] = 1;
        adjmatrix[v][u] = 1;
    }

    // Print the adjacency matrix
    cout << "Adjacency Matrix:" << endl;
    for (int i = 0; i < vertex; i++) {
        for (int j = 0; j < vertex; j++) {
            cout << adjmatrix[i][j] << " ";
        }
        cout << endl;
    }

    // Initialize visited array for BFS and DFS
    vector<bool> visited(vertex, false);

    // Perform BFS starting from node 0
    bfs(adjmatrix, 0, visited);

    // Reset visited array for DFS
    fill(visited.begin(), visited.end(), false);

    // Perform DFS starting from node 0
    cout << "DFS Traversal: ";
    dfs(adjmatrix, 0, visited);
    cout << endl;

    return 0;
}
