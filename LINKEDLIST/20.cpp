//remark not complete

#include<iostream>
using namespace std;
class node{
    public:
int data;
node *next;
node(int value){
data=value;
next=NULL;
}
};
int main()
{
    int arr[]={1,2,3,4,5};
    node *head;
    node *tail;
    tail=head=NULL;
    for(int i=0;i<5;i++){
        if(head==NULL){
            head=new node(arr[i]);
            tail=head;
        }
        else{
            while(tail->next!=NULL){
                tail=tail->next;
            }
            node *temp=new node(arr[i]);
            tail->next=temp;
            tail=temp;
        }
    }



    //deleting the starting node
   if(head->next=NULL){
    delete head;
    head=NULL;
   }
   else{
    node *curr=head;
    node *prev=NULL;
    while(curr->next!=NULL){
        prev=curr;
        curr=curr->next;
    }
    prev->next=NULL;
    delete curr;
   }




    node *print=head;
    for(int i=0;i<5;i++){
        cout<<print->data<<" ";
        print=print->next;
    }

}
