#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* prev;
    node* next;

    node(int value)
    {
        data=value;
        prev=nullptr;
        next=nullptr;
    }

};
int  main()
{
   int arr[]={1,2,3,4,5};

   node* head=nullptr;
   node* tail=nullptr;

  for(int i=0;i<5;i++){
    if(head==nullptr){
        head=new node(arr[i]);
       tail=head;
    }
    else{
        node* temp=new node(arr[i]);
      temp->prev=temp;
        tail->next=temp;
        tail=temp;
    }
  }
    node* print=head;
    while(print){
        cout<<print->data<<" ";
        print=print->next;
    }

}
