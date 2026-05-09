#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int edges,node;
    cout<<"enter the total edges "<<endl;
    cin>>edges;
    cout<<"enter the total node "<<endl;
    cin>>node;

    vector<vector<string>>adjmat(node,vector<string>(node,0));

    int start,end,weight;//means connection betweet the   tow node;

    for(int i=0;i<edges;i++){
        cin>>start>>end>>weight;
        adjmat[start][end]=weight;
        adjmat[end][start]=weight;

    }

    ///printing the value

    for(int i=0;i<node;i++){
        for(int j=0;j<node;j++){
            cout<<adjmat[i][j]<<" ";
        }
        cout<<endl;
    }
}
