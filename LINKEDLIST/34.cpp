#include<iostream>
using namespace std;
class node{
    public:
int data;
node *next;

node(int value)
{
    data=value;
    next=nullptr;
}
};


///printing the data
void print(node *head)
{
    node *print=head;
    while(print){
        cout<<print->data<<" ";
        print=print->next;
    }
}
//////////creating the linkedlide

node* createll(int arr[], int index, int size){
/////base
if(index==size){
    return nullptr;
}
node *temp;
temp=new node(arr[index]);
temp->next=createll(arr,index+1,size);
return temp;
}

node* deletef(node *head) {
    if (head == nullptr){
      return nullptr;  // Handle the case when the list is empty
    }

    node *n1 = head;       // Store the current head
    head = head->next;     // Move head to the next node
    delete n1;             // Delete the old head node
    return head;           // Return the new head of the list
}

/////////////////////////////delete the lsat node

node* deketelast(node *head)
{


    if(head==nullptr){
        return nullptr;
    }

    if(head->next== nullptr){
        delete head;
        return nullptr;
    }
           node *prev=nullptr;
           node *curr=head;
           while(curr->next!=nullptr){
            prev=curr;
            curr=curr->next;
           }
          delete curr; // Delete the last node
    if (prev != nullptr) {
        prev->next = nullptr; // Set the previous node's next to nullptr
    }

    return head;
}


// Function to delete a node at a particular position
node* deletepar(node *head, int x) {
    if (x < 0) {
        cout << "Invalid position" << endl;
        return head; // Invalid position
    }

    if (x == 0) {
        return deletef(head); // Special case: delete first node
    }

    node *curr = head;
    node *prev = nullptr;
    int index = 0;

    // Traverse the list to find the node at position x
    while (curr != nullptr && index < x) {
        prev = curr;
        curr = curr->next;
        index++;
    }

    if (curr == nullptr) {
        cout << "Position out of bounds" << endl;
        return head; // Position is out of bounds
    }

    prev->next = curr->next;
    delete curr;

    return head;
}
int main()
{
    node *head;
    head=nullptr;

    int arr[]={1,2,3,4,5};

    head=createll(arr,0,5);

    /////////////before deletion the ll
  print(head);


  ////////after first node is delete
  cout<<endl;
  head=deletef(head);

  cout<<"after first node is delete "<<endl;
   print(head);


   cout<<endl;
   cout<<"after deleting the last node"<<endl;
   head=deketelast(head);

      print(head);



      cout<<endl;
      int x;
      cout<<"enter the value of x"<<endl;
      cin>>x;
      deletepar(head,x);
       print(head);

}
