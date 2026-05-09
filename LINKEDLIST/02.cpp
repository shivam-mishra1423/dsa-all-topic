//create linkedlist dynamacally
#include<iostream>
using namespace std;
class node{
    public:
int data;
node *next;
};
int main()
{
    node *head;//jo head pointer h ye phle ko point krega
    head=new node;
    head->data=5;
    head->next=NULL;

    cout<<head->data<<endl;
    cout<<head->next<<endl;

}
