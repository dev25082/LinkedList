Node *sortList(Node *head)
{
   vector<int>arr;
   Node*temp=head;
   while(temp){
	   arr.push_back(temp->data);
	   temp=temp->next;
   }
   sort(arr.begin(),arr.end());
   temp=head;
   int i = 0; 
   while(temp){
        temp->data=arr[i];
	    temp=temp->next;
	    i++;
   }
   return head;
}


T.C. = O(N + NlogN + N) 
T.C. = O(N)





Approach:2



 Node *findMiddle(Node *head) {
  if(!head || !head->next) return head;
    Node*slow=head,*fast=head->next; 
    while(fast!=NULL && fast->next!=NULL){
    slow=slow->next;
    fast=fast->next->next;
    }
    return slow;
}


Node* merge(Node* first, Node* second)
{   
    Node*temp1 = first, *temp2 = second;
    Node*dummyNode = new Node(-1);
    Node*temp=dummyNode;
    
    while (temp1 && temp2){
      if (temp1->data < temp2->data) {
        temp->next = temp1;
        temp = temp1;
        temp1 = temp1->next;
      }
      else{
        temp->next = temp2;
        temp = temp2;
        temp2=temp2->next;
      }
    }
    if (temp1)  temp->next = temp1;
    else temp->next = temp2;
    return dummyNode->next;
}


Node* sortList(Node* head){

 if(!head || !head->next) return head;
    Node*mid  =  findMiddle(head);
    Node*lefthead  =  head; 
    Node*righthead =  mid->next;
    mid->next =  NULL;
    lefthead  =  sortList(lefthead); 
    righthead =  sortList(righthead);
   
    return merge(lefthead, righthead);
}

T.C. = O(logN(N+N/2) => O(NlogN)
T.C. = O(logN)
