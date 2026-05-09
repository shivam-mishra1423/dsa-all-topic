#include<iostream>
#include<queue>
using namespace std;
class node{
public:
    int data;
    node *left,*right;
    node(int value)
    {
        data=value;
        left=right=NULL;;
    }
};
//////////pre order traversal
void preorder(node *root){

    //base case
    if(root==NULL){
        return;
    }
node *temp=root;
cout<<temp->data<<" ";
preorder(root->left);
preorder(temp->right);
}

///post oredr traversal
void postorder(node *head){
//base case
node *temp=head;
if(head==NULL){
    return;
}
else{
    postorder(temp->left);
    postorder(temp->right);
    cout<<temp->data<<" ";
}
}
int main()
{
    queue<node*>q;
    int first;//store the left side elemnt
    int second;//storing the right side element
    int x;
    cout<<"enter the root node "<<endl;
    cin>>x;
    node *root=new node(x);
    q.push(root);

    //creating the tree
    while(!q.empty()){
        node *temp=q.front();
        q.pop();

        cout<<"enter the left node of "<<temp->data<<endl;
        cin>>first;
        if(first!=-1){
            temp->left=new node(first);
            q.push(temp->left);
        }

        cout<<"enter the right node of "<<temp->data<<endl;
        cin>>second;
        if(second!=-1){
            temp->right=new node(second);
            q.push(temp->right);
        }
    }

    preorder(root);
    cout<<endl;
    postorder(root);
}
