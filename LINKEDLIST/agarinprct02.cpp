#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
    node(int x){//constructor
    data=x;
    next=nullptr;
    }
};

void print(node* print)
{
    while(print){
        cout<<print->data;
        print=print->next;
    }
}

//////insert at start
void insertstart(node*& head, int arr[]){

for(int i=0;i<6;i++){
    if(head==nullptr){
        head=new node(arr[i]);
    }
    else{
        node *temp=new node(arr[i]);
        temp->next=head;
        head=temp;
    }
}


}
int main()
{

   node *head=nullptr;
   head=nullptr;
   int arr[]={1,2,3,4,5,6};
insertstart(head,arr);
print(head);


}
