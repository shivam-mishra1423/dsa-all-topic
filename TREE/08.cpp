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
int main(){

int first,second;
queue<node*>q;
int x;
cout<<"enter the root node "<<endl;
cin>>x;

node *root=new node(x);
q.push(root);

//creating the tree
while(!q.empty()){
    node *temp=q.front();
    q.pop();

    cout<<"enter the left node of "<<temp->data<<endl;
    cin>>first;
    if(first!=-1){
        temp->left=new node(first);
        q.push(temp->left);
    }

    cout<<"enter the right node "<<temp->data<<endl;
    cin>>second;
    if(second!=-1){
        temp->right=new node(second);
        q.push(temp->right);
    }

    cout<<endl;
    cout<<temp<<" address of "<<temp->data<<endl;

}

}
