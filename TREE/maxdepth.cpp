#include<iostream>
using namespace std;
class node{
public:
    node* left;
    node* right;
    int data;
    node(int x){
    data=x;
    left=right=nullptr;
    }

};

void inorder(node* root){
if(root==nullptr){
    return;
}
inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);

}

///finding the meximum depth
int maxdep(node* root){
if(root==nullptr){
    return 0;
}
int leftmax=maxdep(root->left);
int rigmax=maxdep(root->right);

return max(leftmax,rigmax)+1;

}
int main()
{
    node* root=new node(1);

    node* first=new node(2);
    node* second=new node(3);
    node* third=new  node(4);
    node* forth=new node(5);
    node* fifth=new node(6);
    node* sixth=new node(7);
    node* sev=new node(8);
    node* eig=new node(9);

    root->left=first;//2
    root->right=second;//3
    root->left->left=third;//4
    root->left->right=forth;//5
    root->right->left=fifth;//6
    root->right->right=sixth;//7
    root->left->left->left=sev;//8

    inorder(root);
    cout<<endl;

    cout<<maxdep(root);
    return 0;
    /*
                                        1

                                    2        3
                                4       5  6      7
                            8       9
                            */

}
