#include<iostream>
using namespace std;
class  node{
    public:
    int data;
    node *next;
}
int main(){

int arr[]={1,2,3,4,5};

node *head=new node;
head->data=arr[0];
head->next=nullptr;

node *temp=head;

for (int i=0;i<4; i++) {
temp->next=new node;
temp->next->data=arr[i];
temp->next=nullptr;
temp=temp->next;
}


node *print=head;
while (print){
cout<<print->data;
print=print->next;
}

}
