#include <bits/stdc++.h>

Node*arrtoLL(vector<int>arr){
	Node*head = new Node(arr[0]);
	Node*temp = head;
	for(int i=1; i<arr.size();i++){
     temp->child = new Node(arr[i]);
	 temp=temp->child;
	}
	return head;
}



Node* flattenLinkedList(Node* head) 
{
	vector<int>arr;
	Node*temp=head;
	while(temp){
		Node*t2=temp;
		while(t2){
			arr.push_back(t2->data);
			t2=t2->child;
		}
		temp=temp->next;
	}
	sort(arr.begin(),arr.end());
	return arrtoLL(arr);
}


T.C. = O(N*M + XlogX + X) => O(NlogN)
T.C. = O(2X)
where X = N*M
