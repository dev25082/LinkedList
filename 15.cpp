#include <iostream>
#include <vector>
using namespace std;


class Node {
public:
    int data;      
    Node* next;    
    Node* prev;    

    
    Node(int data1, Node* next1, Node* prev1) {
        this->data = data1;
        this->next = next1;
        this->prev = prev1;
    }

    Node(int data) {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

Node* convertArraytoDLL(vector<int> arr) {
    if (arr.empty()) return nullptr;

    Node* head = new Node(arr[0]);
    Node* current = head;

    for (int i = 1; i < arr.size(); ++i) {
        Node* temp = new Node(arr[i]);
        temp->prev = current;
        current->next = temp;
        current = current->next;
       //current = temp;
    }

   return head;
}


/*  
 Node* convertArraytoDLL(vector<int> arr) {
    if (arr.empty()) return nullptr;

    Node* head = new Node(arr[0]);
    Node* current = head;

    for (int i = 1; i < arr.size(); ++i) {
        Node* temp = new Node(arr[i],NULL,current);
        current->next = temp;
        current = current->next;
       //current = temp;
    }

   return head;
}
*/


int main() {
    vector<int> arr = {2, 5, 8, 7};
    Node* head =convertArraytoDLL(arr);
    cout<<head->data<<endl;
    cout<<head->next->data;
}
