#include<iostream>
using namespace std;
///method 1
void total(node *root, int &sum){
if(root=NULL){
    return;
}
else{
    sum +=root->data;
    total(root->left,sum);
    total(root->right,sum);
}

}
///method 2

int total(node *root){
 if(head==NULL){
    return 0;
 }

 return  (root->data + total(root->left)  + total(root->right))
 }
