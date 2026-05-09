#include<iostream>
using namespace std;
class node{
public:
    int data;
    node *left, *right;
    node(int value){
    data=value;
    left=right=nullptr;
    }
};

node* binarytree(){
int x;

cin>>x;

node *temp=new node(x);
if(x==-1){
    return nullptr;
}
cout<<"enter the left child of "<<x<<endl;
temp->left = binarytree();
cout<<"enter the right child of "<<x<<endl;
temp->right = binarytree();

return temp;
}

void preorder(node * root){
if(root==nullptr){
    return;
}
cout<<root->data<<" ";
preorder(root->left);
preorder(root->right);


}

void inorder(node *root){
if(root==nullptr){
    return;
}

inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);
}

void inorder(node *root){
if(root==nullptr){
    return;
}

inorder(root->left);

inorder(root->right);
cout<<root->data<<" ";
}
void levelorder(node * root){

queue<node*>q;
q.push(root->data);
while(!q.empty()){
    node* temp=q.front();
    q.pop();
    if(temp->left->data){
        cout<<temp->left->data<<" ";
    }
    if(temp->right->data){
        cout<<temp->right->data<<" ";
    }
}
}
int main()
{
    cout<<"enter a root node"<<endl;
    node* root;
    root = binarytree();

    preorder(root);

}
