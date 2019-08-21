
//Structure definition
typedef struct Node{
	struct Node *prev;//pointer to store the address of the previous node
	int val;
	struct Node *next;//pointer to store the address of the next node
}Node;

//Function Prototypes
Node *CreateNode(int);
Node *Delete_from_end(Node*, int);
Node *Delete_from_start(Node*);
Node *Delete_from_position(Node*, int);

//Function to delete from the beginning of a doubly linked list
Node *Delete_from_beginning(Node *head){
	Node *temp;
	if(head==NULL){
		cout<<"\nEmpty list";
		exit(0);
	}
	else{
		temp=head;
		head=head->next;
		delete temp;
	}
	return head;
}

//Function to delete from the end of a doubly linked list
Node *Delete_from_end(Node *head){
	Node *temp=head,*prev;
	if(head==NULL){
		cout<<"\nEmpty list";
		exit(0);
	}
	else{
		if(temp->next==NULL){
			head=NULL;
			free(temp);
		}
		while(temp->next){
			prev=temp;
			temp=temp->next;
		}
		// ptr=temp->next;
		prev->next=NULL;
		delete temp;
	}
	return head;
}

//Function to delete from any position of a doubly linked list
Node *Delete_from_position(Node *head, int pos){
	Node *temp=head,*prev;
	int c=0,i=1;
	if(head==NULL)
		cout<<"\nEmpty list";
		
	while(temp){
		c++;
		temp=temp->next;
	}
	temp=head;
	if(pos>c)
		printf("\nLocation exceeded");
	while(i<pos){
		prev=temp;
		temp=temp->next;
		i++;
	}
	if(pos==1){
		temp=head;
		head=head->next;
		delete temp;
	}
	else if(pos==c){
		prev->next=NULL;
		delete temp;
	}
	else{
		prev->next= temp->next;
		temp->next->prev=prev;
		delete temp;
	}
	return head;
}
