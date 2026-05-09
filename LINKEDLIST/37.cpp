#include<iostream>
using namespace std;
class node{
    public:
int data;
node* next;
node(int value){
data=value;
next=nullptr;
}
};

////printing the data
void print(node* head){


while(head){
    cout<<head->data<<" ";
    head=head->next;
}
}

///insert at start
node* insertstart(int arr[],int size){
node *head=nullptr;
int i=0;
while(i<size){
    node* temp=new node(arr[i]);
    temp->next=head;
    head=temp;
    i++;
}
////after inserting all the element
return head;///return new head
}

//////agar by refrence passed karte hai to
void insertst(int arr[],int size,node* &head){

int i=0;
while(i<size){
    node* temp=new node(arr[i]);
    temp->next=head;
    head=temp;
    i++;
}
}

////insert at end
void insertend(int arr[],int size, node *&head){

node* mover;
for(int i=0;i<size;i++){
if(head==nullptr){
    head=new node(arr[i]);
}
else{
    node *temp=new node(arr[i]);
    node* mover=head;

    while(mover->next!=nullptr){
        mover=mover->next;
    }
    mover->next=temp;
}
}
}

node *insertst(int arr[],int size){
node *head=nullptr;
head=new node(arr[0]);
node* mover=head;
for(int i=1;i<size;i++){
    node* temp=new node(arr[i]);
    mover->next=temp;
    mover=temp;
}
return head;
}

void anyplace(node *head,int arr[], int value){

node* mover=head;
int x=2;
while(x--){
    mover=mover->next;
}
node *temp=new node(arr[value]);
temp->next=mover->next;
mover->next=temp;
}

int main()
{
    int arr[]={1,2,3,4,5};


   //head=insertstart(arr,5);

   //insertend(arr,5,head);
   node* head=insertst(arr,5);
  // print(head);


   int value=10;
   anyplace(head,arr,value);
    print(head);

}

