#include<iostream>
#include<vector>
using namespace std;
struct node{
public:
    int data;
    node *next;

public:
    node(int data1, node *next1){//constructor to initilised the value
    data=data1;
    next=nullptr;
    }

node* covertarr2ll(const vector<int>&arr){//his return type is pointer its return the head
    if(arr.empty()) return nullptr;
    node *head=new node(arr[0]);
    node* mover=head;
    for(int i=1;i<arr.size();i++){
        node * temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
};
int main()
{
    vector<int>arr ={2,5,8,7};
   node* head = convertarr2ll(arr);
   cout<<head->data;
}
