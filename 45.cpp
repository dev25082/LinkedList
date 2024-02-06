 Node* reverseLL(Node *head)
{
    if(head==NULL || head->next==NULL) return head;
    Node*temp=head,*prev =NULL;
    while(temp){
        Node*front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    }
    return prev;
}


Node *getkthNode(Node*temp,int k){
    k-=1;
    while(temp && k>0){
        temp=temp->next;
        k--;
    }
    return temp;
}


Node* kReverse(Node* head, int k) {

      Node*temp=head,*prevNode=NULL;

      if(head==NULL || head->next==NULL) return head;
    
      while(temp){
      Node* KthNode = getkthNode(temp,k);
      if (KthNode == NULL) {
        if (prevNode) prevNode->next = temp;
        break;
      }

      Node* nextNode = KthNode->next;
      KthNode->next = NULL;
      reverseLL(temp);

      if (temp == head)
        head = KthNode;

      else
        prevNode->next = KthNode;

      prevNode = temp;
      temp = nextNode;
      }
      return head;
}


Time Complexity :- O(n) + O(n) = O(2n)

Space Complexity :- O(1)

