//one by one insert at end
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
    head->data=5;
    head->next=NULL;

    node *temp;
    temp=new node;
    temp->data=6;
    head->next=temp;
    temp->next=NULL;

    node *temp2=temp;
    temp2=new node;
    temp2->data=7;
    temp2->next=NULL;
    temp->next=temp2;

    node *print;
    print=head;
    while(print){
        cout<<print->data<<" ";
        print=print->next;
    }
}
