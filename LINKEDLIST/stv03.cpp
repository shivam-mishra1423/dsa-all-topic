//striver lecture

#include<iostream>
#include<vector>
using namespace std;
class node{
public:
int data;
node *next;
node(int value){
data=value;
next=NULL;
}
};

node * convert(vector<int>&arr){
node *head=new node(arr[0]);
node *mover=head;
for(int i=1;i<arr.size();i++){
    node *temp=new node(arr[i]);
    mover->next=temp;
    mover=temp;
}
return head;
}
//length of the linked list
int length(node *head){
int cnt=0;
node* temp=head;
while(temp)
  {
      temp=temp->next;
      cnt++;
  }
  return cnt;
}
int main()
{
   vector<int>arr={1,2,3,4,5};
   node *head=convert(arr);

    node *temp=head;
  // cout<<head->data<<" ";//printing the head element




  //printing the element
  while(temp)
  {
      cout<<temp->data <<" ";
      temp=temp->next;
  }


  cout<<endl;
  int ans=length(head);
  cout<<ans<<endl;
}
