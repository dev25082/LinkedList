// Insert the value before the given element 

Node* InsertBeforeElement(Node* head, int val, int element) {

  Node* newNode = new Node(val);

  if (head == nullptr){
    return NULL;
  } 

  if(head->data == element){
    newNode->next = head;
    head = newNode;
    return head;
  }

   Node* temp = head;
  while(temp->next!=NULL ){
    if(temp->next->data == element){
        newNode->next=temp->next;
        temp->next=newNode;
        break;
    }
    temp=temp->next;
  }
return head;
}
