//double linked list
#include<iostream>
using namespace std;
class node{
public:
    int data;
    node *prev;
    node *next;
    node(int value)
    {
        data=value;
        next=NULL;
        prev=NULL;
    }
};
int main()
{

  node *head=new node(1);

 node *temp=new node(2);
 head->prev=temp;
 temp->next=head;
 head= temp;

 node *temp3=new node(3);
 head->prev=temp3;
 temp3->next=head;
 head=temp3;


 node *temp4=new node(4);
 head->prev=temp4;
 temp4->next=head;
 head=temp4;

 node *print=head;
 while(print){
    cout<<print->data<<" ";
    print=print->next;
 }

}
