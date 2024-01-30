  Approach 1: 

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



 Approach 2: 



T.C. = O(N)
S.C. = O(1)
