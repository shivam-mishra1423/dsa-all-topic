#include<iostream>
using namespace std;
class node{
public:
    int data;
    node *next;
    node(int value){
    int data=value;
    next = NULL;
    }
};
node *createlinkedlist(int arr[],int index,int size){
if(index==size){
    return NULL;
}
node *temp = new node(arr[index]);
temp->next=createlinkedlist(arr,index+1,size);
return temp;
}
int main(){
node *head;
head=NULL;
int arr[]={1,2,3,4,5};
head=createlinkedlist(arr,0,5);

//deleting the starting node
if(head!=NULL){
    node *temp=head;
    head= head->next;
    delete temp;
}
//printing the element
while(head){
    cout<<head->data<<" ";
    head=head->next;
}
}
