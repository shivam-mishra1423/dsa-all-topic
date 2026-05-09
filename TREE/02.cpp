#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
int data;
node *left,*right;
node(int value){
data=value;
left=right=NULL;
}
};
int main()
{
    int first;//left node
    int second;//right node
int x;
cout<<"enter the root node"<<endl;
cin>>x;
queue<node*>q;
node *root=new node(x);
cout<<root<<endl;////////////////////////
q.push(root);
cout<<q.front()<<endl;///////////////////////////
//creating the node
while(!q.empty()){
    node *temp=q.front();
    cout<<"before"<<temp<<endl;///////////////////////
    cout<<temp->data<<endl;//////////////////////
    cout<<endl;
    q.pop();
      cout<<"after"<<temp<<endl;//////////////////////
      cout<<temp->data<<endl;////////////////////
      cout<<endl;
    cout<<"enter the left node value"<<endl;///////////////////
    cin>>first;//left side me put karege
    if(first!=-1){
        temp->left=new node(first);
        q.push(temp->left);
    }

    cout<<"enter the right value"<<endl;///////////////////
    cin>>second;
    if(second!=-1){
        temp->right=new node(second);
        q.push(temp->right);
    }
}

}
