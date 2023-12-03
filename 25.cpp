
// Approach 1

Node*ReverseDLL(Node*head){

    Node*temp=head;
    stack<int>st;

    while(temp!=NULL){
        st.push(temp->data);
        temp= temp->next;
    }

     temp = head;

     while(temp!=NULL){
        temp->data=st.top();
        st.pop();
        temp = temp->next;
    }
    return head;
}

T.C. = O(2N)
S.C. = O(N)

  
// Approach 2

  Node* ReverseDLL(Node* head) {
    if (head == NULL || head->next == NULL) return head;

    Node* last = NULL;
    Node* current = head;

    while (current != NULL) {
        last = current->prev;
        current->prev = current->next;
        current->next = last;
        current = current->prev;
    }

    
    return last->prev; 
}


T.C. = O(N)
S.C. = O(1)
