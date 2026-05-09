#include<iostream>
#include<queue>
using namespace std;
class node{
public:
    node *left;
    node* right;
    int data;
    node(int value){
    data=value;
    left=nullptr;
    right=nullptr;
    }
};

int main()
{

  queue<node*>q;
  int x;
  cout<<"enter the root node "<<endl;
  cin>>x;
  node *root=new node(x);
  while(q.empty()){
    node *temp=q.front();
    q.pop();

    int first;
    cin>>first;
   if(first!=-1){
    temp->left=new node(first);
    q.push(temp->left);
   }


     int second;
    cin>>second;
   if(second!=-1){
    temp->right=new node(first);
    q.push(temp->right);
   }
  }

}
