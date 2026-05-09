#include<iostream>
using namespace std;
class node{
public:
    int data;
    node *next;
    node (int value){
    data=value;
    next=NULL;
    }
};
//usinng recursion
node *cll(int arr[], int index, int size){
//base condition
if(index==size){
    return NULL;
}
else{
    node *temp;
    temp=new node(arr[index]);
    temp->next=cll(arr,index+1,size);
}
}
int main()
{
  node *head;
  head=NULL;
  int arr[]={2,4,6,8,10};
  int index=0;
  int size=5;

  head=cll(arr,index,5);


  node *print=head;
  while(print){
    cout<<print->data<<" ";
    print=print->next;
  }

}
