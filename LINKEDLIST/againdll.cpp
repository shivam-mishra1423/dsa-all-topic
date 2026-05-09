#include<iostream>
#include<vector>
using namespace std;
class node{
public:
   int data;
   node* front;
   node* back;
   node(int x){
   data=x;
   front=nullptr;
   back=nullptr;

   }



};
int main()
{


node* head=nullptr;

node* prev=nullptr;
vector<int>arr={1,2,3,4,5};

for(int i=0;i<arr.size();i++){
    if(head==nullptr){
        head=new node(arr[i]);
        prev=head;

    }
    else{
        node* temp=new node(arr[i]);
        prev->back=temp;
       temp->front=prev;
       prev=temp;
    }
}


node* start=nullptr;
node* curr=head;

while(curr->back!=nullptr){
    start=curr;
    curr=curr->back;
}
start->back=nullptr;
delete curr;


   node *print=head;
   while(print){
    cout<<print->data<<" ";
    print=print->back;
   }
}
