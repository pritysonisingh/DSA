
//Structure Definition
typedef struct Node{
	struct Node *prev;//pointer to store the address of the previous node
	int val;
	struct Node *next;//pointer to store the address of the next node
}Node;

//Function to reverse a double way linked list
Node *reverse(Node *head){
	Node *curr=head,*temp=NULL;
	while(curr){
		temp= curr->prev;
		curr->prev = curr->next;
		curr->next = temp;
		curr = curr->prev;
	}
	temp= temp->prev;
	head = temp;
	return head;
}
