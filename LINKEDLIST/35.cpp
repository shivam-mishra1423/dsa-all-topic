#include<iostream>
using namespace std;
class node{
public:
    int data;
    node *prev;
    node *next;
    node(int value){
    data=value;
    prev=nullptr;
    next=nullptr;
    }
};
int main()
{
 node *head;
 head=nullptr;

 int arr[]={1,2,3,4,5};
 for(int i=0;i<5;i++){
    if(head==nullptr){
        head=new node(arr[i]);
    }
    else{
        node *temp;
        temp=new node(arr[i]);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
 }

 ////////////////insert any position

 int pos=2;

 if(pos==0){
    if(head==nullptr){
        head=new node(5);
    }
 }
 /////support linkedlist be exiest
 node *tail=new node(5);
 tail->next=head;
 head->->prev=temp;
 head=temp;

 else{
    while(--pos){
        curr=curr->next;
    }
 }

    node *print=head;
    while(print){
        cout<<print->data<<" ";
        print=print->next;
    }
}
