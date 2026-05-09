#include<iostream>
#include<queue>
using namespace std;
class node{
public:
    int data;
    node *left, *right;
    node(int value)
    {
        data=value;
        left=right=nullptr;
    }

};
int main()
{
    queue<node*>q;
    int x;
    cin>>x;

    node *root=new node(x);
    cout<<*(root);
}
