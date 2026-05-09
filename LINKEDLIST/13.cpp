//insertion at start
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
    node *head;
    head=NULL;
    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        if(head==NULL){
            head=new node(arr[i]);
        }
        else{
            node *temp=new node(arr[i]);
            temp->next=head;
            head=temp;
        }
    }

    node *print;
    print=head;
    while(print){
        cout<<print->data<<" ";
        print=print->next;
    }

}
