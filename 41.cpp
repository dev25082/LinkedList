
Node * deleteAllOccurrences(Node* head, int k){

   Node*temp=head;

    while(temp){
     if(temp->data==k){
        if(temp==head){
          head=head->next;
         }
         Node*front=temp->next,*back=temp->prev;
         if(front) front->prev=back;
         if(back) back->next=front;
         delete temp;
         temp=temp->next;
        }

        else{
         temp=temp->next;
        }  
    }
    return head;
}


T.C.= O(N)
S.C.= O(1)
