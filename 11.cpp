Node* InsertTail(Node* head, int val) {
    Node* newNode = new Node(val);

    if (head == nullptr)  return newNode;  

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = newNode;
    return head;
}
