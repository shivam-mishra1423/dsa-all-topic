#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
    node(int value)
    {
        data = value;
        next=nullptr;
    }

};

///insert at start
void insertstart(node* head,int arr[]){

    node *temp;
for(int i=0;i<5;i++){
    if(temp==nullptr){
        temp=new node(arr[i]);
        temp->next=head;
    }
    else{
        temp =new node(arr[i]);
        temp->next=head;
    }
}



}

////printitng
void printing(node* head){

while(head!=nullptr){
    cout<<head->data<<" ";
    head=head->next;
}

}
int main()
{
   node *head;
   int arr[]={1,2,3,4,5};

   insertstart(head,arr);

   print(head);
}
