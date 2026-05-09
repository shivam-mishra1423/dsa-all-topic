#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <climits>
#include <string>

using namespace std;

// Function to add an edge to the graph with weights
void addEdge(vector<pair<int, int>> adj[], int u, int v, int weight) {
    adj[u].emplace_back(v, weight); // Add (v, weight) to u's adjacency list
    adj[v].emplace_back(u, weight); // Add (u, weight) to v's adjacency list (undirected)
}

// Function to find the shortest path using Dijkstra's Algorithm
vector<int> shortestPath(vector<pair<int, int>> adj[], int V, int src) {
    vector<int> dist(V, INT_MAX); // Initialize distances to all vertices as infinity
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq; // Min-heap for Dijkstra

    dist[src] = 0; // Distance to the source is 0
    pq.emplace(0, src); // Push the source node with distance 0

    while (!pq.empty()) {
        int distance = pq.top().first; // Distance of the current node
        int node = pq.top().second;    // Current node
        pq.pop();

        // Traverse all adjacent nodes
        for (auto &neighbor : adj[node]) {
            int nextNode = neighbor.first;
            int weight = neighbor.second;

            // If a shorter path is found
            if (distance + weight < dist[nextNode]) {
                dist[nextNode] = distance + weight;
                pq.emplace(dist[nextNode], nextNode); // Push updated distance to priority queue
            }
        }
    }

    return dist; // Return distances from the source to all nodes
}

int main() {
    int V, E; // Number of vertices and edges
    cout << "Enter the number of vertices: ";
    cin >> V;

    cout << "Enter the number of edges: ";
    cin >> E;

    vector<pair<int, int>> adj[V]; // Graph as adjacency list with weights
    unordered_map<string, int> nodeMap; // Map to store string node names to integer indices
    vector<string> nodeNames(V);        // To store reverse mapping (integer index to node name)

    cout << "Enter the names of the vertices:\n";
    for (int i = 0; i < V; i++) {
        string name;
        cin >> name;
        nodeMap[name] = i; // Map node name to index
        nodeNames[i] = name; // Reverse map index to name
    }

    cout << "Enter the edges with weights (node1 node2 weight):\n";
    for (int i = 0; i < E; i++) {
        string uName, vName;
        int weight;
        cin >> uName >> vName >> weight;

        int u = nodeMap[uName]; // Get integer index for node1
        int v = nodeMap[vName]; // Get integer index for node2
        addEdge(adj, u, v, weight);
    }

    string srcName;
    cout << "Enter the source node: ";
    cin >> srcName;
    int src = nodeMap[srcName]; // Get integer index for source node

    vector<int> distances = shortestPath(adj, V, src);

    // Print the shortest distances
    cout << "Node\tDistance from Source (" << srcName << ")\n";
    for (int i = 0; i < V; i++) {
        cout << nodeNames[i] << "\t" << distances[i] << endl;
    }

    return 0;
}
