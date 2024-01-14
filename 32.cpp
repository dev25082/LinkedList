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

  
