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

int lengthofLL(Node*head){

    int cnt=0;
    Node *temp= head;
    while(temp){
      temp =temp->next;
      cnt++;
    }
    return cnt;
}

int main(){
    vector<int>arr={2,5,8,7};
    Node* head = convertArraytoLL(arr);
    cout<<lengthofLL(head);
}
