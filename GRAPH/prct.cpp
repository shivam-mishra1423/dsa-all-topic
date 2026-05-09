#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main()
{

    int vertex;
    int edges;
    cout<<"enter the total no of vertex"<<endl;
    cin>>vertex;

    cout<<"ente total edges"<<endl;
    cin>>edges;

    vector<vector<int>>adjlist(vertex);

    int u,v;

    for(int i=0;i<edges;i++){
        cin>>u>>v;

        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }


    cout << "Adjacency List:" << endl;
    for (int i = 0; i < vertex; i++) {
        cout << i << " -> ";
        for (int j = 0; j < adjlist[i].size(); j++) {
            cout << adjlist[i][j] << " ";
        }
        cout << endl;
    }



    cout<<"bfs traversal "<<endl;

    queue<int>q;
    vector<int>visited(vertex,0);

    visited[0]=1;
    q.push(0);

    while(!q.empty()){
        int node= q.front();
        q.pop();

        cout<<node<<" ";
        for(int j=0;j<adjlist[node].size();j++){
           int nebhor= adjlist[node][j];
           if(visited[nebhor]==0){
            visited[nebhor]=1;
            q.push(nebhor);
           }
            }
        }

}
