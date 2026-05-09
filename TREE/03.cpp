#include<iostream>
#include<queue>
using namespace std;
class node{
public:
    int data;
    node *left,  *right;
    node(int value){
    data=value;
    left=right=NULL;
    }
};
int main(){
    int first,second;
    queue<node*>q;

    int x;
    cout<<"enter the value of the root node "<<endl;
    cin>>x;
    node *root=new node(x);
    q.push(root);
    cout<<"root "<<root<<endl;
    //creating the tree
    int cnt=0;
    while(!q.empty()){
        node *temp=q.front();
        cout<<"before before"<<temp->data<<" "<<temp<<endl;
            q.pop();
            //cout<<"size of queue"<<q.front()<<endl;
       // cout<<temp->data<<endl;
        cout<<"after pop"<<temp->data<<" "<<temp<<endl;
        cnt++;
        cout<<"enter the left node of the value "<<temp->data<<endl;
        cin>>first;
        if(first!=-1){
            temp->left=new node(first);
            q.push(temp->left);
            cout<<"temp->left"<<temp->left<<endl;
        }
        cout<<"enter the right element "<<temp->data<<"  "<<endl;
        cin>>second;
        if(second!=-1){
                temp->right=new node(second);
            q.push(temp->right);
            cout<<"temp->right"<<temp->right<<endl;
        }
    }
    cout<<"total node generate "<<cnt<<endl;
}

//////                  1
//                   2      3
//                4    5  6    7
