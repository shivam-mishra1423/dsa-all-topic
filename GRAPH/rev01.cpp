#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int vertex,edges;

    cout<<"enter edges "<<endl;
    cin>>edges;
    cout<<"enter the vertex "<<endl;
    cin>>vertex;

    vector<vector<bool>>adjmat(vertex,vector<bool>(vertex,0));

    int u,v;

    for(int i=0;i<edges;i++){
        cout<<"enter the two connected node "<<endl;
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
