Node* InsertatK(Node* head, int val, int k) {

  Node* newNode = new Node(val);

  if (head == nullptr){
    if(k==1) return newNode; 
    else return NULL;
  } 

  if(k==1){
    newNode->next = head;
    head = newNode;
    return head;
  }

  int cnt=0; Node* temp = head;
  while(temp!=NULL){
    cnt++;

    if(cnt==k-1){
        newNode->next=temp->next;
        temp->next=newNode;
        break;
    }
    temp=temp->next;
  }
return head;

}



###########################################################################// 0 based indexing /////////######################################################################################################################

https://www.codingninjas.com/studio/problems/insertion-in-a-singly-linked-list_4609646?leftPanelTabValue=PROBLEM



#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    Node(int data){
        this->data=data;
        next=nullptr;
    }
    
};

Node* convertArraytoLL(vector<int>arr){

    if (arr.empty()) return NULL;
    
    Node* head = new Node(arr[0]);
    Node* current = head;

    for (int i = 1; i < arr.size(); ++i) {
        Node* temp = new Node(arr[i]);
        current->next = temp;
        current = current->next;
     // current = temp;
    }
     return head;
}

void print(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}



Node* insert(Node* head, int n, int pos, int val) {
    Node* newNode = new Node(val);

    if (head == nullptr) {
        if (pos == 0) return newNode;
        else return nullptr;
    }

    if (pos == 0) {
        newNode->next = head;
        head = newNode;
        return head;
    }

    if (pos == n) {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = nullptr;
        return head;
    }

    Node* temp = head;
    Node* prev = nullptr;
    int cnt = 0;

    while (temp != nullptr) {
        if (cnt == pos) {
            newNode->next = temp;
            prev->next = newNode;
            break;
        }
        prev = temp;
        temp = temp->next;
        cnt++;
    }

    return head;
}


int main(){
    vector<int>arr={2,5,7,8};
    Node* head = convertArraytoLL(arr);
    head=insert(head,4,4,88);
    print(head);
    }
    
