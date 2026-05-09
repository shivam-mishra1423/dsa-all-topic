#include<iostream>
using namespace std;
class node{
public:
    node* next;
    int data;


    node(int x){
    data=x;
    next=nullptr;
    }

};
int main()
{

int arr[]={1,2,3,4,5};

node* head=nullptr;

for(int i=0;i<5;i++){
    if(head==nullptr){
        head=new node(arr[i]);
    }
    else{
       head->next=new node(arr[i]);
       head=head->next;
    }
}

   node* print=head;
   while(print!=nullptr){
    cout<<print->data<<" ";
    print=print->next;
   }

}
