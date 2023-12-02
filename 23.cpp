Node* InsertBeforeKthElement(Node* head,int val,int k){
    Node* NewNode = new Node(val);

     if (head == NULL) {
        return NULL;
    }
    if(k==1){
         NewNode->next=head;
         head->prev=NewNode;
         return NewNode;
    }
    Node* temp =head;
    int cnt=0;
    
    while(temp!=NULL){
        cnt ++;
        if(cnt==k) break;
        temp=temp->next;
    }
     Node*back=temp->prev;
      
     NewNode->prev=back;
     NewNode->next=temp;
     back->next=NewNode;
     temp->prev=NewNode;
 
    return head;
}
