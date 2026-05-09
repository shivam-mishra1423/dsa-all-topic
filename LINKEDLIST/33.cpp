#include<iostream>
using namespace std;
class node{
    public:
int data;
node *next;

node(int value)
{
    data=value;
    next=nullptr;
}
};
int main()
{


int arr[]={1,2,3,4,5,6};
node* head;

head=new node(arr[0]);
node *tail=head;

for(int i=1;i<6;i++){
    node *temp=new node(arr[i]);
    tail->next=temp;
    tail=temp;
}



node *temp=head;
int x=2;
int v=5;
while(x--){
    temp=temp->next;
}

node *temp2=new node(v);
temp2->next=temp->next;
temp->next=temp2;



node *d=head;
head=head->next;
delete d;
node *print=head;
while(print){
    cout<<print->data<<" ";
    print=print->next;
}
}
