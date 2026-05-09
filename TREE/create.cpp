#include<iostream>
#include<vector>
#include<queue>
#include<set>
using namespace std;
class node{
public:
    int data;
    node *left, *right;

    node(int value){
     data=value;
    left=nullptr;
    right=nullptr;
    }

};
node* btree()
{
    int x;
    cin>>x;
    if(x==-1){
        return nullptr;
    }
    node* temp=new node(x);
    cout<<"enter the left node of "<<x<<endl;
    temp->left=btree();

    cout<<"enter the right node of "<<x<<endl;
    temp->right=btree();
    return temp;
}

///////inorder traversal
void inorder(node* root,vector<int>&ans, set<int>&st, queue<int>&q){
if(root==nullptr){
    return;
}
inorder(root->left,ans,st,q);
ans.push_back(root->data);
st.insert(root->data);
q.push(root->data);
inorder(root->right,ans,st,q);
}
int main()
{
    cout<<"enter the root node "<<endl;
    node *root=btree();

    vector<int>ans;
    set<int>st;
    queue<int>q;

   inorder(root,ans,st,q);

  for(int i:ans){
         cout<<"size"<<ans.size()<<endl;
    cout<<i <<" ";

  }

  cout<<endl;

    cout<<"storing the element in queue "<<endl;
   for(int ele:st){
        cout<<"size"<<st.size()<<endl;
    cout<<ele <<" ";

   }

   cout<<endl;

    cout<<"printing the queue element "<<endl;
   while(!q.empty()){
          cout<<"size"<<q.size()<<endl;
    cout<<q.front()<<" ";
    q.pop();

   }
}
