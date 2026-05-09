#include<iostream>
using namespace std;
class node{
public:
    int data;
    node*next=NULL;
node(int value){
data=value;
}

node *createll(int arr[],int index,int size){
if(index==size){
    return nullptr;
}
node *temp;
temp=new node(arr[index]);
temp->next=createll(arr,index+1,size);
return temp;
}
};
int main()
{

    int cnt=0;
    node *head,*tail;
    tail=head=nullptr;
    int arr[]={1,2,3,4,5};

    head=createll(arr,0,5);

    /*
    for(int i=0;i<5;i++){
        if(head==NULL){
            head=new node();
            head->data=arr[i];
            tail=head;
        }
        else{
       tail->next=new node();
       tail->next->data=arr[i];
       tail=tail->next;
    }
    }
    */
    node *print=head;
    while(print)
    {
        cnt++;
        cout<<print->data<<" ";
        print=print->next;
    }

    cout<<endl;
    cout<<cnt<<endl;
}
