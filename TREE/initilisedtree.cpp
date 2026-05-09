#include<iostream>
#include<queue>
using namespace std;
class node{
public:
    int data;
    node* left ,* right;

    node(int value)
    {
        data=value;
        left=right=nullptr;

    }


};

void preorder(node* root){
    if(root==nullptr){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);


}

void inorder(node* root){
if(root==nullptr){
    return;
}

inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);

}

void levelorder(node* root){
    if(root==nullptr){
        return;
    }

    queue<node*>q;
    q.push(root);

    while(!q.empty()){
        node* temp=q.front();
        q.pop();

      cout<<temp->data<<" ";
      if(temp->left!=nullptr){
        q.push(temp->left);
      }

      if(temp->right!=nullptr){
        q.push(temp->right);
      }
    }

}


///inserting the element

node* insert(node* root,int x){
if(root==nullptr){
    root=new node(x);
    return root;
}

///
queue<node*>q;
q.push(root);

while(!q.empty()){
    node* temp=q.front();
    q.pop();


    ///chinking in left side
    if(temp->left==nullptr){
        temp->left=new node(x);
        break;
    }
    else{
        q.push(root->left);
    }

    if(temp->right==nullptr){
      temp->right=new node(x);
      break;
    }
    else{
        q.push(temp->right);
    }
}

}
int main()
{
    node* first=new node(1);

    node* second=new node(2);
    node* third=new node(3);
    node* forth=new node(4);
    node* fifth=new node(5);
    node* sexth=new node(6);

    node* seventh=new node(7);

    first->left=second;
    first->right=third;

    second->left=forth;
    second->right=fifth;

    third->left=sexth;
    third->right=seventh;







    cout<<"insert the element "<<endl;
    insert(first,10);

    levelorder(first);

}
