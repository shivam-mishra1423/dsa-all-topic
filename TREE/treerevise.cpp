#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* left;
    node* right;

    node(int x){
    data=x;
    left=right=nullptr;
    }

};
node* binarytree(){
    int x;
    cout<<"enter the node "<<endl;
cin>>x;
if(x==-1){
    return nullptr;
}

else{

node* temp=new node(x);
    temp->left=binarytree();
    temp->right=binarytree();
return temp;
}
}

void preorder(node* root){
if(root==nullptr){
    return;
}

cout<<root->data<<" ";
preorder(root->left);
preorder(root->right);
}
int main(){


node* root=nullptr;


root=binarytree();

preorder(root);

}
