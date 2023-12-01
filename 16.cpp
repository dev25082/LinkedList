Node* RemoveHead(Node* head) {
    if (head == NULL || head->next == NULL) {
        delete head;
        return NULL; 
    }

    Node* temp = head;
    head = head->next;
    
    head->prev = NULL;
    temp->next = NULL;

    delete temp;
    return head;
}
