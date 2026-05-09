//three way to insert the data

//1 insert in the start
//2 inser in the end
//3 insert at any place
#include<iostream>
using namespace std;
class node{
public:
    int data;
    node *next;
};
int main()
{

    //node 1
    node *head;
    //head=NULL;
    head=new node;
    head->data=5;
    head->next=NULL;

    //node 2
    node *temp=new node;
    temp->data=6;
    temp->next=head;
    head=temp;

    //node 3
    node *temp1=new node;
    temp1->data=7;
    temp1->next=head;
    head=temp1;
//node 4
    node *temp2=new node;
    temp2->data=8;
    temp2->next=head;
    head=temp2;


    //printing the linkedlist
    node *print;
    print=head;
    while(print){
        cout<<print->data<<endl;
        print=print->next;
    }

    //output 8,7,6,5 because inert the element at start
    //t-comp worst case = o(n)

}
