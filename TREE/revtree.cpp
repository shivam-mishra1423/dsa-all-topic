#include<iostream>
#include<vector>
#include<queue>


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

node*  insert(vector<int>ans){
if(ans.empty()){
    return nullptr;
}

node* root = new node(ans[0]);
queue<node*>q;

q.push(root);

int i=1;
int n=ans.size();

while(!q.empty()  && i<n){
    node* temp=q.front();

    if(temp->left==nullptr){
        temp->left=new node(ans[i]);
        q.push(temp->left);
        i++;
    }

     if(temp->right==nullptr){
        temp->right=new node(ans[i]);
        q.push(temp->right);
        i++;
    }
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
int main()
{
    vector<int>arr={1,2,3,4,5};

   node* root = insert(arr);

   preorder(root);
}
