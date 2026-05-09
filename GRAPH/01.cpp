//Adjacency matrix
#include<iostream>
#include<vector>
using namespace std;


//Adjacency matrix
//undirected unweighted graph

int main()
{
    int vertex , edges;//ye input me dega hamre pass kitni vertix h or kitni edges h
    cout<<"enter the vertices "<<endl;
    cin>>vertex;
    cout<<"enter the edges "<<endl;
    cin>>edges;

    vector<vector<bool>>adjmat(vertex,vector<bool>(vertex,0));//2d matrix isme bool value rakhnge bcse 0 1 undirected un weigated graph h

    int u, v;//means kaha se kaha tk edge hi
    for(int i=0;i<edges;i++)
    {
        cin>>u>>v;
        adjmat[u][v]=1;//0 se 1 edge h
        adjmat[v][u]=1;// same 1 se 0 ekk edge hi
        //is dono ko matrix me dal dge
    }


    //printing the value

    for(int i=0;i<vertex;i++)
    {
        for(int j=0;j<vertex;j++){
            cout<<adjmat[i][j]<<" ";
        }
        cout<<endl;
    }

}
