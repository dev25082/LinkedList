Approach 1  : hashing

#include<bits/stdc++.h>
Node *firstNode(Node *head)
{
    unordered_map<Node*,int>mp;
    Node*temp=head;
    while(temp){
       if(mp.find(temp)!=mp.end())return temp;
        mp[temp]=1;
        temp=temp->next;
    }
    return 0;
}

T.C. = O(N)
S.C. = O(N)



 Approach 2 : Tortoise and Hare
  
  Node *firstNode(Node *head)
{
   Node*slow = head,*fast = head;
   
   while(fast != NULL && fast->next != NULL){
       slow=slow->next;
       fast=fast->next->next;
       if(slow == fast){
           slow=head;
           while(slow!=fast){
           slow=slow->next;
           fast=fast->next;
         }
         return slow;
       }
    }
    return 0;   
}


T.C. = O(N)
S.C. = O(1)
