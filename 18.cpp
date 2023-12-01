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

Node* RemoveKthElement(Node* head , int k) {
    if (head == NULL || k <= 0) return NULL; 
    
    int cnt = 0 ;
    Node* temp = head;

    while(temp!=NULL){
        cnt++;
        if(cnt == k) break;

    temp = temp->next;
    }

    Node* back  = temp->prev;
    Node* front = temp->next;

    if(back == NULL && front == NULL ) return NULL;
    
    if(back == NULL){
        head=head->next;
        temp->next  = NULL;
        front->prev = NULL;

        delete temp;
        return head;
    }

    else if(front == NULL){
        
        temp->prev  = NULL;
        back->next = NULL;
        
        delete temp;
        return head;
    }

    back->next=front;
    front->prev=back;

    temp->prev  = NULL;
    temp->next  = NULL;

    return head;
}

int main() {
    vector<int> arr = {2, 5, 8, 7};
    Node* head = convertArraytoDLL(arr);
    head = RemoveKthElement(head,1);
    print(head);
    return 0;
}
