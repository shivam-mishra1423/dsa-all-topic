#include<iostream>
using namespace std;
class node{
    public:
int data;
node *left, *right;
node(int value){
data=value;
left=right=NULL;
}
};

node *binarytree(){

int x;
cin>>x;
if(x==-1){
    return NULL;
}
node *temp=new node(x);
//left tree create karo
cout<<"enter the left child of "<<x<<" ";
temp->left=binarytree();
//right tree create karo
cout<<"enter the right child of "<<x<<" ";
temp->right=binarytree();

return temp;
}

void print(node *root){
   if(root==nullptr){
    return ;
   }
   else{
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
   }
}
int main()
{
cout<<"enter the root node"<<endl;
node *root;
root=binarytree();

print(root);
}
