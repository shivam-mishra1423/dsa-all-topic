//initilised the value with constructor
#include<iostream>
using namespace std;
class node{
public:
    int data;
    node *next;
    node(int value){//create the constructor to initilised the value
     data=value;
     next=NULL;
    }
};
int main()
{
    node *head=new node(5);

    cout<<head->data<<endl;
    cout<<head->next<<endl;

}
