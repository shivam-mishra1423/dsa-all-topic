/////////////deleting the first index
#include<iostream>
#include<vector>
using namespace std;
///////this is self define data type
class node{
    public:
int data;
node *next;
    node(int value){
    data=value;
    next = nullptr;
    }
};
//////insert at end and conver the array into linkedlist
node *convert(vector<int>& arr){
node *head= new node(arr[0]);
node * mover = head;
for(int i=1;i<arr.size();i++){
    node *temp=new node(arr[i]);
    mover->next=temp;
    mover = temp;
}
return head;
}

///printing the value
void print(node *head){
 node *print=head;
    while(print){
        cout<<print->data<<" ";
        print=print->next;
    }
}


////////delete the head
node *removeh(node *head){
if(head==nullptr){
    return nullptr;
}
node *temp=head;
head=head->next;
delete temp;
return head;
}

/////////delete the last node
node *deletelst(node *head){


    //edge case
if(head==nullptr  || head->next==nullptr){
    return nullptr;
}
    node *temp=head;
    while(temp->next->next != nullptr){
        temp=temp->next;
    }
temp->next=nullptr;
return head;
}

//////delete the k place in the linked list
node *deletek(node *head, int k){
//edge case 1
if(head==nullptr){
    return nullptr;
}
//edge case 2  support we delete second index element
if(k==1){
    node *temp = head;
    head=head->next;
    delete temp;
    return head;
}

int cnt=0;
node *temp=head;
node* prev=nullptr;

while(temp!=nullptr){
    cnt++;
    if(cnt==k){
        prev->next=prev->next->next;
        delete temp;
        break;
    }
    prev=temp;
    temp=temp->next;
}
return head;
}

////////////////////////////////update version of above
node *deleteele(node *head, int el){
//edge case 1
if(head==nullptr){
    return nullptr;
}
//edge case 2  support we delete second index element
if(head->data == el){
    node *temp = head;
    head=head->next;
    delete temp;
    return head;
}

node *temp=head;
node* prev=nullptr;

while(temp!=nullptr){
if(temp->data == el){
        prev->next=prev->next->next;
        delete temp;
        break;
    }
    prev=temp;
    temp=temp->next;
}
return head;
}
////////////////////////////////
int main()
{
    vector<int>arr ={12,5,8,7};
    node *head=convert(arr);
   // head=removeh(head);

  //  deletelst(head);///calling for delete last element
     //  print(head);///print the element




     deleteele(head,12);//first index remove 12 is not proper working
     print(head);
}

