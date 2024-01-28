Approach 1 using stack

# include <bits/stdc++.h>
bool isPalindrome(Node *head)
{
   Node*temp=head;
   stack<int>st;
   while(temp){
       st.push(temp->data);
       temp=temp->next;
   }
   temp=head;
   while(temp){
       if(temp->data!=st.top()) return false;
        st.pop();
        temp=temp->next;  
   }
   return true;
}

T.C. = O(2N)
S.C. = O(N)

  
Approach 2 
   
# include <bits/stdc++.h>

Node* reverseLinkedList(Node* head) {
    if (head == NULL || head->next == NULL)  return head; 
    Node* newHead = reverseLinkedList(head->next);
    Node* front = head->next;
    front->next = head;
    head->next = NULL;
    return newHead;
}

bool isPalindrome(Node* head) {
    if (head == NULL || head->next == NULL) return true;
    Node* slow = head;
    Node* fast = head;
    while (fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;  
        fast = fast->next->next;  
    }
    Node* newHead = reverseLinkedList(slow->next);
    Node* first = head;  
    Node* second = newHead; 
    while (second != NULL) {
        if (first->data != second->data) {
            reverseLinkedList(newHead); 
            return false;
        }
        first = first->next;
        second = second->next;  
    }
    reverseLinkedList(newHead);  
    return true;  
}

T.C. = O(2N)
S.C. = O(1)
