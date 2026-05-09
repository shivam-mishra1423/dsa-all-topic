 #include<iostream>
 using namespace std;
 class node{
 public:
     node* prev;
     node* next;
     int data;

     node(int x){
     data=x;
     next=nullptr;
     prev=nullptr;
     }
 };
 int main()
 {
     node* head=nullptr;

     int arr[]={1,2,3,4,5,6};


     for(int i=0;i<6;i++){
        if(head==nullptr){
            head=new node(arr[i]);
        }
        else{
            node* temp;
            temp=new node(arr[i]);
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
     }

     node* print=head;
     while(print){
        cout<<print->data<<" ";
        print=print->next;
     }

 }
