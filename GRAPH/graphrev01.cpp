#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main()
{
    int edges,vertex;
    cout<<"enter the edges "<<endl;
    cin>>edges;
    cout<<"enter the vertex "<<endl;
    cin>>vertex;

    vector<int>al[vertex];

    int u,v;

    for(int i=0;i<edges;i++){
        cout<<"enter the two connected node "<<endl;
        cin>>u>>v;

        al[u].push_back(v);
        al[v].push_back(u);

    }

    queue<int>q;

    vector<bool>visited(vertex,0);

    q.push(0);

    while(!q.empty()){
        int temp=q.front();

        q.pop();
        visited[0]=1;

        cout<<"bfs traversal "<<temp <<endl;



        for(int i=0;i<al[temp].size();i++){
            int nebhor=al[temp ][i];
            if(!visited[nebhor]){
                visited[nebhor]=1;
                q.push(nebhor);
            }
        }
    }

}
