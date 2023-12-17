Approach 1 : 

T.C. = O(length) + O(length-N)
S.C. = O(1)

Node* DeleteNthNodeFromLast(Node* head,int N) {
    
    Node*temp = head;
   int cnt=0 , res=0;
   while(temp!=NULL){
      cnt++;
      temp=temp->next;
    }
     
    if(cnt==N){
        Node* newhead=head->next;
        delete(head);
        return newhead;
    }
      res=cnt-N;
      temp=head;

    while(temp!=NULL){
       res--;
       if(res==0){
        break;
       }
       temp =temp->next;
      }
      Node* temp2 = temp->next;
      temp->next=temp->next->next;
      delete(temp2);
      return head;
}





Approach 2 : 

T.C. = O(length) 
S.C. = O(1)


Node* DeleteNthNodeFromLast(Node* head,int N) {
    
    Node* fast = head;
    Node* slow = head;
    for(int i=0; i<N; i++) fast = fast->next;
    if(fast == NULL) return head->next;
    while(fast->next!=NULL){
        fast=fast->next;
        slow=slow->next;
    }
      Node* temp2 = slow->next;
      slow->next=slow->next->next;
      delete(temp2);
      return head;
}






