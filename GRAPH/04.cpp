#include<iostream>
#include<vector>


////using adjuncy matrix
///undirected unwegited graph
using namespace std;
int main()
{
  int vertex,edges;


  cout<<"enter the vertex "<<endl;
  cin>>vertex;
  cout<<"enter the edges "<<endl;
  cin>>edges;
    vector<vector<bool>>adjmat(vertex, vector<bool>(vertex,0));


    cout<<"enter the connected edges "<<endl;
    int u,v;
    for(int i=0;i<edges;i++)
    {
        cin>>u>>v;//means kaha se kaha tk edge hai
        adjmat[u][v]=1;///agar 0 se 1 pe 1 edge hai to 1 se 0 pe v ekk edge  hogi
        adjmat[v][u]=1;///

    ////dono me srrea edges aa jyge
    }


    //////////printing
    for(int i=0;i<vertex;i++){
        for(int j=0;j<vertex;j++){
            cout<<adjmat[i][j]<<" ";
        }
        cout<<endl;
    }
}
