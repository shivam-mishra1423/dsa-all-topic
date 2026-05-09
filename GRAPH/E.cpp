#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int vertex,edges;

    cout<<"enter the vertex "<<endl;
    cin>>vertex;
    cout<<"enter the edges "<<endl;
    cin>>edges;

    vector<vector<int>>adjmat(vertex,vector<int>(vertex,0));

    int u,v; ///means kaha se kaha tak

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
}
