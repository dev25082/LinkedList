Approach : 1
  
#include <bits/stdc++.h>
int lengthOfLoop(Node *head) {
	unordered_map<Node*,int>mp;
    Node*temp=head;
    int timer = 1;
    while(temp){
       if(mp.find(temp) != mp.end()){
           int value = mp[temp];
           return timer-value ;
       }
        mp[temp]=timer;
        timer++;
        temp=temp->next;
    }
    return 0;  
}


T.C.=O(N * 2*map function)
S.C.=O(N)


Approach : 2


int findlength(Node*slow,Node*fast){
  int cnt=1;
  fast=fast->next;
  while(slow!=fast){
    cnt++;
    fast=fast->next;
  }
  return cnt;
}

int lengthOfLoop(Node *head) {
  Node *slow=head,*fast=head;
  while(fast!=NULL&& fast->next!=NULL)  { 

      slow=slow->next;
      fast=fast->next->next;

      if(slow==fast) return findlength(slow,fast);
  }
  return 0;
}


T.C.=O(N * length of loop)
S.C.=O(1)


  
