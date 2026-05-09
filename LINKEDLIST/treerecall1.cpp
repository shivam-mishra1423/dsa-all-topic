#include<iostream>
#include<vector>
#include<queue>

using namespace std;
class node{
public:
    string data;
    node *left;
    node *right;

    node(string x){
    data=x;
    left=right=nullptr;
    }
    };

void preorder(node *root){
if(root==nullptr){
    return;
}

cout<<root->data<<" ";
preorder(root->left);
preorder(root->right);
}
int main()
{

    vector<string>ans;
    string x;
    cout<<"enter the root node"<<endl;
    cin>>x;

    node* root=new node(x);
    queue<node*>q;
    q.push(root);

    string leftchild;
    string rightchild;

    ans.push_back(x);

    while(!q.empty()){

        node* temp=q.front();
        q.pop();



        ////taking the input of the left chil if there are exiest
        cout<<"enter the left child of " <<" "<<temp->data<<endl;
        cin>>leftchild;
        if(rightchild!="N"){
                ans.push_back(leftchild);
            temp->left=new node(leftchild);
            q.push(root->left);
        }
        ///taking the right child of of input if the is exiest
        cout<<"enter the right child of " <<" "<<temp->data<<endl;
        cin>>rightchild;
        if(rightchild!="N"){
                ans.push_back(rightchild);
            temp->right=new node(rightchild);
            q.push(root->right);
        }
    }
        ////printing the vector

        cout<<"****************YOYR FULLDATA************"<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }

        cout<<"preorder traversal "<<endl;


        preorder(root);







}
