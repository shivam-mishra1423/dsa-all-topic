#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int edges;
    int vertex;
    cout<<"enter thr vetrex"<<endl;
    cin>>vertex;

    int u,v;

    cout<<"enter the edges "<<endl;
    cin>>edges;


    vector<int>adjlist[vertex];

    for(int j=0;j<edges;j++){
        cin>>u>>v;
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }

    for(int i=0;i<vertex;i++){
            cout<<i<<"->"<<" ";
        for(int j=0;j<adjlist[i].size();j++){
            cout<<adjlist[i][j]<<" ";
        }
        cout<<endl;
    }

}
