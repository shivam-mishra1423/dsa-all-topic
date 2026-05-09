//insert the element
//or convert array into linked list
#include<iostream>
using namespace std;
class node{
public:
    int data;
    node *next;
};
int main()
{
    node *head;
    head=NULL;
    int arr[]={1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        if(head==NULL){//if node is not  create
            head=new node;
            head->data=arr[i];
            head->next=NULL;
        }
        else{//if node is created
            node *temp;
            temp=new node;
            temp->data=arr[i];
            temp->next=head;
            head=temp;
        }
    }

    //printing the array
    node *print;//ye print pointer data ko  print karyga
    print=head;//initially jise head point kr raha hai usse he head v point kara raha hai
    while(print){
        cout<<print->data<<" ";
        print=print->next;
    }

    //deleting the alement
    while(head){
        node *temp=head;
        head=head->next;
        delete temp;
    }
}
