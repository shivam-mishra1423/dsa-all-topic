#include<iostream>
using namespace std;
class node{
public:
    node* prev;
    int data;
    node* next;

    node(int x){
    data=x;
    prev=next=nullptr;
    }

};
int main()
{
   node* head=nullptr;
   node* tail=nullptr;

   int arr[]={1,2,3,4,5,6};
   for(int i=0;i<6;i++){
    if(head==nullptr){
        head=new node(arr[i]);
        tail=head;
    }
    else{
        node* temp=new node(arr[i]);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
   }

   node* print=head;
   while(print){
    cout<<print->data<<" ";
    print=print->next;
   }
}
