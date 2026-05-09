
#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
int data;
node *left,*right;

node(int value){
data=value;
left=right=nullptr;
}



};

node* create(){
///////
int x;
cin>>x;
if(x==-1){
    return nullptr;
}
node *temp=new node(x);

cout<<"enter the left child of "<<x<<" ";
temp->left=create();
cout<<"enter the right child "<<x<<" ";
temp->right=create();


return temp;
}

void preorder(node *root){

////base case
if(root==nullptr){
    return ;
}
cout<<root->data<<" ";
preorder(root->left);

preorder(root->right);

}
int main()
{

    cout<<"enter the root node "<<endl;
    node *root;

   root = create();

preorder(root);
}
