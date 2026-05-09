#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int vertex, edges;
    cout << "Enter the number of vertices: ";
    cin >> vertex;
    cout << "Enter the number of edges: ";
    cin >> edges;

    vector<int> adjlist[vertex];

    int u, v;
    for (int i = 0; i < edges; i++) {
        cout << "Enter the edge from u to v: ";
        cin >> u >> v;
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }

    // BFS traversal
   queue<int>q;
   vector<bool>visited(vertex,0);
   q.push(0);
   visited[0]=1;

   while(!q.empty()){
    int node=q.front();

    q.pop();

    cout<<node<<" ";
    for(int i=0;i<adjlist[node].size();i++){
        int neb=adjlist[node][i];
        if(!visited[neb]){
            visited[neb]=1;
            q.push(neb);
        }
    }
   }
    return 0;
}
