#include <iostream>
#include <vector>
#include <queue>
#include<algorithm>

using namespace std;

vector<int> shortestPathBFS(int V, vector<int> adj[], int start, int end) {
    vector<int> distance(V, -1); // सभी नोड्स की दूरी -1 (अथवा अनदेखा के रूप में)
    vector<int> parent(V, -1);   // पथ ट्रैकिंग के लिए पेरेंट वेक्टर
    queue<int> q;

    distance[start] = 0;
    q.push(start);

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int neighbor : adj[node]) {
            if (distance[neighbor] == -1) { // अगर नोड अभी तक नहीं देखा गया है
                distance[neighbor] = distance[node] + 1;
                parent[neighbor] = node;
                q.push(neighbor);
            }
        }
    }

    // पथ ट्रैकिंग
    vector<int> path;
    for (int v = end; v != -1; v = parent[v]) {
        path.push_back(v);
    }
    reverse(path.begin(), path.end()); // पथ को उल्टा करें ताकि यह सही क्रम में हो

    return path;
}

int main() {
    int V = 5; // नोड्स की संख्या
    vector<int> adj[5];

    // एड्ज़ जोड़ना
    adj[0].push_back(1);
    adj[1].push_back(0);
    adj[1].push_back(2);
    adj[2].push_back(1);
    adj[2].push_back(3);
    adj[3].push_back(2);
    adj[3].push_back(4);
    adj[4].push_back(3);

    vector<int> path = shortestPathBFS(V, adj, 0, 4);

    cout << "Shortest path from 0 to 4: ";
    for (int node : path) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
