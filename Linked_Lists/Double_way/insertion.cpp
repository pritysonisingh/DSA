//Structure definition
typedef struct Node{
	struct Node *prev;//pointer to store the address of the previous node
	int val;
	struct Node *next;//pointer to store the address of the next node
}Node;

//Function Prototypes
Node *CreateNode(int);
Node *Insert_at_beginning(Node*, int);
Node *Insert_at_end(Node*, int);
Node *Insert_at_position(Node*, int, int);

//Function to create a new node
Node *CreateNewNode(int val){
	Node *newnode;
	newnode= (Node*)malloc(sizeof(Node));
	newnode->prev=NULL;
	newnode->next=NULL;
	newnode->val= val;
	return newnode;
}

//Function to insert at the beginning of a doubly linked list
Node *Insert_at_beginning(Node *head,int val){
	Node *newnode;
	newnode = CreateNewNode(val);
	if(head==NULL)
		head= newnode;
	else{
		newnode->next=head;
		newnode->prev=NULL;
		head= newnode;
	}
	return head;
}

//Function to insert at the end of a doubly linked list
Node *Insert_at_end(Node *head, int val){
	Node *newnode,*temp;
	newnode = CreateNewNode(val);
	if(head==NULL)
		head= newnode;
	else{
		for(temp=head;temp->next!=NULL;temp=temp->next);
		temp->next=newnode;
		newnode->prev= temp;
	}
	return head;
}

//Function to insert at any position of a doubly linked list
Node *Insert_at_pos(Node *head,int val,int pos){
	Node *newnode,*temp=head,*temp1;
	int i=1;
	// static int c=0;
	newnode = CreateNewNode(val);
	if(head==NULL)
		head= newnode;
	else{
		for(temp=head;temp->next!=NULL;temp=temp->next)
			c++;
		if(pos==1){
			newnode->next=head;
			head= newnode;
			return head;
		}
		else if(pos==c){
			for(temp=head;temp->next!=NULL;temp=temp->next);
			temp->next=newnode;
			newnode->prev= temp;
		}
		else{
			while(i<pos-1){
				temp=temp->next;
				i++;
			}
			temp1= temp->next;
			temp->next=newnode;
			newnode->prev= temp;
			newnode->next = temp1;
		}
	}
	return head;
}

