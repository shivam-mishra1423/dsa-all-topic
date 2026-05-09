#include<iostream>
using namespace std;
#include<queue>
class node{
public:
    int data;
    node *left, *right;
};
int main()
{
    int first;//this variable store the left value
    int second;//this variable store the second value
    queue<node*>q;
    int x;
    cout<<"enter the root node"<<endl;
    cin>>x;
    node *root=new node(x);
    q.push_back(root);

    //creating the binary tree
    while(!q.empty()){
        node *temp=q.front();
        q.pop();

    cout<<"enter the left value of the node "<<temp->data<<endl;
    cin>>first;
    if(first!=-1){//then create node
        temp->left=new node(first);
        q.push(temp->left);
    }

    cout<<"enter the right value of the node "<<temp->right<<endl;
    cin>>second;//storing the right value
    if(second!=-1){
        temp->right=new node(second);
        q.push(temp->right);
    }
    }
}
