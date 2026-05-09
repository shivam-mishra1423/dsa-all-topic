#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, vector<int> l[], vector<bool> &visited) {
    // नोड को विज़िटेड मार्क करें और प्रिंट करें
    visited[node] = true;
    cout << node << " ";

    // नोड के सभी पड़ोसियों को चेक करें
    for (int i = 0; i < l[node].size(); i++) {
        int neighbor = l[node][i];
        if (!visited[neighbor]) {
            dfs(neighbor, l, visited); // रिकर्सन के माध्यम से पड़ोसी नोड को कॉल करें
        }
    }
}

int main() {
    int vertex, edge;
    cout << "Enter the number of vertices: ";
    cin >> vertex;

    if (vertex <= 0) {
        cout << "Number of vertices must be positive." << endl;
        return 1;
    }

    cout << "Enter the number of edges: ";
    cin >> edge;

    if (edge < 0) {
        cout << "Number of edges cannot be negative." << endl;
        return 1;
    }

    vector<int> l[vertex]; // adjacency list

    cout << "Enter edges (u v):" << endl;
    for (int i = 0; i < edge; i++) {
        int u, v;
        cin >> u >> v;
        if (u < 0 || u >= vertex || v < 0 || v >= vertex) {
            cout << "Invalid edge (" << u << ", " << v << ")." << endl;
            return 1;
        }
        l[u].push_back(v); // u से v को कनेक्ट करें
        l[v].push_back(u); // v से u को कनेक्ट करें (undirected graph)
    }

    // एडजेसेंसी लिस्ट प्रिंट करना
    cout << "Adjacency list:" << endl;
    for (int i = 0; i < vertex; i++) {
        cout << i << " : ";
        for (int j = 0; j < l[i].size(); j++) {
            cout << l[i][j] << " ";
        }
        cout << endl;
    }

    int start;
    cout << "Enter the starting node for DFS: ";
    cin >> start;

    if (start < 0 || start >= vertex) {
        cout << "Invalid starting node." << endl;
        return 1;
    }

    vector<bool> visited(vertex, false); // विज़िटेड नोड्स को ट्रैक करने के लिए

    dfs(start, l, visited); // DFS कॉल

    return 0;
}

