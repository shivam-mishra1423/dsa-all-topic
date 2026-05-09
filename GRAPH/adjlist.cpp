//////using  adjustant list implement
#include<iostream>
#include<vector>
using namespace std;
int main()
{

    int vertex,  edges;
    cin>>vertex>>edges;


    int u,v;
    vector<int>adjlist[vertex];

    for(int i=0;i<edges;i++){
        cin>>u>>v;
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }


    for(int i=0;i<vertex;i++)
    {
        cout<<i<<" -> ";
        for(int j=0;j<adjlist[i].size();j++){
            cout<<adjlist[i][j]<<" ";
        }
        cout<<endl;
    }
}
