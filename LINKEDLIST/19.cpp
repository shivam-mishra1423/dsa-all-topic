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

    //deleting the first index element
    if(head!=NULL){
        node *temp=head;
        head=head->next;
        delete temp;
    }



    node *print=head;
    for(int i=0;i<5;i++){
        cout<<print->data<<" ";
        print=print->next;
    }

}
