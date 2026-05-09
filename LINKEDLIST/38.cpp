#include<iostream>
using namespace std;
class node{
    public:
int data;
node* next;
node(int value){
data=value;
next=nullptr;
}
};
void print(node* head){

if(head==nullptr){
    return;
}
cout<<head->data<<" ";
print(head->next);

}


// Recursive function to insert a new node at the end
node* insertAtEnd(node* head, int value) {
    // Base case: if the list is empty, create a new node
    if (head == nullptr) {
        return new node(value);
    }

    // Recursive case: traverse to the end of the list
    head->next = insertAtEnd(head->next, value);
    return head; // Return the unchanged head pointer
}

int main()
{
     node* head = nullptr; // Start with an empty linked list
    int n;

    cout << "Enter the number of elements to insert: ";
    cin >> n; // Get the number of elements from the user

    // Loop to get user input and insert into linked list
    for (int i = 0; i < n; i++) {
        int value;
        cout << "Enter value " << (i + 1) << ": ";
        cin >> value; // Get each value from the user
        head = insertAtEnd(head, value); // Insert into the linked list
    }

    // Print the final linked list
    cout << "The linked list is: ";
    print(head); // Output the linked list
}
