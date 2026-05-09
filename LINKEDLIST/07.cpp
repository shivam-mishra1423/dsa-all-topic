#include<iostream>
using namespace std;
class node{
public:
    int data;
    node *next;
};
int main()
{
    //allocate memeory
    node *head=new node;
    head->data=5;
    head->next=NULL;


    //create second node
    node *head2=new node;
    head2->data=6;
    head2->next=NULL;
    head->next=head2;

    //create third node
    node *head3=new node;
    head3->data=7;
    head3->next=NULL;
    head2->next=head3;

    //create forth node
    node *head4=new node;
    head4->data=8;
    head4->next=NULL;
    head3->next=head4;

    node *print;
    print=head;
    while(print){
        cout<<print->data<<" ";
        print=print->next;
    }
}
