Approach 1 :- 

Node *findMiddle(Node *head) {
    Node*temp=head;
    int cnt=0;
    while(temp){
        cnt++;
        temp=temp->next;
    }
    int middle = (cnt/2)+1;
    temp=head;
    while(temp){
        middle--;
        if(middle==0){
            break;
        }
       temp=temp->next;
    }
    return temp;
}


T.C.  =  O(n+n/2) ==> O(3n/2)
S.C.  =  O(1)

  
  Approach 2 :- 
  
  Node *findMiddle(Node *head) {
    Node*slow=head,*fast=head; 
    while(fast!=NULL && fast->next!=NULL){
    slow=slow->next;
    fast=fast->next->next;
    }
    return slow;
}


T.C.  =  O(n/2)
S.C.  =  O(1)
