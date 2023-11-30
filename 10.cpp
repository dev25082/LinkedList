

Node* InsertHead(Node* head, int val) {
    Node* temp = new Node(val);
    temp->next = head;
    head = temp;
    return head;
}
