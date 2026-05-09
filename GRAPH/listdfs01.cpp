#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void dfs(int start, vector<int> l[], vector<bool> &visited) {
    stack<int> s;  // स्टैक का उपयोग करें
    s.push(start); // स्टार्टिंग नोड को स्टैक में डालें

    while (!s.empty()) {
        int node = s.top(); // स्टैक के ऊपर से नोड लें
        s.pop();  // स्टैक से नोड को हटा दें

        if (visited[node]) {
            continue; // अगर नोड पहले से विज़िट किया गया है, तो इसे छोड़ दें
        }

        cout << node << " "; // नोड को प्रिंट करें
        visited[node] = true; // नोड को विज़िटेड मार्क करें

        // नोड के सभी पड़ोसियों को चेक करें
        for (int i = l[node].size() - 1; i >= 0; i--) {
            int neighbor = l[node][i]; // पड़ोसी नोड
            if (!visited[neighbor]) {
                s.push(neighbor); // अगर पड़ोसी को विज़िट नहीं किया गया है, तो इसे स्टैक में डालें
            }
        }
    }
    cout << endl;
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

    vector<bool> visited(vertex, false); // विज़िटेड नोड्स को ट्रैक करने के लिए

    dfs(start, l, visited); // DFS कॉल

    return 0;
}
