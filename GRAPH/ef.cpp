#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void bfs(int start, vector<int> l[], int vertex) {
    queue<int> q;
    vector<bool> visited(vertex, 0);
    visited[start] = 1;
    q.push(start);

    while (!q.empty()) {
        int node = q.front(); // क्यू से नोड निकालें
        q.pop();
        cout << node << " "; // नोड को प्रिंट करें

        // नोड के सभी पड़ोसियों को चेक करें
        for (int i = 0; i < l[node].size(); i++) {
            int neighbor = l[node][i]; // पड़ोसी नोड
            if (!visited[neighbor]) {
                visited[neighbor] = true; // विज़िटेड मार्क करें
                q.push(neighbor); // क्यू में डालें
            }
        }
    }
    cout << endl;
}

int main() {
    int vertex, edge;
    cout<<"enter the vertex "<<endl;
    cin>>vertex;
    cout<<"enter the edges "<<endl;

    cin>> edge;

    vector<int> l[vertex]; // adjacency list

    int u, v;
    for (int i = 0; i < edge; i++) {
        cin >> u >> v;
        l[u].push_back(v); // u से v को कनेक्ट करें
        l[v].push_back(u); // v से u को कनेक्ट करें (undirected graph)
    }

    // एडजेसेंसी लिस्ट प्रिंट करना
    for (int i = 0; i < vertex; i++) {
        cout << i << " : ";
        for (int j = 0; j < l[i].size(); j++) {
            cout << l[i][j] << " ";
        }
        cout << endl;
    }

    int start;
    cout << "Enter the starting node for BFS: ";
    cin >> start;

    bfs(start, l, vertex); // BFS कॉल

    return 0;
}
