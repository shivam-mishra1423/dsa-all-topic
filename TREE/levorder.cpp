#include<iostream>
using namespace std;
class node{
public:
    int data;
    node *left, *right;
    node(int value)
    {
        data=value;
        left=right=NULL;
    }
};

vector<int>levelorder(node *root){//yaha hamre pass root node ka address present ho gaya
    queue<node *>q;
    q.push(root);

    vector<int>ans;//isme ans ko store karnge or return me vector dge
    node *temp;
    while(!q.empty()){//jb tak queue empty na ho jie
        temp=q.front();
        q.pop();//iske help se address ko niklte hai
        ans.push_back(temp->data);
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
    return ans;


}
int main()
{

}


//jb ve hme levelorder traversal bole to hm queue used kar lete hai
//jb  v he left or khuh bole to waha hm recursion used kar sakte hai

//time complilixity o(n)
//space complixity to yaha space queue le raha hai yaha hamra jo queue ka size hoga wahi hamra space complixity hoga  n/2+1  means bol sakte h 0(n)
