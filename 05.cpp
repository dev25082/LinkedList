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

int SearchinLL(Node*head,int val){
    Node *temp= head;
    while(temp){
      if(temp->data==val) return 1;
      temp =temp->next;
    }
    return 0;
}

int main(){
    vector<int>arr={2,5,8,7};
    Node* head = convertArraytoLL(arr);
    cout<<SearchinLL(head,2);
}
