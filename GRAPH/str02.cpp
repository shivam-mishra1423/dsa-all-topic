//striver 01  lect 05
//pre traversal
//not working####################
#include<iostream>
using namespace std;
struct node{
int data;
node *left;
node *right;
node(int value)
{
    data=value;
    left=right= NULL;
}

void preorder(int root){
//base case
if(root==NULL){
    return;
}
cout<<root->data<<" ";
preorder(root->left);
preorder(root->right);
}

};
int main()
{
    struct node *root=new node(1);

    root->left=new node(2);
    root->right=new node(3);

    root->left->left=new node(4);
    root->left->right=new node(5);

    root->right->left=new node(6);
    root->right->right=new node(7);

    preorder(root)

}

