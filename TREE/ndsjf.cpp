#include<iostream>
using namespace std;
class node{
public:
    int data;
    node*left;
    node* right;

    node(int value){
    data=value;
    left=nullptr;
    right=nullptr;
    }
};
node* binary(){
int x;
cin>>x;
if(x==-1){
    return nullptr;
}
node* temp=new node(x);
cout<<"enter the left child of "<<x<<endl;
temp->left=binary();
cout<<"enter the right child of "<<x<<endl;
temp->right=binary();

return temp;
}

void pre(node* root){
///////
if(root==nullptr){
    return;
}
cout<<root->data<<" ";
pre(root->left);
pre(root->right);
}
int main()
{
    cout<<"enter the root node "<<endl;
    node* root=binary();
    pre(root);
}
