#include<iostream>
using namespace std;
class node{
public:
    int data;
    node *prev,*next;
    node(int value)
    {
        data=value;
        prev=next=nullptr;
    }
};
int main()
{
    node *head,*tail;
    tail=head=NULL;

    head=new node(1);
    tail=head;


    tail->next=new node(2);
    head->next=tail;
    tail->prev=head;
    tail->next=NULL;




    node *print=head;
    while(print){
        cout<<print->data<<" ";
        print=print->next;
    }
}
