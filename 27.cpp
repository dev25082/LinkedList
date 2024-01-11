Approach 2 : T.C. = O(2N)
              S.C.= O(N)

Node *OddtoEven(Node *head)
{
    if (head == nullptr || head->next == nullptr)
        return head;

    vector<int> v;
    Node *temp = head;

    // Traverse odd-indexed nodes
    while (temp != NULL && temp->next != NULL)
    {
        v.push_back(temp->data);
        temp = temp->next->next;
    }
    if (temp)  v.push_back(temp->data);

    // Traverse even-indexed nodes
    temp = head->next;
    while (temp != NULL && temp->next != NULL)
    {
        v.push_back(temp->data);
        temp = temp->next->next;
    }
    if (temp)  v.push_back(temp->data);

    // Update the linked list with rearranged data
    int i = 0;
    temp = head;
    while (temp != NULL)
    {
        temp->data = v[i];
        i++;
        temp = temp->next;
    }
    return head;
}



Approach 2 : T.C. = O(N)
              S.C.= O(1)


Node *OddtoEven(Node *head)
{
        if(head == NULL || head->next == NULL ) return head;
        
         Node* odd = head;
         Node* even = head->next;
         Node* evenhead = head->next;

        while(even != NULL && even->next != NULL){
            odd->next = odd->next->next;
            even->next = even->next->next;

            odd = odd->next;
            even= even->next;
        }

        odd->next = evenhead;

        return head;
    }

