//Structure Definition
typedef struct Node{
	int data;
	Node *next;
}Node;

//function prototype
Node *Reverse(Node*);

//Function to reverse a linked list
Node *Reverse(Node *head){
	Node *prev, *curr, *ptr;
	if(head->next==NULL)
		return NULL;

	curr = head;
	prev = curr->next;
	curr->next = NULL;

	while(prev->next){
		ptr = prev->next;
		prev->next = curr;
		curr = prev;
		prev = ptr;
	}

	prev->next = curr;
	head = prev;
	
    return head;
}
