//insert at any place
#include<iostream>
using namespace std;
class node{
public:
    int data;
    node *next;
};
int  main()
{
    node *head,*temp;
    head=NULL;
    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        if(head==NULL){
            head=new node;
            head->data=arr[i];
            head->next=NULL;
            temp=head;
        }
        else{
            node *newNode = new node;
            newNode->data = arr[i];
            newNode->next = NULL;
            temp->next = newNode;
            temp = newNode;
        }
    }
        int x=3;
        int value=30;
        temp=head;
        x--;

        while(x--)
        {
            temp=temp->next;
        }

        //insert the element in middle
        node *temp2=new node;
        temp2->data=value;
        temp2->next=temp->next;
        temp->next=temp2;

    //printing the data
    node *print;
    print=head;
    for(int i=0;i<5;i++){
        cout<<print->data<<" ";
        print=print->next;
    }


}
