Node* RemoveTail(Node *head){
    if(head ==NULL || head->next==NULL) return NULL;
    Node *temp = head;

    while(temp->next->next !=NULL){
        temp=temp->next;
    }
    delete (temp->next);
    temp->next=NULL;
    return head;
}
