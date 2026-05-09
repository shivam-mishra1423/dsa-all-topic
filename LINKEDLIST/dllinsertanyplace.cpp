/////insert any place
#include<iostream>
using namespace std;
class node{
public:
    int data;
    node *prev,*next;
    node(int value){
    data=value;
    prev=next=NULL;
    }
};


//create linked list
node *createdll(int arr[],int index,int size,node *back){
//base case
if(index==size){
    return NULL;
}
//node create karo
node *temp= new node(arr[index]);
temp->prev = back;
temp->next =createdll(arr,index+1,size,temp);
return temp;

}
int main()
{
   node *head;
 //create doubly linked list
    int arr[]={1,2,3,4,5};

    head=createdll(arr,0,5,NULL);//head ka address return me dega

   //insert at start
   int pos=1;
   if(pos==0){
    //agar linkedlist exiest na kare
    if(head==NULL){
        head=new node(5);
    }
   //linked list exiest kare
   node *temp=new node(5);
   temp->next=head;
   head->prev=temp;
   head=temp;
   }
   else{
    ////insert at end ya middle to sabse phale uss node pe jynge
    node *curr=head;
    ///go to node after which i have node to insert
    while(--pos){
        curr=curr->next;
    }
    if(curr->next==NULL){
        node *temp=new node(5);
        temp->prev=curr;
        curr->next=temp;
        }
        else{//insert at middle
                node *temp=new node(5);
                temp->next=curr->next;
                temp->prev=curr;
                curr->next=temp;
                temp->next->prev=temp;

        }
   }

   node *print=head;
   while(print){
    cout<<print->data<<" ";
    print=print->next;
   }
}

