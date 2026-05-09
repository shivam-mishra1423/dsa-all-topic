#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* left, * right;

    node(int value){
    data=value;
    left=right=nullptr;

    }

};

void preorder(node* root){

if(root==nullptr){
    return;
}

}
int main(){

int x;
cout<<"enter a value "<<endl;
cin>>x;

queue<node*>q;
node* root=new node(x);
q.push(root);

while(!q.empty()){
    node* temp=q.front();
    q.pop();

    int leftchild;
    cout<<"enter the left child of"<<root->left<<endl;
    cin>>leftchild;
    if(leftchild!=-1){
        root->left=new node(leftchild);
        q.push(root->left);
    }

    int rightchild;
    cout<<"enter the right child of "<<root->data<<endl;
    if(rightchild!=-1){
        root->right=new node(rightchild){
        q.push(root->right);
        }
    }
}


}
