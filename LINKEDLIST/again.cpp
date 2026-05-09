#include<iostream>
using namespace std;
class node{
public:
    int data;
    node *next;
    node(int value){
    data=value;
    next=nullptr;
    }

};
int main()
{

   node* head=nullptr;
   int arr[]={1,2,3,4,5};

   for(int i=0;i<5;i++)
   {
       if(head==nullptr)
       {
           head=new node(arr[i]);
       }
       else{
        node* tail=head;
        while(tail->next!=nullptr){
            tail=tail->next;
        }
        tail->next=new node(arr[i]);
       }
   }

    node* print=head;
    while(print)
    {
        cout<<print->data<<" ";
        print=print->next;
    }
}
