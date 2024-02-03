#include <bits/stdc++.h>
Node<int>*arraytoLL(vector<int> arr){
    Node<int>*head= new Node(arr[0]);
    Node<int>*temp=head;

   for(int i =1; i<arr.size(); i++){
    temp->next=new Node(arr[i]);
    temp=temp->next;
}
return head;
}

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{   
    Node<int>*temp1 = first, *temp2 = second;
    vector<int>arr;
    while(temp1){
        arr.push_back(temp1->data);
        temp1=temp1->next;
    }
    while(temp2){
        arr.push_back(temp2->data);
        temp2=temp2->next;
    }
    sort(arr.begin(),arr.end());
    return arraytoLL(arr);
}


Time Complexity :- O(N1) + O(N2) + O(NlogN) + O(N)

Space Complexity :- O(2N)






Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{   
    Node<int>*temp1 = first, *temp2 = second;
    Node<int>*dummyNode = new Node<int>(-1);
    Node<int>*temp=dummyNode;
    
    while(temp1 && temp2){
      if (temp1->data < temp2->data) {
        temp->next = temp1;
        temp = temp1;
        temp1 = temp1->next;
      }
      else{
        temp->next = temp2;
        temp = temp2;
        temp2=temp2->next;
      }
    }
    if (temp1)  temp->next = temp1;
    else temp->next = temp2;
    return dummyNode->next;
}


Time Complexity :- O(N1) + O(N2)

Space Complexity :- O(1)
