Node* InsertHead(Node*& head, int val) {
    Node* NewNode = new Node(val);

    if (head == NULL) return NewNode;

    NewNode->next = head;
    head->prev = NewNode;
    head = NewNode;

    return head;
}

//By using Node*& head as the parameter, you pass the head pointer by reference, and any changes made to head 
//inside the function will affect the original head pointer in the calling code.
