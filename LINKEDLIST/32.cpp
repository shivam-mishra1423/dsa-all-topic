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

node* createll(int arr[],int index,int size){
//base case
if(index==size){
    return nullptr;
}
else{
    node *temp;
    temp=new node(arr[index]);
    temp->next=createll(arr,index+1,size);
    return tem
}

}
int main()
{



    node *print=head;
    while(print){
        cout<<print->data<<" ";
        print=print->next;
    }
}
