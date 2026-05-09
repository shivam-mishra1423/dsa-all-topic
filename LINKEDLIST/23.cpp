//insert at end;
#include<iostream>
using namespace std;
class node{
public:
    int data;
    node *prev, *next;
    node(int value){
    data=value;
    prev=next=NULL;
    }
};
int main()
{
    node *head,*tail;
    head=tail=NULL;
    int arr[]={1,2,3,4,5};

    for(int i=0;i<5;i++){
        if(head==NULL){
            head=new node(arr[i]);
            tail=head;
        }
        else{
            while(tail->next!=nullptr){
                tail=tail->next;
            }
            node *temp;
            temp=new node(arr[i]);
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
    }



   //////////////printing the element////////////////////
     node *print=head;
     while(print){
        cout<<print->data<<" ";
        print=print->next;
     }
}
