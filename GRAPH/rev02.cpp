#include<iostream>
#include<vector>
using namespace std;

////dfs function
void dfs(int node, vector<int>adj[],vector<bool>&visited){
visited[node]=1;
cout<<node<<" ";


////checking the visited or not visited nabhor
for(int i=0;i<adj[node].size();i++){
    if(!visited[adj[node][i]]){
        dfs(adj[node][i],adj,visited);
    }
}


}
int main()
{
    int edges,vertex;
    cout<<"enter the edges "<<endl;
    cin>>edges;

    cout<<"enter the vertex "<<endl;
    cin>>vertex;

    vector<int>adjlist[vertex];

    int u,v;

    for(int i=0;i<edges;i++){
            cout<<"enter the connected two node "<<endl;
        cin>>u>>v;
        adjlist[v].push_back(u);
        adjlist[u].push_back(v);

    }

    for(int i=0;i<vertex;i++){

            cout<<i <<" -> "<<" ";
        for(int j=0; j<adjlist[i].size();j++){
            cout<<adjlist[i][j]<<" ";
        }
    cout<<endl;
    }


    cout<<" ";
    cout<<endl;

    cout<<"calling th dfs function "<<endl;
    vector<bool>visited(vertex,0);


   dfs(0,adjlist,visited);

}
