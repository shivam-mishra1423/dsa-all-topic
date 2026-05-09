#include<iostream>
#include<stack>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int value){
    data=value;
    next=nullptr;
    }
};

/////
void print(Node* &head)
{
    while(head=nullptr)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
 Node *removeDuplicates(Node *head) {

        if (head == nullptr) return head;

        stack<int>st;

        while(head!=nullptr){
            if(head->data!= head->next->data){
            st.push(head->data);
            head=head->next;
            }
            else{
                 head=head->next;
            }
        }

        Node* temp=head;


        while(st.empty()){
            temp->data=st.top();
            st.pop();
            temp=temp->next;
        }


      return head;


    }
int main()
{
    Node *head=nullptr;
    Node*temp=nullptr;
    int arr[]={1,2,3,4,5,6};

    for(int i=0;i<6;i++)
    {
        if(head==nullptr){
            head=new Node(arr[i]);
        }
        else{
            temp=new Node(arr[i]);
            temp->next=head;
            head=temp;
        }
    }

    print(head);
}
