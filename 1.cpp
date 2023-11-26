#include <bits/stdc++.h>
using namespace std;

/*

struct Node {
    int data;      // Data of the node
    Node* next;    // Pointer to the next node in the list

    // Constructor with two parameters to initialize data and next
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    // Constructor with one parameter to initialize data and set next to nullptr
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

*/

// Define a Node class for a singly linked list
class Node {
public:
    int data;      // Data of the node
    Node* next;    // Pointer to the next node in the list

    // Constructor with one parameter to initialize data and set next to nullptr
    Node(int data) {
        this->data = data;
        next = nullptr;
    }
};


int main() {
    
    vector<int>arr={2,5,8,7};
  
  
    Node*y = new Node(arr[0],nullptr);
    // Print the memory location of node 'y' (pointer value)
    cout << y << endl;    // Output: 0xf67f30 (pointer to memory location)
    cout<<y->data<<endl;  // 2

  
    Node x = Node(arr[0],nullptr); // creating an object 
    // Error: Attempting to print the entire object 'x' without an overload for <<
    // cout << x; 
    cout<<x.data<<endl;  // 2
    cout<<x.next<<endl; // 0(nullptr)

  
   // Create a node 'z' using the constructor with one parameter
    Node*z = new Node(arr[0]);
    cout<<z->data; //2

   return 0;
  
}

    
  

    




