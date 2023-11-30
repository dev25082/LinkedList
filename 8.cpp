#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = nullptr;
    }
};


Node *convertArraytoLL(vector<int> arr){
    Node *head = new Node(arr[0]);
    Node *current = head;

    for (int i = 1; i < arr.size(); ++i){
        Node *temp = new Node(arr[i]);
        current->next = temp;
        current = current->next;
        // current = temp;
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


Node* RemoveKthElement(Node *head,int k){
    if(head ==NULL|| k <= 0) return head;
    if(k==1){
        Node *temp = head;
        head=head->next;
        delete temp;
        return head;
    }

     int cnt=0;
     Node *temp = head, *prev=NULL;
     while(temp !=NULL){
        cnt++;
        if(cnt==k){
          prev->next=prev->next->next;
          delete temp;
          break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}


int main(){
    vector<int> arr = {2, 5, 8, 7};
    Node *head = convertArraytoLL(arr);
    head= RemoveKthElement(head,44);
    print(head);
}
