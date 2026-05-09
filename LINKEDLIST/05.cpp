//insert at start with constructor
#include<iostream>
using namespace std;
class node{
public:
    int data;
    node *next;
    node(int value)//instilised the value with constructor
    {
        data=value;
        next=NULL;
    }
};
int main()
{

    //node 1
    node *head;
    //head=NULL;
    head=new node(5);
    head->next=NULL;

    //node 2
    node *temp=new node(6);
    temp->next=head;
    head=temp;

    //node 3
    node *temp1=new node(7);
    temp1->next=head;
    head=temp1;
//node 4
    node *temp2=new node(8);
    temp2->next=head;
    head=temp2;


    //printing the linkedlist
    node *print;
    print=head;
    while(print){
        cout<<print->data<<endl;
        print=print->next;
    }


    //after printing the element the free the memory
    //free the allocated memory
    while(head){
        node *temp=head;
        head=head->next;
        delete temp;
    }

    //output 8,7,6,5 because inert the element at start
    //t-comp worst case = o(n)

}

