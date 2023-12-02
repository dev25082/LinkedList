// node!=head

void deleteNode(Node* temp){
    Node* back=temp->prev;
    Node* front=temp->next;

     if(front==NULL){
        temp->prev=NULL;
        back->next=NULL;
        delete temp;
        return ; 
     }
    back->next=front;
    front->prev=back;

    temp->prev=NULL;
    temp->next=NULL;

    delete temp;
}

/*

int main() {
    vector<int> arr = {2, 5, 8, 7};
    Node* head = convertArraytoDLL(arr);
    deleteNode(head->next);
    print(head);
    return 0;
}

*/
