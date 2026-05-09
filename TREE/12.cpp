#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
int data;
node *left,*right;

node(int value){
data=value;
left=right=nullptr;
}



};
int main()
{
    queue<node*>q;

    int x;
    cout<<"enter the root node"<<endl;
    cin>>x;
    node *root=new node(x);

    q.push(root);

    while(!q.empty()){
        node *temp=q.front();
    q.pop();

        cout<<"enter the left child  of "<<temp->data<<" "<<endl;;
        //left side
        int first;
        cin>>first;
        if(first!=-1){

            temp->left=new node(first);
            q.push(temp->left);
        }

        ////right side
       cout<<"enter the right child value of "<<temp->data<<" " <<endl;
        int second;
        cin>>second;
        if(second!=-1){

            temp->right=new node(second);
            q.push(temp->right);
        }
    }


}
