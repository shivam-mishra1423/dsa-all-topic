#include <iostream>
#include <queue>
using namespace std;

struct node {
    int data;
    node* left;
    node* right;

    // Constructor to initialize node
    node(int val) : data(val), left(NULL), right(NULL) {}
};

int main() {
    queue<node*> q;  // Queue to process nodes
    int first, second, cnt = 0;

    // Creating the root node
    cout << "Enter the root value: ";
    cin >> first;
    node* root = new node(first);
    q.push(root);

    while (!q.empty()) {
        // Get the front node from the queue
        node* temp = q.front();
        cout << "Before pop: Node value = " << temp->data << ", Node address = " << temp << endl;
        q.pop();  // Remove the front element from the queue

        cout << "After pop: Node value = " << temp->data << ", Node address = " << temp << endl;
        cnt++;

        // Input for the left child of the current node
        cout << "Enter the left node of the value " << temp->data << ": ";
        cin >> first;
        if (first != -1) {
            temp->left = new node(first);
            q.push(temp->left);
            cout << "Left child created: " << temp->left->data << ", Address = " << temp->left << endl;
        }

        // Input for the right child of the current node
        cout << "Enter the right node of the value " << temp->data << ": ";
        cin >> second;
        if (second != -1) {
            temp->right = new node(second);
            q.push(temp->right);
            cout << "Right child created: " << temp->right->data << ", Address = " << temp->right << endl;
        }
    }

    cout << "Total nodes generated: " << cnt << endl;

    return 0;
}

