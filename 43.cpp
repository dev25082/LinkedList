Node * removeDuplicates(Node *head)
{
    Node*temp=head;
    while(temp != NULL && temp->next != NULL){
        Node*front=temp->next;
        while(front != NULL && front->data == temp->data){
            Node*duplicate=front;
            front=front->next;
            free(duplicate);
        }
        temp->next=front;
        if(front)front->prev=temp;

        temp=temp->next;
    }
    return head;
}



T.C.=O(N)
S.C.=O(1)
