//create node side wise
#include<iostream>
using namespace std;
class node{
public:
    int data;
    node *left, *right;
    node(int value)
    {
        data=value;
        left=right=nullptr;
    }
};

node * binarytree(){//yaha return type pointer hai yaha hm node ko create kar rahe h
int x;
cin>>x;
if(x==-1){
    return NULL;
}
node *temp=new node(x);
//left side create karo
cout<<"enter the left child of "<<x<<endl;
temp->left=binarytree();//after completely left is created then right is created
//right side create karo
cout<<"enter the right child of"<<x<<endl;
temp->right=binarytree();//
return temp;
}
///////printing
void preorder(node *root){

if(root==NULL){
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
    root=binarytree();

    preorder(root);
}
