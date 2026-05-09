#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int vertex,edges;
    cout<<"enter a vertex"<<endl;
    cin>>vertex;
    cout<<"enter the edges"<<endl;
    cin>>edges;

    vector<int>adjlist[vertex];

    cout<<"enter the connected node"<<endl;
    int u,v;

    for(int i=0;i<edges;i++){
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }


    for(int i=0;i<vertex;i++){

            cout<<i<<"->";
        for(int j=0;j<adjlist[i].size();j++){
            cout<<adjlist[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
