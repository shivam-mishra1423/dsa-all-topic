#include<iostream>
using namespace std;
class node{
public:
    int data;
    node *prev, *next;
    node(int value){
    data=value;
    next=prev=NULL;
    }
};
int main()
{
    node *head=NULL;
    int arr[]={1,2,3,4,5};

    for(int i=0;i<5;i++){
        if(head==NULL){
            head=new node(arr[i]);
        }
        else{
            node *temp;
            temp=new node(arr[i]);
           head->prev=temp;
           temp->next=head;
           head=temp;
        }
    }


    node *print=head;
    while(print){
        cout<<print->data<<" ";
        print=print->next;
    }

}
