#include<iostream>
#include<vector>
using namespace std;
class node
{
public:
    int data;
    node* next;
    node(int x){
    data=x;
    next=nullptr;
    }
};
int main()
{
    node* head=nullptr;
    node* temp=nullptr;

    vector<int>arr={1,2,3,4,5};

   for(int i=0;i<arr.size();i++){
    if(head==nullptr){
        head=new node(arr[i]);
        temp=head;
    }
    else{
        temp->next=new node(arr[i]);
        temp=temp->next;
    }
   }
///delete the first node
/*
   node * d1=head;
   head=head->next;
   delete d1;


   */
   /*
   ////delete the last node
   node* prev=nullptr;
   node* curr=head;


   while(curr->next!=nullptr){
    prev=curr;
    curr=curr->next;
   }
   delete curr;
   prev->next=nullptr;

*/

   /////delete into the any position
   int z=2;
  node *start=head;
  node* back=nullptr;
   while(z--){
    back=start;
    start=start->next;
   }
   node * d2=start;
   back->next=start->next;
   delete d2;



node * print=head;

    while(print){
    cout<<print->data;
    print=print->next;


    }
}
