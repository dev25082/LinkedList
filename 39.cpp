Node* deleteMiddle(Node* head){
   if(!head || !head->next) return NULL;
   Node*fast=head,*slow=head;
   fast=fast->next->next;
   while(fast!=NULL && fast->next!=NULL){
       fast=fast->next->next;
       slow=slow->next;
   }
   Node*middle=slow->next;
   slow->next=slow->next->next;
   delete middle;
   return head;
}


T.C.= O(N/2)
S.C.= O(1)
