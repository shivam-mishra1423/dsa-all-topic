#include<iostream>
#include<vector>
using namespace std;
int main()
{

    int vertex,edge;
    cout<<"enter the total vertex "<<endl;
    cin>>vertex;
    cout<<"enter the total node "<<endl;
    cin>>edge;
    vector<vector<int>>adjmat(vertex,vector<int>(vertex,0));

    int u,v,weight;

    for(int i=0;i<edge;i++){
        cin>>u>>v>>weight;
        adjmat[u][v]=weight;
        adjmat[v][u]=weight;
    }


    cout<<"printing the value"<<endl;

    for(int i=0;i<vertex;i++){
            for(int j=0;j<vertex;j++){
                cout<<adjmat[i][j]<< " ";
            }
        cout<<endl;
    }
}
