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

void print(Node *head){
    while(head!=NULL){
    cout<<head->data<<" ";
    head=head->next;
    }
  cout<<endl;
}

void insertBeforeNode(Node*node, int val){

    Node* temp = node->prev;
    
    
    Node* newNode = new Node(val);
    
    newNode->prev=temp;
    newNode->next=node;
    temp->next = newNode;
    node->prev = newNode;
    
    return;
}

int main() {
    vector<int> arr = {2,8,5,7};
    Node* head = convertArraytoDLL(arr);
    insertBeforeNode(head->next,100);
    print(head);
    return 0;
}
