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
void print(node* head){


while(head){
    cout<<head->data<<" ";
    head=head->next;
}
}
node* cll(int arr[],int index,int size)
{
    if(index==size){
        return nullptr;
    }
    node* temp=new node(arr[index]);
    temp->next=cll(arr,index+1,size);

    return temp;
}
int main()
{
    int arr[]={1,2,3,4,5};

   node *head=cll(arr,0,5);
   print(head);
}
