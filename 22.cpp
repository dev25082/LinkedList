Node* InsertBeforeTail(Node* head,int val){
    Node* NewNode = new Node(val);
    
    if(head==NULL) return NewNode;

    if(head->next==NULL) {
        NewNode->next=head;
        head->prev=NewNode;
        return NewNode;
    }

    Node*tail=head;
    
    while(tail->next!=NULL){
        tail=tail->next;
    }
    Node*temp=tail->prev;

    NewNode->prev=temp;
    NewNode->next=tail;
    temp->next=NewNode;
    tail->prev=NewNode;
 
    return head;
}
