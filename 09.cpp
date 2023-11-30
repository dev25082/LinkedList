Node* RemoveValue(Node *head,int val){
    if(head == NULL ) return head;
  
    if(head->data == val){
        Node *temp = head;
        head=head->next;
        delete temp;
        return head;
    }

     Node *temp = head, *prev=NULL;
  
     while(temp !=NULL){
        if(temp->data == val){
          prev->next = prev->next->next;
//        prev->next = temp->next;
          delete temp;
          break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}
