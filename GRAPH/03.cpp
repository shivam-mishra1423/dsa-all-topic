//Adjacency matrix
#include<iostream>
#include<vector>
using namespace std;


//Adjacency matrix
//directed  graph

int main()
{
    int vertex , edges;//ye input me dega hamre pass kitni vertix h or kitni edges h
    cout<<"enter the vertices "<<endl;
    cin>>vertex;
    cout<<"enter the edges "<<endl;
    cin>>edges;

    vector<vector<bool>>adjmat(vertex,vector<bool>(vertex,0));//2d matrix isme bool value rakhnge bcse directed   graph h

    int u, v;
    for(int i=0;i<edges;i++)
    {
        cin>>u>>v;//last me weight hai u starting v end node and uska weight
        adjmat[u][v]=1;//kawal u se v edge ja rahi h v se u nhi ja rahi

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


