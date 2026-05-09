#include<iostream>
using namespace std;
class node{
public:
    int data;
    node * next;
    node(int x){
    data=x;
    next=nullptr;
    }

};
int main()
{
    int arr[]={1,2,3,4,5,6};


    node* head=nullptr;
    node* tail=nullptr;

    for(int i=0;i<6;i++){
        if(head==nullptr){
            head=new node(arr[i]);
            tail=head;
        }
        else{
            tail->next=new node(arr[i]);
            tail=tail->next;
        }
    }

    ///delete first node

    if(head!=nullptr){
        node* temp=head;
        head=head->next;
        delete head;
    }

    node* print=head;
    while(print){
        cout<<print->data<<" ";
        print=print->next;
    }
}
