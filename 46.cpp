#include <bits/stdc++.h>
Node*arraytoLL(vector<int> arr){
    Node*head= new Node(arr[0]);
    Node*temp=head;

   for(int i =1; i<arr.size(); i++){
    temp->next=new Node(arr[i]);
    temp=temp->next;
}
return head;
}


 Node* mergeKLists(vector<Node*> &listArray){

     vector<int>arr;
     int k = listArray.size();
     if (k == 0) return NULL;
    for (int i = 0; i < k; i++)
    {                                                                                               // T.C. ==  O(k logk )
        if (listArray[i] != NULL){
            Node*temp = listArray[i];
            while(temp){
                arr.push_back(temp->data);
                temp=temp->next;
            }
        }
    
    }
    sort(arr.begin(),arr.end());
    return arraytoLL(arr);
 }



Time Complexity :- O(K*N) + O(MlogM) + O(M)   

Space Complexity :- O(2M)

where M = K*N







#include <bits/stdc++.h>

class compare{
public:
    bool operator()(Node* a, Node* b) 
 {
        return a->data > b->data;
  }
};

Node* mergeKLists(vector<Node*> &listArray) {
  
    priority_queue<Node*, vector<Node*>, compare> pq;
    int k = listArray.size();
    if (k == 0)
        return NULL;
    for (int i = 0; i < k; i++)
    {                                                                                               // T.C. ==  O(k logk )
        if (listArray[i] != NULL)
            pq.push(listArray[i]);
    }
    Node* head = NULL;
    Node* tail = NULL;
    while (pq.size() > 0) 
    {                                                                                                  //    n*k-k  ≈ n*k  node inserted
        Node* top = pq.top();
        pq.pop();
        if (top->next != NULL)
        {
            pq.push(top->next);                                                                  // T.C. = O(n*k log n*k)
        } 
        if (head == NULL)
        {
            head = top;
            tail = top;
        }
        else 
        {
            tail->next = top;
            tail = top;
        }
    }
    return head;
}


// T.C. == O(n*k log n*k)  ≈≈  O(N log k) where N is the total no of nodes and K is the size of the list array
// S.C. == O(K)
