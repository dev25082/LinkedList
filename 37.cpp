  Approach 1  : store the node and check if same node repeats(map)

#include<bits/stdc++.h>
bool detectCycle(Node *head)
{
	unordered_map<Node*,int>mp;
    Node*temp=head;
    while(temp){
       if(mp.find(temp)!=mp.end())return true;
        mp[temp]=1;
        temp=temp->next;
    }
    return false;
}

T.C. = O(N)
S.C. = O(N)



 Approach 2 : Tortoise and Hare


bool detectCycle(Node *head)
{
   Node*slow = head,*fast = head;
   
   while(fast != NULL && fast->next != NULL){
       slow=slow->next;
       fast=fast->next->next;
       if(slow == fast) return true;
    }
    return false;
}


T.C. = O(N)
S.C. = O(1)
