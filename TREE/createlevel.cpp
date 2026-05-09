#include<iostream>
#include<queue>
#include<vector>
#include<set>
using namespace std;
class node{
public:
    int data;
    node *left;
    node *right;
    node(int value){
    data=value;
    left=nullptr;
    right=nullptr;
    }

};
////create level wise tree
node* cl(){
queue<node*>q;
int x;
cout<<"enter the root node "<<endl;
cin>>x;
if(x==-1){
    return nullptr;
}
node* root=new node(x);
q.push(root);

while(!q.empty()){
    node* temp=q.front();
    q.pop();

    int first;
    cout<<"enter the left node of "<<temp->data<<endl;
    cin>>first;
    if(first!=-1){
        temp->left=new node(first);
        q.push(temp->left);
    }

    int second;
     cout<<"enter the right node  of"<<temp->data<<endl;
    cin>>second;
    if(second!=-1){
        temp->right=new node(second);
        q.push(temp->right);
    }
}

return root;
}


int  inorder(node* root,int &sum){
if(root==nullptr){
    return 0;
}

if(root->left==nullptr  && root->right==nullptr){
    sum+=1;
}
inorder(root->left,sum);
inorder(root->right,sum);

return sum;

}



int main()
{
    node *root;
    root=cl();

int sum=0;
   int ans = inorder(root,sum);
   cout<<ans;



}
