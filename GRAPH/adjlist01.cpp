#include<iostream>
#include<vector>
using  namespace std;
int main()
{
    int vertex,edges;

    cin>>vertex>>edges;

    vector<pair<int,int>>adjlsit[vertex];


    int u,v,weight;

    for(int i=0;i<edges;i++){
        cin>>u>>v>>weight;
        adjlsit[u].push_back(make_pair(v,weight));
        adjlsit[v].push_back(make_pair(u,weight));
    }

    for(int i=0;i<vertex;i++){
        cout<<i<<"->" ;
        for(int j=0;j<adjlsit[i].size();j++){
            cout<<adjlsit[i][j].first<<" "<<adjlsit[i][j].second<<" ";
        }
        cout<<endl;
    }
}
