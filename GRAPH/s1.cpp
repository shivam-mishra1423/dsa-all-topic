#include<iostream>
#include<vector>
using namespace std;


//////adjacency matrix
///undirected graph

int main()
{
    int vertex, edges;
    cin>>vertex>>edges;

    vector<vector<bool>>adjmat(vertex,vector<bool>(vertex,0));

    int u,v;
    for(int i=0;i<edges;i++)
    {
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
}
