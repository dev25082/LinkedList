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

Node* AddtoNumbers(Node* head1, Node* head2) {
    Node* dummyNode = new Node(-1);
    Node* current = dummyNode;

    Node* temp1 = head1;
    Node* temp2 = head2;

    int carry = 0;

    while (temp1 != NULL || temp2 != NULL) {
        int sum = carry;
        if (temp1) sum += temp1->data;
        if (temp2) sum += temp2->data;

        Node* newNode = new Node(sum % 10);
        carry = sum / 10;

        current->next = newNode;
        current = current->next;

        if (temp1) temp1 = temp1->next;
        if (temp2) temp2 = temp2->next;
    }

    if (carry != 0) {
        Node* newNode = new Node(carry);
        current->next = newNode;
    }

    return dummyNode->next;
}

int main() {
    vector<int> arr1 = {2,4,6};
    vector<int> arr2 = {3,8,7};
    Node* head1 = convertArraytoSLL(arr1);
    Node* head2 = convertArraytoSLL(arr2);
    Node* head;

    head = AddtoNumbers(head1, head2);
    print(head);

    return 0;
}
