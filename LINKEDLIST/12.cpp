#include<iostream>
using namespace std;
class node{
public:
    int data;
    node *next;
};
int main()
{
    node *head;
    head=new node;
    head->data=1;
    head->next=NULL;

    node *temp;
    temp=new node;
    temp->data=2;
    temp->next=head;
    head=temp;


    node *temp1;
    temp1=new node;
    temp1->data=3;
    temp1->next=head;
    head=temp1;

    node *temp2;
    temp2=new node;
    temp2->data=4;
    temp2->next=head;
    head=temp2;


    node *print=head;
    while(print){
        cout<<print->data<<" ";
        print=print->next;
    }
}
