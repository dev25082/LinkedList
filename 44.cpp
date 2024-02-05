Node *rotate(Node *head, int k) {
     if(head==NULL||k==0) return head;
     int length = 1,cnt=1;
     Node*tail=head,*temp=head;

     while(tail->next != NULL){
          length++;
          tail=tail->next;
     }
     
     if(k % length == 0) return head;

     k = k % length;

     tail->next=head;
     k = length-k;

     while (temp != NULL) {                          // for (int i = 0; i < k - 1; i++) {temp = temp->next;}
         if(cnt == k) break;
         cnt++;
         temp=temp->next;
     }

     head=temp->next;
     temp->next=NULL;
     return head;
}


Time Complexity :- O(n) + O(n) = O(2n)

Space Complexity :- O(1)
