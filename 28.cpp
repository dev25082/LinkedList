Approach 1 : 
T.C. = O(2N)
S.C. = O(1)

Node* Sort012(Node* head) {
    
    Node* temp = head;
    
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;

    while(temp!=NULL){

        if(temp->data == 0) cnt0++;
        else if(temp->data == 1) cnt1++;
        else if(temp->data == 2) cnt2++;

        temp=temp->next;
    }
        temp=head;

         while (temp != NULL) {
        if (cnt0) {
            temp->data = 0;
            cnt0--;
        } 
        else if (cnt1) {
            temp->data = 1;
            cnt1--;
        } 
        else  {
            temp->data = 2;
            cnt2--;
        }
        temp = temp->next;
         } 

    return head;
    
}


Approach 2 : 
T.C. = O(N)
S.C. = O(1)



#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data1, Node* next1) {
        this->data = data1;
        this->next = next1;
    }

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

Node* convertArraytoSLL(vector<int> arr) {
    if (arr.empty()) return nullptr;

    Node* head = new Node(arr[0]);
    Node* current = head;

    for (int i = 1; i < arr.size(); ++i) {
        Node* temp = new Node(arr[i]);
        current->next = temp;
        current = current->next;
    }

    return head;
}

void print(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node* Sort012(Node* head) {

    if(head == NULL || head->next == NULL) return head;

    Node *ZeroHead = new Node(-1) , *Zero = ZeroHead;
    Node *OneHead = new Node(-1)  , *One  = OneHead;
    Node *TwoHead = new Node(-1)  , *Two  = TwoHead;
    
    Node*temp= head;

    while(temp != NULL){

        if(temp->data == 0){
            Zero->next= temp;
            Zero=temp;
        }
        else if(temp->data == 1){
            One->next= temp;
            One=temp;
        }
        else{
            Two->next= temp;
            Two=temp;
        }
           temp=temp->next;
        }
        Zero->next =  OneHead->next ? OneHead->next : TwoHead->next;
        One->next  =  TwoHead->next;
        Two->next  =  NULL;

        head= ZeroHead->next;

        delete ZeroHead;
        delete OneHead;
        delete TwoHead;

        return head;
    }


int main() {
    vector<int> arr1 = {1,2,0,0,2,1,0,1,0};
    Node* head = convertArraytoSLL(arr1);

    head = Sort012(head);
    print(head);

    return 0;
}





    
    
