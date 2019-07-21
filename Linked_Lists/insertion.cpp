
//Structure Definition
typedef struct Node{
	int data;
	Node *next;
}Node;

//Function prototypes
Node *CreateNode(int);
Node *Insert_at_end(Node*, int);
Node *Insert_at_start(Node*, int);
Node *Insert_at_position(Node*, int, int);

//Function to create a new node
Node *CreateNode(int data){
	Node *newnode;
    //memory allocation for the new node
	newnode = new Node;
	newnode->data= data;
	newnode->next= NULL;
	return newnode;
}

//Insertion at the end of the linked list
Node *Insert_at_end(Node *head, int data){
	Node *newnode,*temp=head;
	newnode= CreateNode(data);
	if(head==NULL)
		head= newnode;
	else{
		for(temp=head;temp->next!=NULL;temp=temp->next);
			temp->next=newnode;
	}
	return head;
} 

//Insertion at the beginning of the list
Node *Insert_at_start(Node *head, int data){
	Node *newnode;
	newnode =CreateNode(data);
	if(head==NULL)
		head=newnode;
	else{
		newnode->next= head;
		head= newnode;
	}
	return head;
}

//Insertion at a given position in the list
Node *Insert_at_position(Node *head, int data, int pos){
	Node *newnode, *temp=head,*temp1;
	int i=1;
	newnode= CreateNode(data);
	if(head==NULL)
		head=newnode;
	else{
		while(i<pos-1){
			temp= temp->next;
			i++;
		}
		temp1= temp->next;
		temp->next= newnode;
		newnode->next= temp1;
	}
	return head;
}

