#include<iostream>
#include<vector>
using namespace std;
class node{
public:
    int data;
    node *next;

};
////insert at end
node *convert(vector<int>&arr){
node *head=new node;
head->data=arr[0];
head->next=nullptr;

node *tail;
tail=head;
for(int i=1;i<5;i++){
    node *temp=new node;
    temp->data=arr[i];
    temp->next=nullptr;
    tail->next=temp;
    tail=temp;
}
return head;
}


/////insert at start
node *start(vector<int>arr){
node *head=new node;
head->data=arr[0];
head->next=nullptr;
for(int i=1;i<5;i++){
    node *temp=new node;
    temp->data=arr[i];
    temp->next=head;
    head=temp;
}
return head;
}

////////////insert at any place
node *insert(vector<int>&v , int x,int value){
node *head, *tail;
if(head==nullptr){
    if(x==0){
        head=new node;
        head->data=v[value];
        head->next=nullptr;
    }
    if(x==1){
        node *temp=new node;
        temp->data=v[value];
        temp->next=nullptr;
        tail->next=temp;
        tail=temp;
    }
    //support x =2
    while(x--){
        tail=tail->next;
    }
    node *temp2=new node;
    temp2->data=v[value];
    tail->next=temp2;
    temp2->next=tail->next;
    tail=temp2;
}
return head;
}
int main()
{

 vector<int>arr={1,2,3,4,5};
   node *head;
  // head=start(arr);


   head=insert(arr,2,5);
    node *print=head;
    while(print){
        cout<<print->data<<" ";
        print=print->next;
    }
}
