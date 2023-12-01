#include <iostream>
#include <vector>
using namespace std;

// Define a Node class for a doubly linked list
class Node {
public:
    int data;      // Data of the node
    Node* next;    // Pointer to the next node in the list
    Node* prev;    // Pointer to the previous node in the list

    // Constructor with three parameters to initialize data, next, and prev
    Node(int data1, Node* next1, Node* prev1) {
        this->data = data1;
        this->next = next1;
        this->prev = prev1;
    }

    // Constructor with one parameter to initialize data and set next and prev to nullptr
    Node(int data) {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

int main() {
    // Sample vector for initializing the linked list
    vector<int> arr = {2, 5, 8, 7};

    // Create a node 'y' with the value 2 and no next or prev nodes
    Node* y = new Node(arr[0]);

    // Print the memory address of node 'y'
    cout << "Memory Address of Node 'y': " << y << endl;

    // Accessing y->data, y->next, and y->prev assuming they are explicitly set to nullptr
    cout << "Data of Node 'y': " << y->data << endl;

}
