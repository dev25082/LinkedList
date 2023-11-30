Node* InsertatK(Node* head, int val, int k) {

  Node* newNode = new Node(val);

  if (head == nullptr){
    if(k==1) return newNode; 
    else return NULL;
  } 

  if(k==1){
    newNode->next = head;
    head = newNode;
    return head;
  }

  int cnt=0; Node* temp = head;
  while(temp!=NULL){
    cnt++;

    if(cnt==k-1){
        newNode->next=temp->next;
        temp->next=newNode;
        break;
    }
    temp=temp->next;
  }
return head;

}
