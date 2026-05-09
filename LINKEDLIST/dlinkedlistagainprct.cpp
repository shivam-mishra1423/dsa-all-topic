#include<iostream>
using namespace std;
class node{
    public:
int data;
node* next;
node* prev;

node(int x)
{
    data=x;
    next=nullptr;
    prev=nullptr;
}

};
int main()
{


    node *temp= new node(5);

    node* t1=new node(6);
    t1->prev=temp;
    temp->next=t1;


    node* t2=new node(7);
    t2->prev=t1;
    t1->next=t2;

    node* t3=new node(8);
    t3->prev=t2;
    t2->next=t3;




    node* print=temp;
    while(print)
    {
        cout<<print->data<<" ";
        print=print->next;
    }
}
