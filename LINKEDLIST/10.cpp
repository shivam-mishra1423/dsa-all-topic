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
    node *head,*tail;
    tail=head=NULL;

    for(int i=0;i<5;i++){//linked list may be not exiest
        if(head==NULL){
            head=new node(arr[i]);
            tail=head;
        }
        else{
        //linked list may be exiest
        tail->next=new node(arr[i]);
        tail=tail->next;
        }
        }

    node *print=head;
    for(int i=0;i<5;i++){
        cout<<print->data<<" ";
        print=print->next;
    }
}
