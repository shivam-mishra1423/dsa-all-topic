#include<iostream>
#include<vector>
#include<queue>
using namespace std;

// BFS function
void bfs(int start, vector<int>lis[], int vertex) {
    vector<bool> visited(vertex, false);
    queue<int> q;

    visited[start] = true;
    q.push(start);

    cout << "BFS traversal starting from vertex " << start << ": ";
    cout << endl;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        cout << node << " ";

        for (int i = 0; i < vertex; i++) {
            if (adjmat[node][i] != 0 && !visited[i]) {
                visited[i] = true;
                q.push(i);
            }
        }
        cout << endl;
    }
}
int main()
{
    int vertex,edge;


    cout<<"enter total vertex "<<endl;
    cin>>vertex;
    cout<<"enter total edges"<<endl;
    cin>>edge;
    vector<int>lis[vertex];

    int u,v;

    for(int i=0;i<edge;i++){
        cin>>u>>v;

        list[u].push_back(v);
        list[v].push_back(u);

    }

    for(int i=0;i<vertex;i++){
        cout<<i<<" : ";
        for(int j=0;j<lis[i].size();j++){
            cout<<list[i][j]<<" ";
        }
        cout<<endl;
    }



    // Perform BFS
    int start_vertex;
    cout << "Enter the starting vertex for BFS: ";
    cin >> start_vertex;

    bfs(start_vertex, lis, vertex);

}
