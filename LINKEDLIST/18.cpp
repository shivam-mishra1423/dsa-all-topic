//double linked list
#include<iostream>
using namespace std;
class node{
    public:
int data;
node *prev ,*next;
node(int value){//constructor
data=value;
*prev, *next=NULL;
}
};
int main()
{
   node *head=new node(1);
   head->prev=NULL;
   head->next=NULL;


   node *t2=new node(2);
   t2->prev=head;
   t2->next=NULL;
   head->next=t2;


   node *t3 =new node(3);
   t3->next=NULL;
   t3->prev=t2;
   t2->next=t3;


   node *print=head;
   for(int i=0;i<3;i++){
    cout<<print->data<<" ";
    print=print->next;
   }
}
