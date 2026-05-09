#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* left , *right;
    node(int value){
    data=value;
    left=right=nullptr;
    }

};

node* insert(node* root, int target){
////base case
if(root==nullptr){
    node* temp=new node(target);
    return temp;
}

///left me jow
if(target<root->data){
    root->left=insert(root->left,target);
}
/////right me jow
else{
    root->right=insert(root->right,target);
}
return root;
}

void preorder(node* root){
////base case
if(root==nullptr){
    return;
}
cout<<root->data<<" ";
preorder(root->left);
preorder(root->right);
}


/////////////searching the element
bool search(node* root, int target){
/////////base case
if(root==nullptr){
    return 0;
}
else{
    if(root->data==target){
        return 1;
    }

    //////////agar root ke data target se bara ho to left me jow
    if(root->data > target){
        return search(root->left,target);
    }
    else{
        return search(root->right,target);
    }
}

}
int main()
{
    node *root;
    root=nullptr;
    int arr[]={3,7,4,1,6,8};

    for(int i=0;i<6;i++){
        root=insert(root,arr[i]);
    }

    preorder(root);


    cout<<endl;
    cout<<search(root,7);
}
