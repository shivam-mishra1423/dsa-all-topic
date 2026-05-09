#include<iostream>
#include<vector>


////using adjuncy matrix
///undirected wegited graph
using namespace std;
int main()
{
  int vertex,edges;


  cout<<"enter the vertex "<<endl;
  cin>>vertex;
  cout<<"enter the edges "<<endl;
  cin>>edges;

  ////data dype int liyea because weight hai  or 0 he dikhans h weghted graph hai or isse unitilised 0 se kar diyea
    vector<vector<int>>adjmat(vertex, vector<int>(vertex,0));


    cout<<"enter the connected edges "<<endl;
    int u,v,weight;///u se v edge ja rahi hai or ekk weight hai
    for(int i=0;i<edges;i++)
    {
        cin>>u>>v>>weight;//means kaha se kaha tk edge hai
        adjmat[u][v]=weight;///agar 0 se 1 pe 1 edge hai to 1 se 0 pe v ekk edge  hogi
        adjmat[v][u]=weight;///

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
