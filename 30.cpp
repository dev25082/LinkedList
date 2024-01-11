Node* segregateEvenOdd(Node* head) {
    if (!head || !head->next) {
        return head;  
    }

    Node *evenHead = nullptr, *evenTail = nullptr;
    Node *oddHead = nullptr, *oddTail = nullptr;

    Node* temp = head;

    while (temp) {
        if (temp->data % 2 == 0) {
            if (!evenHead) {
                evenHead = evenTail = temp;
            } else {
                evenTail->next = temp;
                evenTail = evenTail->next;
            }
        } else {
            if (!oddHead) {
                oddHead = oddTail = temp;
            } else {
                oddTail->next = temp;
                oddTail = oddTail->next;
            }
        }
        temp = temp->next;
    }

    if (evenTail) evenTail->next = oddHead;
    if (oddTail) oddTail->next = nullptr;

    return evenHead ? evenHead : oddHead;
}
