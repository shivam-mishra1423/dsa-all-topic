//insert the element at end
#include<iostream>
using namespace std;
class node{
public:
    int data;
    node *next;
};
int main()
{
  node *head,*temp;
  head=temp=NULL;
  int arr[]={1,2,3,4,5};
  for(int i=0;i<5;i++){
    if(head==NULL){
        head=new node;
        head->data=arr[i];
        head->next=NULL;
        temp=head;
    }
    temp->next=new node;
    temp = temp->next;
    temp->data=arr[i];
    temp->next=NULL;
  }
    node *print;
    print=head;
    while(print){
        cout<<print->data<<" ";
        print=print->next;
    }
}
