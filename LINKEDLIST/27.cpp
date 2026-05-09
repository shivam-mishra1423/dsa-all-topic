#include<iostream>
#include<vector>
using namespace std;
///////this is self define data type
class node{
    public:
int data;
node *next;
    node(int value){
    data=value;
    next = nullptr;
    }
};
//////insert at end and conver the array into linkedlist
node *convert(vector<int>& arr){
node *head= new node(arr[0]);
node * mover = head;
for(int i=1;i<arr.size();i++){
    node *temp=new node(arr[i]);
    mover->next=temp;
    mover = temp;
}
return head;
}

///printing the value
void print(node *head){
 node *print=head;
    while(print){
        cout<<print->data<<" ";
        print=print->next;
    }
}
int main()
{
    vector<int>arr ={12,5,8,7};
    node *head=convert(arr);

    print(head);
}
