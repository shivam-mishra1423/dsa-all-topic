#include<iostream>
#include<vector>
#include<queue>
using namespace std;


void bfs(int start,  vector<vector<int>>&adjmat,int vertex){
vector<bool>visited(vertex,false);
queue<int>q;

visited[start]=true;
q.push(start);

cout<<"start bfs traversal starting from the vertex "<<start<<" : ";

while(!q.empty())
{
    int node = q.front();
    q.pop();

    cout<<node<<" ";


    for(int i=0;i<vertex;i++){
        if(adjmat[node][i]!=0  && !visited[i]){
            visited[i]=true;
            q.push(i);
        }
    }

    cout<<endl;
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

    for(int i=0;i<vertex;i++){
        for(int j=0;j<vertex;j++){
            cout<<adjmat[i][j]<<" ";
        }
        cout<<endl;
    }

 // Perform BFS from a starting vertex
    int start_vertex;
    cout << "Enter the starting vertex for BFS: ";
    cin >> start_vertex;

    bfs(start_vertex, adjmat, vertex);

    return 0;
}
