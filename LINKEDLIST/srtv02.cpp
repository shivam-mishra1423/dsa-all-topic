//convert the array into lindedlist
//search the element in the linked list
//count the total number of the node
#include<iostream>
#include<vector>
using namespace std;
class node{
public:
    int data;
    node *next;

public:
    node(int data1, node *next1){
        data=data1;
        next=next1;
    }
public:
    node(int data1){
    data=data1;
    next=nullptr;
    }
};
node* convertArr2ll(vector<int>&arr){//return head
    node* head= new node(arr[0]);
    node* mover = head;
    for(int i=1;i<arr.size();i++){
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover=temp;
    }
    return head;
}
int lenth(node *head){
int count=0;
node *temp=head;
//travese
while(temp){
    temp=temp->next;
    count++;

}
  return count;

}
bool check(node *head,int key){
node *temp=head;
//travese
while(temp){
        if(temp->data==key){
            return 1;
        temp=temp->next;
        }
}
return 0;
}
int main()
{
   vector<int>arr = {12,5,8,7};
   node* head=convertArr2ll(arr);
  node *temp=head;
  for(int i=0;i<arr.size();i++){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
 // cout<<lenth(head)<<endl;
  cout<<check(head,8);
}
