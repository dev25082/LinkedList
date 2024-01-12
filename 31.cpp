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
