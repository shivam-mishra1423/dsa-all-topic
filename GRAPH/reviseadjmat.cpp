#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int edges,vertex;

    cout<<"enter the edges "<<endl;
    cin>>edges;
    cout<<"enter the vertex "<<endl;
    cin>>vertex;

    //storint thevalue
    vector<vector<string>>adjmat(vertex,vector<string>(vertex," "));

    int u,v;
    string weight;

    for(int i=0;i<edges;i++){
        cin>>u>>v;
        cin>>weight;

        adjmat[u][v]=weight;
        adjmat[v][u]=weight;
            }




}
