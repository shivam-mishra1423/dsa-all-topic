#include<iostream>
using namespace std;
class node{
public:
    int data;
    node *next;
};
int main()
{
int arr[]={1,2,3,4,5};

node *head;
head->data=arr[0];
head=nullptr;

node *temp=head;
node *arr1=new node;
arr1->data=arr[1];
arr1->next=nullptr;
temp->next=arr1;
temp=arr1;

node *arr2=new node;
arr2->data=arr[2];
arr2->next=nullptr;
temp->next=arr2;
temp=arr2;

node *arr3=new node;
arr3->data=arr[3];
arr3->next=nullptr;
temp->next=arr3;
temp=arr3;

node *arr4=new node;
arr4->data=arr[4];
arr4->next=nullptr;
temp->next=arr4;
temp=arr4;


    node *print=head;
    while(print){
        cout<<print->data<<" ";
        print=print->next;
    }
}




