Approach 1:


Node *reverse(Node *head){
    if(head==NULL || head->next==NULL) return head;
    Node *temp=head,*prev=NULL;
    while(temp){
      Node*front=temp->next;
      temp->next=prev;
      prev=temp;
      temp=front;
  }
    return prev;
}

Node *addOne(Node *head)
{
    head=reverse(head);
    Node *temp=head;
    int carry=1;
    while(temp){
        temp->data = temp->data + carry;
        if(temp->data<10){
            carry=0;
            break;
        }
        else{
            temp->data=0;
            carry=1;
        }
        temp=temp->next;
    }
    if(carry){
        Node *newNode= new Node(1);
        head=reverse(head);
        newNode->next=head;
        return newNode;
    }
    head=reverse(head);
    return head;
}

T.C. = O(3N)
S.C. = O(1)



Approach 2: backtracking
    
    int addhelper(Node*temp){
    if(temp==NULL) return 1;
    int carry=addhelper(temp->next);
    temp->data+=carry;
    if(temp->data<10) return 0;
    temp->data = 0;
    return 1;
}

Node *addOne(Node *head)
{
    int carry = addhelper(head);
    if(carry==1){
        Node *newNode = new Node(1);
        newNode->next=head;
        head=newNode;
    }
    return head;
}


T.C. = O(N)
S.C. = O(N)
