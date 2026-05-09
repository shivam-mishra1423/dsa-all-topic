#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
    node(int x){
    data=x;
    next=nullptr;
    }


};


void print(node* head){
if(head==nullptr){

    return;
}
cout<<head->data<<" ";
print(head->next);

}

void first(node* head){

if(head!=nullptr){
    node* temp=head;
    head=head->next;
    delete temp;
}

}
int main()
{
    node* head;
    head=nullptr;


    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        if(head==nullptr){
            head=new node(arr[i]);
        }
        else{
            node* temp=new node(arr[i]);
            temp->next=head;
            head=temp;
        }
    }
    first(head);
print(head);

}
