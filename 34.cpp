Approach 1 : storing the node and check using hashing(unordered map)

# include <bits/stdc++.h>
Node* findIntersection(Node *firstHead, Node *secondHead)
{
    unordered_map<Node*,int>mp;   
    Node*temp=firstHead;
    while(temp){                //O(N*1)
        mp[temp]=1;               // storing O(N*1)
        temp=temp->next;
    }
    temp=secondHead;
    while(temp){                                            //O(M*1)
         if (mp.find(temp) != mp.end()) return temp;          
        temp=temp->next;
    }
    return NULL;
}

T.C. = O(N+M)
S.C. = O(N)






  
  Approach 2: Comparision( both t1 and t2 should be at same vertical level)

# include <bits/stdc++.h>
Node*collosionPoint(Node* t1, Node* t2,int d){
    while(d){                     // O(N2-N1)
        d--;
        t2=t2->next;
    }
    while(t1!=t2){                  //O(N1)
        t1=t1->next;
        t2=t2->next;
    }
    return t1;
}
Node* findIntersection(Node *firstHead, Node *secondHead)
{
    if (!firstHead || !secondHead) return NULL;
  Node*t1=firstHead,*t2=secondHead;
  int N1=0,N2 =0;
  while(t1){          // O(N1)
      N1++;
      t1=t1->next;
  }
  while(t2){           // O(N2)
      N2++;
      t2=t2->next;
  }
  if(N1<N2) return collosionPoint(firstHead,secondHead,N2-N1);
  else{
       return collosionPoint(secondHead,firstHead,N1-N2);
  }
}


T.C. = O(N1+2N2)
S.C. = O(1)






  

  Approach 3: 


Node* findIntersection(Node *firstHead, Node *secondHead)
{
    if (!firstHead || !secondHead) return NULL;
    Node*t1=firstHead,*t2=secondHead;
    while(t1!=t2){
        t1=t1->next;
        t2=t2->next;
        if(t1==t2) return t1;
        if(t1==NULL)t1=secondHead;
        if(t2==NULL)t2=firstHead;
    }
    return t1;
}

T.C. = O(N+M)  // when it never coloided
S.C. = O(1)


  
