#include<iostream>
#include<vector>
#include<queue>
using namespace std;

// DFS function (recursive)
void dfs(int node, vector<vector<int>>& adjmat, vector<bool>& visited, int vertex) {
    visited[node] = true;
    cout << node << " ";

    // Explore adjacent vertices
    for (int i = 0; i < vertex; i++) {
        if (adjmat[node][i] != 0 && !visited[i]) {
            dfs(i, adjmat, visited, vertex);
        }
    }
}

int main()
{
    int vertex,edges;

    cout<<"enter vertex and edge "<<endl;


    cin>>vertex>>edges;
    vector<vector<int>>adjmat(vertex, vector<int>(vertex,0));

    int u,v;

    for(int i=0;i<edges;i++){
        cin>>u>>v;

        adjmat[u][v]=1;
        adjmat[v][u]=1;
    }


    // Output the adjacency matrix
    cout << "Adjacency Matrix: " << endl;
    for (int i = 0; i < vertex; i++) {
        for (int j = 0; j < vertex; j++) {
            cout << adjmat[i][j] << " ";
        }
        cout << endl;
    }

      // Perform DFS

    int start_vertex;
    cout << "Enter the starting vertex for DFS: ";
    cin >> start_vertex;



    vector<bool> visited(vertex, false);
    cout << "DFS traversal starting from vertex " << start_vertex << ": " << endl;
    dfs(start_vertex, adjmat, visited, vertex);

    return 0;
}

