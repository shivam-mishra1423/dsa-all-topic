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

int i=0;
while(i<5){
    cout<<head->data<<" ";
    head=head->next;
    i++;
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
int main()
{
    int arr[]={1,2,3,4,5};

    node* head=nullptr;
   head=insertstart(arr,5);
    print(head);

    cout<<endl;
    insertst(arr,5,head);
    print(head);

}
