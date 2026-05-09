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
int main()
{
    vector<int>v={1,2,3,4,5};

    node *head=convert(v);

}
