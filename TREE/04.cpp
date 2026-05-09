#include<iostream>
#include<queue>
using namespace std;
class node{
public:
    int data;
    node *left,*right;
    node(int value){
    data=value;
    left=right=NULL;
    }
};
int main()
{
    int first;//used to insert the first element
    int second;//used to inser the left element
    queue<node *>q;//isska used address ko store karne k liyea krte hai
    int x;
    cout<<"enter the root element "<<endl;
    cin>>x;
    node *root=new node(x);
    q.push(root);

    //creating the node
    while(!q.empty()){
        node *temp=q.front();
        q.pop();

        cout<<"enter the left element of  "<<temp->data<<endl;
        cin>>first;
        if(first!=-1){
            temp->left=new node(first);
            q.push(temp->left);
        }


        cout<<"enter the right element of "<<temp->data<<endl;
        cin>>second;
        if(second!=-1){
            temp->right=new node(second);
            q.push(temp->right);
        }
    }
}
