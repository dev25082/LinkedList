Approach 1: using stack


# include <bits/stdc++.h>>
Node* reverseLinkedList(Node *head)
{
    if(head==NULL || head->next==NULL) return head;
    Node*temp=head;
    stack<int>st;
    while(temp){
        st.push(temp->data);
        temp=temp->next;
    }
    temp=head;
    while(temp){
        temp->data=st.top();
        st.pop();
        temp=temp->next;
    }
    return head;
}

T.C. = O(2N)
S.C. = O(N)

    Approach 2: Iterative

    Node* reverseLinkedList(Node *head)
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

T.C. = O(N)
S.C. = O(1)


        Approach 3: Recursive

    Node* reverseLinkedList(Node *head)
{   
    if(head==NULL || head->next==NULL) return head;
    Node* newHead = reverseLinkedList(head->next);
    Node* front = head->next;
    front->next = head;
    head->next = NULL;
    return newHead;
}


T.C. = O(N)
S.C. = O(N) // recursive stack space
