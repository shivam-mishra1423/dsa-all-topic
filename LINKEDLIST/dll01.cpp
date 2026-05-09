#include<iostream>
#include<vector>
using namespace std;
class node{
public:
    int data;
    node *next;
    node *back;;

public:///this is the first constructor
    node(int data1, node *next1, node * back1)
    {
        data=data1;
        next = next1;
        back = back1;
    }
public:
    node(int data1){
    data=data1;
    next = nullptr;
    back = nullptr;
    }
};

node *cnvaar2dll(vector<int>&arr)//////head ko return krnge
{
  node *head   = new node(arr[0]);
    node *prev  = head;
    for(int i=1;i<arr.size();i++){
        node *temp = new node(arr[i], nullptr , prev);
        prev->next = temp;
        prev=temp;
    }
    return head;
}


/////printing the element
void print(node *head)
{
    node *print=head;
    while(print){
        cout<<print->data<<" ";
        print=print->next;
    }
}
int main()
{
    vector<int> arr ={12, 5, 8, 7};
    node* head = cnvaar2dll(arr);
    print(head);
    return 0;
}
