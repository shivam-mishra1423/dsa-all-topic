#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
int data;
node* left , *right;

node(int x){
data=x;
left=right=nullptr;
}

};


 ///traversal the tree
 void preorder(node* root){

 if(root==nullptr){
    return;
 }

 cout<<root->data<<" ";
 preorder(root->left);

 preorder(root->right);


 }



 ////////
 void inorder(node* root)
 {
     if(root==nullptr)
     {
         return;
     }
     inorder(root->left);
     cout<<root->data<<" ";
     inorder(root->right);
 }

 ////postorder
 void postorder(node* root){
 if(root==nullptr)
 {
     return;
 }

 postorder(root->left);
 postorder(root->right);
 cout<<root->data;
 }
int main()
{

int x;
cout<<"enter  the root node "<<endl;
cin>>x;
queue<node*>q;
node* root=new node(x);
q.push(root);

int first;///storing the left node
int second;//storing the right value

while(!q.empty()){
    node* temp=q.front();
    q.pop();
    cout<<"enter the left child of "<<temp->data<<endl;
    cin>>first;
    if(first!=-1){
    temp->left=new node(first);
    q.push(temp->left);
    }

    cout<<"enter the right child of "<<temp->data<<endl;
    cin>>second;
    if(second!=-1){
    temp->right=new node(second);
    q.push(temp->right);///yaha hm address ko queue me push kar rhe hai
    }

}


preorder(root);

cout<<endl;
cout<<"inorder traversal "<<endl;
inorder(root);

cout<<endl;
cout<<"psot order "<<endl;
postorder(root);
cout<<endl;
}
