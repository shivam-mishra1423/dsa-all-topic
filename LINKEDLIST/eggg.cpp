
#include<iostream>
using namespace std;

class node{

public:
    int data;
    node *next;
    node(int value){
    data =value;
    next=nullptr;
    }
};
int main()
{
    node *head=new node(1);
   node *temp=new node(2);
   head->next=temp;

    node *temp2=new node(3);
    temp->next=temp2;


    node *temp3=new node(4);
    temp2->next=temp3;



node *print=head;
while(print){
    cout<<print->data;
    print=print->next;
}

}
