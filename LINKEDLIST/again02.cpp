#include<iostream>
using namespace std;
class node{
public:
    int data;
    node *next;
    node(int x)
    {
        data=x;
        next=nullptr;
    }

};

node* create(int arr[], int index, int size)
{
    if(index==size)
    {
        return nullptr;
    }
    node * temp;
    temp=new node(arr[index]);
    temp->next=create(arr,index+1, size);
    return temp;
}


int main()
{
    int arr[]={1,2,3,4,5,6};
   node *head=nullptr;
    /*node* tail=nullptr;

    for(int i=0;i<6;i++){
        if(head==nullptr){
            head=new node(arr[i]);
            tail=head;
        }
        else{
            tail->next=new node(arr[i]);
            tail=tail->next;
        }
    }

*/
head=create(arr,0,6);


    node *temp=head;
    head=head->next;
    delete temp;
    node *print=head;
    while(print)
    {
        cout<<print->data<<" ";
        print=print->next;

    }
}
