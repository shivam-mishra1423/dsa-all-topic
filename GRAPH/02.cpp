//Adjacency matrix
#include<iostream>
#include<vector>
using namespace std;


//Adjacency matrix
//undirected weighted graph

int main()
{
    int vertex , edges;//ye input me dega hamre pass kitni vertix h or kitni edges h
    cout<<"enter the vertices "<<endl;
    cin>>vertex;
    cout<<"enter the edges "<<endl;
    cin>>edges;

    vector<vector<int>>adjmat(vertex,vector<int>(vertex,0));//2d matrix isme integet value rakhnge bcse undirected  weigated graph h

    int u, v,weight;//means kaha se kaha tk edge hi
    for(int i=0;i<edges;i++)
    {
        cin>>u>>v>>weight;//last me weight hai u starting v end node and uska weight
        adjmat[u][v]=weight;//0 se 1 edge h or uska weight ky h
        adjmat[v][u]=weight;// same 1 se 0 ekk edge hi
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

